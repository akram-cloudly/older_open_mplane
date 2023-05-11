/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      HelperSPITestHandler.cpp
 * \brief     Test methods for Helper
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run)
 *
 * Add any file header comments here %%-->
 *
 * <--%%
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
#include "HelperSPITestHandler.h"

// Add any specific includes here %%-->

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%


//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
void HelperSPITestHandler::registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings)
{
	// Create a directory to store the data in
	msgParser.addDir( new DirClass("/.spi", "Generic SPI interface", msgParser, settings) ) ;


	msgParser.add( static_cast<RtiDirEntry *>(new HelperSPITestHandler("/.spi/get",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],HEXINT busid,HEXINT chipsel,HEXINT clkdiv,ENUM(default:option) clkpha,ENUM(rising:falling) clkedge,[HEXINT wBits],[HEXINT rBits]",
			"Read the current SPI interface parameters",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperSPITestHandler("/.spi/lock",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Lock the SPI bus",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperSPITestHandler("/.spi/read",
			"HEXINT address",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],HEXINT data",
			"Read from an SPI device",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperSPITestHandler("/.spi/set",
			"[HEXINT busid],[HEXINT chipsel],[HEXINT clkdiv],[ENUM(default:option) clkpha],[ENUM(rising:falling) clkedge],[HEXINT wBits],[HEXINT rBits]",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Write the current SPI interface parameters",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperSPITestHandler("/.spi/setbus",
			"HEXINT busId",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Select the ative SPI bus",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperSPITestHandler("/.spi/unlock",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Unlock the SPI bus",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperSPITestHandler("/.spi/write",
			"HEXINT data",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Write to an SPI device",
			msgParser, settings))
	);





}




//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
HelperSPITestHandler::HelperSPITestHandler(const std::string& pathname, const std::string& callFields,
		const std::string& returnFields, const std::string& comment,
		IRtiMsgParser& msgParser, IRtiSettings& settings) :
	EntryFunc(pathname, comment, callFields, returnFields, msgParser, settings),
	mHelper(SPITestHelper::getInstance())
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
HelperSPITestHandler::~HelperSPITestHandler()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
std::string HelperSPITestHandler::operator()(const std::string& functionName)
{

    if( functionName == "get")
    {
        get( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "lock")
    {
        lock( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "read")
    {
        read( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "set")
    {
        set( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setbus")
    {
        setbus( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "unlock")
    {
        unlock( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "write")
    {
        write( callVarList, returnVarList  );
        return "" ;
    }



    return "";
}


//-------------------------------------------------------------------------------------------------------------
void HelperSPITestHandler::get(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * HEXINT busid
	// * HEXINT chipsel
	// * HEXINT clkdiv
	// * ENUM(default:option) clkpha
	// * ENUM(rising:falling) clkedge
	// * [HEXINT wBits]
	// * [HEXINT rBits]
	//
	mHelper->get( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperSPITestHandler::lock(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->lock( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperSPITestHandler::read(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * HEXINT address
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * HEXINT data
	//
	mHelper->read( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperSPITestHandler::set(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * [HEXINT busid]
	// * [HEXINT chipsel]
	// * [HEXINT clkdiv]
	// * [ENUM(default:option) clkpha]
	// * [ENUM(rising:falling) clkedge]
	// * [HEXINT wBits]
	// * [HEXINT rBits]
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->set( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperSPITestHandler::setbus(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * HEXINT busId
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setbus( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperSPITestHandler::unlock(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->unlock( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperSPITestHandler::write(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * HEXINT data
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->write( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}










// Add any statics, private methods etc here %%-->

// <--%%
