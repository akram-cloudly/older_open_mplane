/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      Zcu111FbcOranrrhSystemTestHandler.h
 * \brief     Test methods for ZCU111-FBC-ORANRRH
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run).
 *
 */

#ifndef __ZCU111FBCORANRRHSYSTEMTESTHANDLER__H_
#define __ZCU111FBCORANRRHSYSTEMTESTHANDLER__H_


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include <string>
#include <vector>
#include <memory>
#include "SystemTestHelper.h"
#include "ITif.h"
#include "IRtiMsgParser.h"
#include "Nodes/EntryFunc.h"

// Add any specific includes here %%-->

// <--%%

//=============================================================================================================
// CLASS
//=============================================================================================================

namespace Mplane {

class Zcu111FbcOranrrhSystemTestHandler: public virtual ITifEntry, public EntryFunc
{
public:

	Zcu111FbcOranrrhSystemTestHandler( const std::string& pathname, const std::string& comment,
    		const std::string& callFields, const std::string& returnFields,
    		IRtiMsgParser& msgParser, IRtiSettings& settings);

    virtual ~Zcu111FbcOranrrhSystemTestHandler();

    static void registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings) ;

	/**
	 * Special constructor - only to be used for calling the static registerMethods()
	 */
	Zcu111FbcOranrrhSystemTestHandler();

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
	 *   ENUM(INTERNAL:External_10MHz:FIBRE:10G_SYNCE:25G_SYNCE) clkin
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void setClockIn( DataVariantList *callList, DataVariantList *returnList );



	/**
	 * Getter method for read-only variable ClockIn
	 *
	 * @param pathname Variable path name used as the variable name in the returnList
	 * @param returnList DataVariantList use to return variable value
	 *
	 */
	static void ClockInGet(  const std::string& pathname, DataVariantList *returnList ) ;




// Add any extra methods %%-->

// <--%%

private:
	std::shared_ptr<SystemTestHelper> mHelper ;
};



} // Mplane

#endif /* __ZCU111FBCORANRRHSYSTEMTESTHANDLER__H_*/
