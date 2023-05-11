/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      Zcu111FbcOranrrhCarrierHwTestHandler.cpp
 * \brief     Test methods for ZCU111-FBC-ORANRRH
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run)
 *
 * Add any file header comments here %%-->

 * <--%%
 *
 */


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include "Nodes/RtiDirEntry.h"
#include "Nodes/TestVar.h"
#include "Nodes/TestReadVar.h"
#include "Nodes/TestWriteVar.h"
#include "Nodes/DirClass.h"
#include "RtiKeyword.h"
#include "Zcu111FbcOranrrhCarrierHwTestHandler.h"

// Add any specific includes here %%-->

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%


//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings)
{
	// Create a directory to store the data in
	msgParser.addDir( new DirClass("/.carrierHw", "Carrier Hardware", msgParser, settings) ) ;


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhCarrierHwTestHandler("/.carrierHw/diagnose",
			"INT Index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show all register settings related to the specified carrier (including fibres, chains etc)",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhCarrierHwTestHandler("/.carrierHw/getSync",
			"INT Index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],STRING[] ulSync,STRING[] dlSync",
			"Show sync status of carrier",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhCarrierHwTestHandler("/.carrierHw/show",
			"INT Index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show debug details of carrier hardware",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhCarrierHwTestHandler("/.carrierHw/showAll",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show debug details of all carrier hardware",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhCarrierHwTestHandler("/.carrierHw/showCapacity",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show fibre/chain capacity",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhCarrierHwTestHandler("/.carrierHw/showSyncAll",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show sync status of all carriers",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhCarrierHwTestHandler("/.carrierHw/showUsed",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show fibre/chain usage",
			msgParser, settings))
	);



	msgParser.add( static_cast<RtiDirEntry *>(new TestVar("/.carrierHw/CalibrationMode", "BOOL(OFF:ON)",
			"Is carrier control in calibration mode?",
			CalibrationModeGet, CalibrationModeSet,
			msgParser, settings))
	);




}




//=============================================================================================================
// PUBLIC
//=============================================================================================================


//-------------------------------------------------------------------------------------------------------------
Zcu111FbcOranrrhCarrierHwTestHandler::Zcu111FbcOranrrhCarrierHwTestHandler() :
	EntryFunc("", "", "", "", *ITifControl::NULL_MSG_PARSER, *ITifControl::NULL_SETTINGS),
	mHelper(CarrierHwTestHelper::getInstance())
{
	// NOTE: This is a dummy object creator only provided so build features can get access
	// to the registerEntry() method
}

//-------------------------------------------------------------------------------------------------------------
Zcu111FbcOranrrhCarrierHwTestHandler::Zcu111FbcOranrrhCarrierHwTestHandler(const std::string& pathname, const std::string& callFields,
		const std::string& returnFields, const std::string& comment,
		IRtiMsgParser& msgParser, IRtiSettings& settings) :
	EntryFunc(pathname, comment, callFields, returnFields, msgParser, settings),
	mHelper(CarrierHwTestHelper::getInstance())
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
Zcu111FbcOranrrhCarrierHwTestHandler::~Zcu111FbcOranrrhCarrierHwTestHandler()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
bool Zcu111FbcOranrrhCarrierHwTestHandler::registerEntry(ITif* tif)
{
	// Convert ITif object into it's expected subclasses
	IRtiMsgParser* msgParser(dynamic_cast<IRtiMsgParser*>(tif)) ;
	IRtiSettings* settings(dynamic_cast<IRtiSettings*>(tif)) ;
	if (!msgParser)
		return false ;
	if (!settings)
		return false ;

	// now call this object's registerMethods() method to do the actual work
	registerMethods(*msgParser, *settings) ;
	return true ;
}


//-------------------------------------------------------------------------------------------------------------
std::string Zcu111FbcOranrrhCarrierHwTestHandler::operator()(const std::string& functionName)
{

    if( functionName == "diagnose")
    {
        diagnose( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getSync")
    {
        getSync( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "show")
    {
        show( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "showAll")
    {
        showAll( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "showCapacity")
    {
        showCapacity( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "showSyncAll")
    {
        showSyncAll( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "showUsed")
    {
        showUsed( callVarList, returnVarList  );
        return "" ;
    }



    return "";
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::diagnose(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT Index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->diagnose( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::getSync(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT Index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * STRING[] ulSync
	// * STRING[] dlSync
	//
	mHelper->getSync( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::show(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT Index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->show( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::showAll(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->showAll( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::showCapacity(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->showCapacity( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::showSyncAll(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->showSyncAll( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::showUsed(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->showUsed( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}



//-------------------------------------------------------------------------------------------------------------
bool Zcu111FbcOranrrhCarrierHwTestHandler::CalibrationModeSet(  const std::string& pathname, DataVariant *value, DataVariantList *returnList )
{
	// Setter for "/.carrierHw/CalibrationMode"
	//
	// Use the value passed in as something like:
	//
	//    int newValue = value->toInt() ;
	//

	// Insert your code here : %%-->

	// <--%%

	std::shared_ptr<CarrierHwTestHelper> helper(CarrierHwTestHelper::getInstance()) ;
	return helper->CalibrationModeSet( pathname, value, returnList ) ;
}

//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhCarrierHwTestHandler::CalibrationModeGet(  const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/.carrierHw/CalibrationMode"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//

	// Insert your code here : %%-->

	// <--%%

	std::shared_ptr<CarrierHwTestHelper> helper(CarrierHwTestHelper::getInstance()) ;
	helper->CalibrationModeGet( pathname, returnList ) ;
}









// Add any statics, private methods etc here %%-->

// <--%%
