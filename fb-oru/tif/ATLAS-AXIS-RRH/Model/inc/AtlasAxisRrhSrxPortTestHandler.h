/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      AtlasAxisRrhSrxPortTestHandler.h
 * \brief     Test methods for ATLAS-AXIS-RRH
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run).
 *
 */

#ifndef __ATLASAXISRRHSRXPORTTESTHANDLER__H_
#define __ATLASAXISRRHSRXPORTTESTHANDLER__H_


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include <string>
#include <vector>
#include <memory>
#include "SrxPortTestHelper.h"
#include "ITif.h"
#include "IRtiMsgParser.h"
#include "Nodes/EntryFunc.h"

// Add any specific includes here %%-->

// <--%%

//=============================================================================================================
// CLASS
//=============================================================================================================

namespace Mplane {

class AtlasAxisRrhSrxPortTestHandler: public virtual ITifEntry, public EntryFunc
{
public:

	AtlasAxisRrhSrxPortTestHandler( const std::string& pathname, const std::string& comment,
    		const std::string& callFields, const std::string& returnFields,
    		IRtiMsgParser& msgParser, IRtiSettings& settings);

    virtual ~AtlasAxisRrhSrxPortTestHandler();

    static void registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings) ;

	/**
	 * Special constructor - only to be used for calling the static registerMethods()
	 */
	AtlasAxisRrhSrxPortTestHandler();

	/**
	 * Called by ITif::inject() to get this object to add it's entries
	 * @param tif
	 * @return true if ok
	 */
	virtual bool registerEntry(ITif* tif) override ;

protected:

    virtual std::string operator()(const std::string& functionName) ;

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBfs)
	 *
	 */
	void getAdcRms( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dB)
	 *
	 */
	void getAtten( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBm)
	 *
	 */
	void getCorrection( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (kHz)
	 *
	 */
	void getFreq( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBfs)
	 *
	 */
	void getFwdPathAdcRms( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBm)
	 *
	 */
	void getFwdPathCorrection( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBm)
	 *
	 */
	void getFwdPathPower( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT tssiResult (dBm)
	 *
	 */
	void getFwdTssi( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} channel
	 *
	 */
	void getPath( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBm)
	 *
	 */
	void getPower( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBfs)
	 *
	 */
	void getRevPathAdcRms( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBm)
	 *
	 */
	void getRevPathCorrection( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT value (dBm)
	 *
	 */
	void getRevPathPower( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} path
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT tssiResult (dBm)
	 *
	 */
	void getRevTssi( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   FLOAT result (DegC)
	 *
	 */
	void getTemp( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   FLOAT value (dB)
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setAtten( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   ENUM(forward:reverse) direction
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setDirection( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   FLOAT value (kHz)
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setFreq( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *   INT{1..${NUM_TX_PORTS_PER_SRX_PORT}} channel
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setPath( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT{1..${NUM_SRX_PORTS}} index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void showSynth( DataVariantList *callList, DataVariantList *returnList );



	/**
	 * Getter method for read-only variable Ports
	 *
	 * @param pathname Variable path name used as the variable name in the returnList
	 * @param returnList DataVariantList use to return variable value
	 *
	 */
	static void PortsGet(  const std::string& pathname, DataVariantList *returnList ) ;




// Add any extra methods %%-->

// <--%%

private:
	std::shared_ptr<SrxPortTestHelper> mHelper ;
};



} // Mplane

#endif /* __ATLASAXISRRHSRXPORTTESTHANDLER__H_*/
