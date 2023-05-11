/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      Fbzcu27MplaneOranrrhI2cTestHandler.cpp
 * \brief     Test methods for Fbzcu27-MPLANE-ORANRRH
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
#include "Fbzcu27MplaneOranrrhI2cTestHandler.h"

// Add any specific includes here %%-->

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%


//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
void Fbzcu27MplaneOranrrhI2cTestHandler::registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings)
{
	// Create a directory to store the data in
	msgParser.addDir( new DirClass("/.i2c", "I2C bus access", msgParser, settings) ) ;


	msgParser.add( static_cast<RtiDirEntry *>(new Fbzcu27MplaneOranrrhI2cTestHandler("/.i2c/read",
			"STRING path,INT i2cAddress,INT offset,[INT numBytes=1]",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],HEXINT[] Hex",
			"Read from an I2C device",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Fbzcu27MplaneOranrrhI2cTestHandler("/.i2c/write",
			"STRING path,INT i2cAddress,INT offset,INT byte",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Write a byte to an I2C device",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new Fbzcu27MplaneOranrrhI2cTestHandler("/.i2c/writeShort",
			"STRING path,INT i2cAddress,INT offset,INT short",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Write a short to an I2C device",
			msgParser, settings))
	);





}




//=============================================================================================================
// PUBLIC
//=============================================================================================================


//-------------------------------------------------------------------------------------------------------------
Fbzcu27MplaneOranrrhI2cTestHandler::Fbzcu27MplaneOranrrhI2cTestHandler() :
	EntryFunc("", "", "", "", *ITifControl::NULL_MSG_PARSER, *ITifControl::NULL_SETTINGS),
	mHelper(I2cTestHelper::getInstance())
{
	// NOTE: This is a dummy object creator only provided so build features can get access
	// to the registerEntry() method
}

//-------------------------------------------------------------------------------------------------------------
Fbzcu27MplaneOranrrhI2cTestHandler::Fbzcu27MplaneOranrrhI2cTestHandler(const std::string& pathname, const std::string& callFields,
		const std::string& returnFields, const std::string& comment,
		IRtiMsgParser& msgParser, IRtiSettings& settings) :
	EntryFunc(pathname, comment, callFields, returnFields, msgParser, settings),
	mHelper(I2cTestHelper::getInstance())
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
Fbzcu27MplaneOranrrhI2cTestHandler::~Fbzcu27MplaneOranrrhI2cTestHandler()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
bool Fbzcu27MplaneOranrrhI2cTestHandler::registerEntry(ITif* tif)
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
std::string Fbzcu27MplaneOranrrhI2cTestHandler::operator()(const std::string& functionName)
{

    if( functionName == "read")
    {
        read( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "write")
    {
        write( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "writeShort")
    {
        writeShort( callVarList, returnVarList  );
        return "" ;
    }



    return "";
}


//-------------------------------------------------------------------------------------------------------------
void Fbzcu27MplaneOranrrhI2cTestHandler::read(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * STRING path
	// * INT i2cAddress
	// * INT offset
	// * [INT numBytes=1]
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * HEXINT[] Hex
	//
	mHelper->read( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Fbzcu27MplaneOranrrhI2cTestHandler::write(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * STRING path
	// * INT i2cAddress
	// * INT offset
	// * INT byte
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->write( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void Fbzcu27MplaneOranrrhI2cTestHandler::writeShort(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * STRING path
	// * INT i2cAddress
	// * INT offset
	// * INT short
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->writeShort( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}










// Add any statics, private methods etc here %%-->

// <--%%
