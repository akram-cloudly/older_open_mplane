/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      Zcu111FbcOranrrhEmbeddedTestHandler.cpp
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
#include "Zcu111FbcOranrrhEmbeddedTestHandler.h"

// Add any specific includes here %%-->

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%


//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhEmbeddedTestHandler::registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings)
{
	// Create a directory to store the data in
	msgParser.addDir( new DirClass("/.embedded", "Embedded/co-processor management", msgParser, settings) ) ;


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhEmbeddedTestHandler("/.embedded/setFirmware",
			"INT index,STRING firmware",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Change the name of the firmware loaded on a processor",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhEmbeddedTestHandler("/.embedded/show",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Display all processors and states",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhEmbeddedTestHandler("/.embedded/start",
			"INT index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Start a processor",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Zcu111FbcOranrrhEmbeddedTestHandler("/.embedded/stop",
			"INT index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Stop a processor",
			msgParser, settings))
	);





}




//=============================================================================================================
// PUBLIC
//=============================================================================================================


//-------------------------------------------------------------------------------------------------------------
Zcu111FbcOranrrhEmbeddedTestHandler::Zcu111FbcOranrrhEmbeddedTestHandler() :
	EntryFunc("", "", "", "", *ITifControl::NULL_MSG_PARSER, *ITifControl::NULL_SETTINGS),
	mHelper(EmbeddedTestHelper::getInstance())
{
	// NOTE: This is a dummy object creator only provided so build features can get access
	// to the registerEntry() method
}

//-------------------------------------------------------------------------------------------------------------
Zcu111FbcOranrrhEmbeddedTestHandler::Zcu111FbcOranrrhEmbeddedTestHandler(const std::string& pathname, const std::string& callFields,
		const std::string& returnFields, const std::string& comment,
		IRtiMsgParser& msgParser, IRtiSettings& settings) :
	EntryFunc(pathname, comment, callFields, returnFields, msgParser, settings),
	mHelper(EmbeddedTestHelper::getInstance())
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
Zcu111FbcOranrrhEmbeddedTestHandler::~Zcu111FbcOranrrhEmbeddedTestHandler()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
bool Zcu111FbcOranrrhEmbeddedTestHandler::registerEntry(ITif* tif)
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
std::string Zcu111FbcOranrrhEmbeddedTestHandler::operator()(const std::string& functionName)
{

    if( functionName == "setFirmware")
    {
        setFirmware( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "show")
    {
        show( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "start")
    {
        start( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "stop")
    {
        stop( callVarList, returnVarList  );
        return "" ;
    }



    return "";
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhEmbeddedTestHandler::setFirmware(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT index
	// * STRING firmware
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setFirmware( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhEmbeddedTestHandler::show(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
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
void Zcu111FbcOranrrhEmbeddedTestHandler::start(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->start( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Zcu111FbcOranrrhEmbeddedTestHandler::stop(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->stop( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}










// Add any statics, private methods etc here %%-->

// <--%%
