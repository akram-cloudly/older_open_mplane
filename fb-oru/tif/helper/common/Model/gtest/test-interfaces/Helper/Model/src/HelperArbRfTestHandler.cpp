/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      HelperArbRfTestHandler.cpp
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
#include "HelperArbRfTestHandler.h"

// Add any specific includes here %%-->

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%


//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
void HelperArbRfTestHandler::registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings)
{
	// Create a directory to store the data in
	msgParser.addDir( new DirClass("/arb/rf", "Arbitrary waveform RF playback/capture interface", msgParser, settings) ) ;


	msgParser.add( static_cast<RtiDirEntry *>(new HelperArbRfTestHandler("/arb/rf/capture",
			"INT port,[STRING waveform],[INT depth],[INT trigger],[BOOL(off:on) enable]",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Capture control",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperArbRfTestHandler("/arb/rf/playback",
			"INT port,[STRING waveform],[INT trigger],[BOOL(off:on) multicast],[BOOL(off:on) enable]",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Playback control",
			msgParser, settings))
	);





}




//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
HelperArbRfTestHandler::HelperArbRfTestHandler(const std::string& pathname, const std::string& callFields,
		const std::string& returnFields, const std::string& comment,
		IRtiMsgParser& msgParser, IRtiSettings& settings) :
	EntryFunc(pathname, comment, callFields, returnFields, msgParser, settings),
	mHelper(ArbRfTestHelper::getInstance())
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
HelperArbRfTestHandler::~HelperArbRfTestHandler()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
std::string HelperArbRfTestHandler::operator()(const std::string& functionName)
{

    if( functionName == "capture")
    {
        capture( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "playback")
    {
        playback( callVarList, returnVarList  );
        return "" ;
    }



    return "";
}


//-------------------------------------------------------------------------------------------------------------
void HelperArbRfTestHandler::capture(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT port
	// * [STRING waveform]
	// * [INT depth]
	// * [INT trigger]
	// * [BOOL(off:on) enable]
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->capture( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperArbRfTestHandler::playback(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT port
	// * [STRING waveform]
	// * [INT trigger]
	// * [BOOL(off:on) multicast]
	// * [BOOL(off:on) enable]
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->playback( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}










// Add any statics, private methods etc here %%-->

// <--%%
