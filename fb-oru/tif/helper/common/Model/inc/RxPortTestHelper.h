/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      RxPortTestHelper.h
 * \brief     Test helper for common
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run).
 *
 */

#ifndef __RXPORTTESTHELPER__H_
#define __RXPORTTESTHELPER__H_


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include <string>
#include <vector>
#include <memory>
#include "IRtiMsgParser.h"
#include "DataVariant.h"

// Add any specific includes here %%-->
#include <sstream>
#include "IRadio.h"
#include "IDevices.h"
#include "ISynth.h"
#include "Frequency.h"
#include "IRxPort.h"

// <--%%

//=============================================================================================================
// CLASS
//=============================================================================================================

namespace Mplane {

class RxPortTestHelper
// Add any extra inheritance %%-->

// <--%%
{
public:

	// Add any class settings %%-->

	// <--%%

	// singleton
	static std::shared_ptr<RxPortTestHelper> getInstance() ;


	RxPortTestHelper();

    virtual ~RxPortTestHelper();

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT result (dBFS)
	 *   INT raw
	 *
	 */
	void getAdcRms( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dB)
	 *
	 */
	void getExtFilterLoss( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   INT value (kHz)
	 *
	 */
	void getFreq( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dB)
	 *
	 */
	void getIfAtten( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   INT path
	 *
	 */
	void getPath( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dB)
	 *
	 */
	void getRfAtten( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT rssiResult (dBm)
	 *
	 */
	void getRssi( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT result (DegC)
	 *
	 */
	void getTemp( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *   ENUM(on:off:follow) mode
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setEnable( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *   FLOAT{0.0..3.0} value (dB)
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setExtFilterLoss( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *   FLOAT value (kHz)
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setFreq( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *   FLOAT value (dB)
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setIfAtten( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *   INT path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setPath( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *   FLOAT value (dB)
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setRfAtten( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_RX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void showSynth( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );



	/**
	 * Getter method for read-only variable Ports
	 *
	 * @param pathname Variable path name used as the variable name in the returnList
	 * @param returnList DataVariantList use to return variable value
	 *
	 */
	static void PortsGet( const std::string& pathname, DataVariantList *returnList ) ;




// Add any extra methods %%-->
private:
	/**
	 * Get the indexed port or set an error
	 * @return shared ptr to port or NULL on error
	 */
	std::shared_ptr<IRxPort> getRxPort(DataVariantList *callList, DataVariantList *returnList) const;


	/**
	 * Check the return code after attempting to set a parameter. Sets 'Status=ERROR' and the 'Message' if failed.
	 * @param ret
	 * @param param
	 * @return false on failure
	 */
	bool checkState(ReturnType::State ret, const std::string& param, DataVariantList *returnList) const;


// <--%%

};



// Add any Mplane namespace code here %%-->

// <--%%


} // Mplane

// Add any global namespace code here %%-->

// <--%%


#endif /* __RXPORTTESTHELPER__H_*/
