/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      Zcu111MplaneOranrrhCarrierHwTestHandler.h
 * \brief     Test methods for ZCU111-MPLANE-ORANRRH
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run).
 *
 */

#ifndef __ZCU111MPLANEORANRRHCARRIERHWTESTHANDLER__H_
#define __ZCU111MPLANEORANRRHCARRIERHWTESTHANDLER__H_


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include <string>
#include <vector>
#include <memory>
#include "CarrierHwTestHelper.h"
#include "ITif.h"
#include "IRtiMsgParser.h"
#include "Nodes/EntryFunc.h"

// Add any specific includes here %%-->

// <--%%

//=============================================================================================================
// CLASS
//=============================================================================================================

namespace Mplane {

class Zcu111MplaneOranrrhCarrierHwTestHandler: public virtual ITifEntry, public EntryFunc
{
public:

	Zcu111MplaneOranrrhCarrierHwTestHandler( const std::string& pathname, const std::string& comment,
    		const std::string& callFields, const std::string& returnFields,
    		IRtiMsgParser& msgParser, IRtiSettings& settings);

    virtual ~Zcu111MplaneOranrrhCarrierHwTestHandler();

    static void registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings) ;

	/**
	 * Special constructor - only to be used for calling the static registerMethods()
	 */
	Zcu111MplaneOranrrhCarrierHwTestHandler();

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
	 *   INT Index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void diagnose( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT Index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   STRING[] ulSync
	 *   STRING[] dlSync
	 *
	 */
	void getSync( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   INT Index
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void show( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void showAll( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void showCapacity( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void showSyncAll( DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void showUsed( DataVariantList *callList, DataVariantList *returnList );


	/**
	 * Setter method for variable CalibrationMode
	 *
	 * @param pathname Variable path name used as the variable name in the returnList
	 * @param value DataVariant value
	 * @param returnList DataVariantList use to return variable value
	 * @return true if variable set; false if unable to set variable
	 *
	 */
	static bool CalibrationModeSet(  const std::string& pathname, DataVariant *value, DataVariantList *returnList ) ;

	/**
	 * Getter method for variable CalibrationMode
	 *
	 * @param pathname Variable path name used as the variable name in the returnList
	 * @param returnList DataVariantList use to return variable value
	 *
	 */
	static void CalibrationModeGet(  const std::string& pathname, DataVariantList *returnList ) ;





// Add any extra methods %%-->

// <--%%

private:
	std::shared_ptr<CarrierHwTestHelper> mHelper ;
};



} // MPLANE

#endif /* __ZCU111MPLANEORANRRHCARRIERHWTESTHANDLER__H_*/
