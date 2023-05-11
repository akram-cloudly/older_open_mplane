/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      CommonRxPortTestHandler.cpp
 * \brief     Test methods for common
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
#include "CommonRxPortTestHandler.h"

// Add any specific includes here %%-->

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%


//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings)
{
	// Create a directory to store the data in
	msgParser.addDir( new DirClass("/rx", "Rx Port settings", msgParser, settings) ) ;


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/getAdcRms",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],FLOAT result (dBFS),INT raw",
			"Get the ADC RMS value from a particular rx rf path",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/getExtFilterLoss",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],FLOAT value (dB)",
			"Get Rx RF path external filter loss setting",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/getFreq",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],INT value (kHz)",
			"Get Rx port frequency value",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/getIfAtten",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],FLOAT value (dB)",
			"Get Rx IF attenuator raw value",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/getPath",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],INT path",
			"Get currently selected Rx external path value",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/getRfAtten",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],FLOAT value (dB)",
			"Get Rx RF attenuator raw value",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/getRssi",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],FLOAT rssiResult (dBm)",
			"Get Rx RSSI value",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/getTemp",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],FLOAT result (DegC)",
			"Get Rx path temperature value in degrees C",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/setAutoAttenMode",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message],BOOL result",
			"Set AUTO RF Atten Mode",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/setEnable",
			"INT{1..${NUM_RX_PORTS}} index,ENUM(on:off:follow) mode",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Set the Rx enable to on/off/follow",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/setExtFilterLoss",
			"INT{1..${NUM_RX_PORTS}} index,FLOAT{0.0..3.0} value (dB)",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Set Rx RF path external filter loss value",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/setFreq",
			"INT{1..${NUM_RX_PORTS}} index,FLOAT value (kHz)",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Set Rx port frequency value",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/setIfAtten",
			"INT{1..${NUM_RX_PORTS}} index,FLOAT value (dB)",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Set Rx IF attenuator value in dBs",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/setManAttenMode",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Set MANUAL RF Atten Mode",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/setPath",
			"INT{1..${NUM_RX_PORTS}} index,INT path",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Set Rx external path",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/setRfAtten",
			"INT{1..${NUM_RX_PORTS}} index,FLOAT value (dB)",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Set Rx RF attenuator value in Dbs",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new CommonRxPortTestHandler("/rx/showSynth",
			"INT{1..${NUM_RX_PORTS}} index",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show debug information for the Rx synthesiser",
			msgParser, settings))
	);




	msgParser.add( static_cast<RtiDirEntry *>(new TestReadVar("/rx/Ports", "INT",
			"Number of RX ports",
			PortsGet,
			msgParser, settings))
	);



}




//=============================================================================================================
// PUBLIC
//=============================================================================================================


//-------------------------------------------------------------------------------------------------------------
CommonRxPortTestHandler::CommonRxPortTestHandler() :
	EntryFunc("", "", "", "", *ITifControl::NULL_MSG_PARSER, *ITifControl::NULL_SETTINGS),
	mHelper(RxPortTestHelper::getInstance())
{
	// NOTE: This is a dummy object creator only provided so build features can get access
	// to the registerEntry() method
}

//-------------------------------------------------------------------------------------------------------------
CommonRxPortTestHandler::CommonRxPortTestHandler(const std::string& pathname, const std::string& callFields,
		const std::string& returnFields, const std::string& comment,
		IRtiMsgParser& msgParser, IRtiSettings& settings) :
	EntryFunc(pathname, comment, callFields, returnFields, msgParser, settings),
	mHelper(RxPortTestHelper::getInstance())
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
CommonRxPortTestHandler::~CommonRxPortTestHandler()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
bool CommonRxPortTestHandler::registerEntry(ITif* tif)
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
std::string CommonRxPortTestHandler::operator()(const std::string& functionName)
{

    if( functionName == "getAdcRms")
    {
        getAdcRms( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getExtFilterLoss")
    {
        getExtFilterLoss( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getFreq")
    {
        getFreq( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getIfAtten")
    {
        getIfAtten( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getPath")
    {
        getPath( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getRfAtten")
    {
        getRfAtten( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getRssi")
    {
        getRssi( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getTemp")
    {
        getTemp( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setAutoAttenMode")
    {
        setAutoAttenMode( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setEnable")
    {
        setEnable( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setExtFilterLoss")
    {
        setExtFilterLoss( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setFreq")
    {
        setFreq( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setIfAtten")
    {
        setIfAtten( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setManAttenMode")
    {
        setManAttenMode( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setPath")
    {
        setPath( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setRfAtten")
    {
        setRfAtten( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "showSynth")
    {
        showSynth( callVarList, returnVarList  );
        return "" ;
    }



    return "";
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::getAdcRms(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT result (dBFS)
	// * INT raw
	//
	mHelper->getAdcRms( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::getExtFilterLoss(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT value (dB)
	//
	mHelper->getExtFilterLoss( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::getFreq(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * INT value (kHz)
	//
	mHelper->getFreq( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::getIfAtten(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT value (dB)
	//
	mHelper->getIfAtten( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::getPath(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * INT path
	//
	mHelper->getPath( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::getRfAtten(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT value (dB)
	//
	mHelper->getRfAtten( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::getRssi(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT rssiResult (dBm)
	//
	mHelper->getRssi( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::getTemp(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT result (DegC)
	//
	mHelper->getTemp( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::setAutoAttenMode(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * BOOL result
	//
	mHelper->setAutoAttenMode( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::setEnable(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * ENUM(on:off:follow) mode
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setEnable( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::setExtFilterLoss(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * FLOAT{0.0..3.0} value (dB)
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setExtFilterLoss( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::setFreq(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * FLOAT value (kHz)
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setFreq( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::setIfAtten(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * FLOAT value (dB)
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setIfAtten( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::setManAttenMode(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setManAttenMode( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::setPath(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * INT path
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setPath( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::setRfAtten(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * FLOAT value (dB)
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setRfAtten( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::showSynth(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->showSynth( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}




//-------------------------------------------------------------------------------------------------------------
void CommonRxPortTestHandler::PortsGet(  const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/rx/Ports"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->

	// <--%%

	std::shared_ptr<RxPortTestHelper> helper(RxPortTestHelper::getInstance()) ;
	helper->PortsGet( pathname, returnList ) ;
}








// Add any statics, private methods etc here %%-->

// <--%%
