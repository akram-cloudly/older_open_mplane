/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      FpgaRxRfAttenuatorBus.cpp
 * \brief     Bus interface to the Rx RF attenuator via the FPGA
 *
 *
 * \details   Bus interface to the Rx RF attenuator via the FPGA
 *
 */

//=============================================================================================================
// INCLUDE
//=============================================================================================================

#include <string.h>
#include <iostream>
#include "FpgaRxRfAttenuatorBus.h"
#include "Task.h"

using namespace Mplane;


//=============================================================================================================
// CONSTANTS
//=============================================================================================================
// 5ms timeout
static const unsigned SPI_DONE_TIMEOUT_MS{5} ;

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
FpgaRxRfAttenuatorBus::FpgaRxRfAttenuatorBus(const std::string& busName, const std::string& busDetails, std::shared_ptr<IBusLock> busLock,
		std::shared_ptr<ISpiBusReadonlySettings> busSettings, unsigned index) :
		SpiBus(busName, busDetails, busLock, busSettings),
		mFpga(IFpgaMgr::getIFpgaAntennaRegs()),
		mIndex( index )
{
}

//-------------------------------------------------------------------------------------------------------------
FpgaRxRfAttenuatorBus::~FpgaRxRfAttenuatorBus()
{
}


//=============================================================================================================
// PROTECTED HOOKS
//=============================================================================================================


//-------------------------------------------------------------------------------------------------------------
bool FpgaRxRfAttenuatorBus::doWriteByte(uint32_t offset, uint8_t byte)
{
	/// Set the attenuation value
	mFpga->write_spi_rx_rf_atten(mIndex, byte);

	/// Toggle the attenuation update bit
	mFpga->write_spi_rx_rf_atten_update(0);
	usleep(50);
	mFpga->write_spi_rx_rf_atten_update(1);

    unsigned timeMs = 0;

	do
	{
		// check whether the access is complete
		if (mFpga->read_spi_rx_rf_atten_done())
		{
			return true;
		}

		// Sleep for 1ms
		Task::msSleep(1) ;
		timeMs++;

	} while (timeMs <= SPI_DONE_TIMEOUT_MS) ;

	// If SPI transaction is not complete within the timeout, then return false
	return false;
}
