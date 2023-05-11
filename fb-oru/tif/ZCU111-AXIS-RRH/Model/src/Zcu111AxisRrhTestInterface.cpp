/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      Zcu111AxisRrhTestInterface.cpp
 * \brief     Test interface for ZCU111-AXIS-RRH
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions.
 *
 */


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include "Zcu111AxisRrhTestInterface.h"

#include "Zcu111AxisRrhAgcTestHandler.h"
#include "Zcu111AxisRrhCarrierTestHandler.h"
#include "Zcu111AxisRrhCarrierHwTestHandler.h"
#include "Zcu111AxisRrhEmbeddedTestHandler.h"
#include "Zcu111AxisRrhEqualiserTestHandler.h"
#include "Zcu111AxisRrhFibreTestHandler.h"
#include "Zcu111AxisRrhFpgaTestHandler.h"
#include "Zcu111AxisRrhFtpTestHandler.h"
#include "Zcu111AxisRrhGpioTestHandler.h"
#include "Zcu111AxisRrhHeartbeatTestHandler.h"
#include "Zcu111AxisRrhI2cTestHandler.h"
#include "Zcu111AxisRrhOranFpgaTestHandler.h"
#include "Zcu111AxisRrhRadioStateTestHandler.h"
#include "Zcu111AxisRrhRegDevicesTestHandler.h"
#include "Zcu111AxisRrhRxPortTestHandler.h"
#include "Zcu111AxisRrhSrxPortTestHandler.h"
#include "Zcu111AxisRrhSystemTestHandler.h"
#include "Zcu111AxisRrhTxPortTestHandler.h"
#include "Zcu111AxisRrhWaveformTestHandler.h"
#include "Zcu111AxisRrhWaveformFileTestHandler.h"


using namespace Mplane ;

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
Zcu111AxisRrhTestInterface::Zcu111AxisRrhTestInterface()
{
	Zcu111AxisRrhAgcTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhCarrierTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhCarrierHwTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhEmbeddedTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhEqualiserTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhFibreTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhFpgaTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhFtpTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhGpioTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhHeartbeatTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhI2cTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhOranFpgaTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhRadioStateTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhRegDevicesTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhRxPortTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhSrxPortTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhSystemTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhTxPortTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhWaveformTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	Zcu111AxisRrhWaveformFileTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;


}

//-------------------------------------------------------------------------------------------------------------
Zcu111AxisRrhTestInterface::~Zcu111AxisRrhTestInterface()
{
}
