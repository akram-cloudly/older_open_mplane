/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      HelperPimTestHandler.cpp
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
#include "HelperPimTestHandler.h"

// Add any specific includes here %%-->

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%


//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings)
{
	// Create a directory to store the data in
	msgParser.addDir( new DirClass("/pim", "PIM control", msgParser, settings) ) ;


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/apiVersion",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/pdp2",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/capture",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/dispersiveSearch",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/dump",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/frd",
			"INT addr",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/fullSearch",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/fwr",
			"INT addr,INT data",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/get",
			"[STRING arg0],[STRING arg1],[STRING arg2],[STRING arg3],[STRING arg4],[STRING arg5],[STRING arg6],[STRING arg7],[STRING arg8],[STRING arg9],[STRING arg10],[STRING arg11],[STRING arg12],[STRING arg13],[STRING arg14],[STRING arg15],[STRING arg16],[STRING arg17],[STRING arg18],[STRING arg19],[STRING arg20],[STRING arg21],[STRING arg22],[STRING arg23],[STRING arg24],[STRING arg25],[STRING arg26],[STRING arg27],[STRING arg28],[STRING arg29],[STRING arg30],[STRING arg31],[STRING arg32],[STRING arg33],[STRING arg34],[STRING arg35],[STRING arg36],[STRING arg37],[STRING arg38],[STRING arg39],[STRING arg40],[STRING arg41],[STRING arg42],[STRING arg43],[STRING arg44],[STRING arg45],[STRING arg46],[STRING arg47],[STRING arg48],[STRING arg49],[STRING arg50],[STRING arg51],[STRING arg52],[STRING arg53],[STRING arg54],[STRING arg55],[STRING arg56],[STRING arg57],[STRING arg58],[STRING arg59],[STRING arg60]",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/status",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/logClose",
			"ENUM(REPLY:EVENT:LOG:MATLAB:TEXT) type",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Disconnect output from logging service",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/logOpen",
			"ENUM(REPLY:EVENT:LOG:MATLAB:TEXT) type",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Connect an output to the logging service",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/logShow",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show all current logging connections",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/mimoSearch",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/orthogonalise",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/pdp",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/portClose",
			"ENUM(REPLY:EVENT:LOG:MATLAB:TEXT) type,INT port",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Disconnect output from TCP port",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/portOpen",
			"ENUM(REPLY:EVENT:LOG:MATLAB:TEXT) type,INT port",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Connect an output to a TCP port",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/portShow",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Show all current TCP connections",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/reset",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/set",
			"[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) response],[INT msgId],[INT command],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) succeeded],[INT buildNo],[INT debug],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) logTrace],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) logVerbose],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) logMatlab],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) logConsole],[INT uptime],[INT t],[INT dt],[INT block],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) canceller],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) track],[INT trackN],[INT lockN],[INT Ta],[INT Tb],[INT CNL3],[INT CNL5],[INT CNL7],[INT FOM0],[INT FOM1],[INT FOM2],[INT FOM3],[INT pFOM],[INT dFOM],[INT pimGain],[INT period],[INT pMin],[INT pimState],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) adaptCanceller],[ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) adaptOrthogonalisation],[INT branches],[INT mask],[INT afStart],[INT dlBbSrc],[INT ulBbSrc],[INT ulBbDst],[INT srcBw],[INT dstBw],[INT dl0],[INT dl1],[INT dl2],[INT f0],[INT f1],[INT f2],[INT fd0],[INT fd1],[INT tssi0],[INT tssi1],[INT tssi2],[INT tssiPim],[INT testCase],[INT n],[INT addr],[INT data]",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/setCarriers",
			"ENUM(5:10:15:20) bw (MHz),INT dl1,INT dl2,,INT dlm1,INT dlm2,INT ul",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"Set up PIM carriers",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/sisoSearch",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/start",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/startTrack",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/startTssi",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/stop",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/stopTrack",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/stopTssi",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/update",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);


	msgParser.add( static_cast<RtiDirEntry *>(new HelperPimTestHandler("/pim/xcorr",
			"",
			"ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
			"",
			msgParser, settings))
	);

}




//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
HelperPimTestHandler::HelperPimTestHandler(const std::string& pathname, const std::string& callFields,
		const std::string& returnFields, const std::string& comment,
		IRtiMsgParser& msgParser, IRtiSettings& settings) :
	EntryFunc(pathname, comment, callFields, returnFields, msgParser, settings),
	mHelper(PimTestHelper::getInstance())
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
HelperPimTestHandler::~HelperPimTestHandler()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
std::string HelperPimTestHandler::operator()(const std::string& functionName)
{

    if( functionName == "apiVersion")
    {
        apiVersion( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "pdp2")
    {
        pdp2( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "capture")
    {
        capture( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "dispersiveSearch")
    {
        dispersiveSearch( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "dump")
    {
        dump( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "frd")
    {
        frd( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "fullSearch")
    {
        fullSearch( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "fwr")
    {
        fwr( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "get")
    {
        get( callVarList, returnVarList  );
        return "" ;
    }


//    if( functionName == "status")
//    {
//        status( callVarList, returnVarList  );
//        return "" ;
//    }


    if( functionName == "logClose")
    {
        logClose( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "logOpen")
    {
        logOpen( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "logShow")
    {
        logShow( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "mimoSearch")
    {
        mimoSearch( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "orthogonalise")
    {
        orthogonalise( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "pdp")
    {
        pdp( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "portClose")
    {
        portClose( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "portOpen")
    {
        portOpen( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "portShow")
    {
        portShow( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "reset")
    {
        reset( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "set")
    {
        set( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setCarriers")
    {
        setCarriers( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "sisoSearch")
    {
        sisoSearch( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "start")
    {
        start( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "startTrack")
    {
        startTrack( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "startTssi")
    {
        startTssi( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "stop")
    {
        stop( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "stopTrack")
    {
        stopTssi( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "stopTssi")
    {
        stopTssi( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "update")
    {
        update( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "xcorr")
    {
        xcorr( callVarList, returnVarList  );
        return "" ;
    }



    return "";
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::apiVersion(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->apiVersion( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::pdp2(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->pdp2( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::capture(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
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
void HelperPimTestHandler::dispersiveSearch(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->dispersiveSearch( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::dump(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->dump( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::frd(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT addr
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->frd( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::fullSearch(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->fullSearch( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::fwr(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT addr
	// * INT data
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->fwr( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::get(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * [STRING arg0]
	// * [STRING arg1]
	// * [STRING arg2]
	// * [STRING arg3]
	// * [STRING arg4]
	// * [STRING arg5]
	// * [STRING arg6]
	// * [STRING arg7]
	// * [STRING arg8]
	// * [STRING arg9]
	// * [STRING arg10]
	// * [STRING arg11]
	// * [STRING arg12]
	// * [STRING arg13]
	// * [STRING arg14]
	// * [STRING arg15]
	// * [STRING arg16]
	// * [STRING arg17]
	// * [STRING arg18]
	// * [STRING arg19]
	// * [STRING arg20]
	// * [STRING arg21]
	// * [STRING arg22]
	// * [STRING arg23]
	// * [STRING arg24]
	// * [STRING arg25]
	// * [STRING arg26]
	// * [STRING arg27]
	// * [STRING arg28]
	// * [STRING arg29]
	// * [STRING arg30]
	// * [STRING arg31]
	// * [STRING arg32]
	// * [STRING arg33]
	// * [STRING arg34]
	// * [STRING arg35]
	// * [STRING arg36]
	// * [STRING arg37]
	// * [STRING arg38]
	// * [STRING arg39]
	// * [STRING arg40]
	// * [STRING arg41]
	// * [STRING arg42]
	// * [STRING arg43]
	// * [STRING arg44]
	// * [STRING arg45]
	// * [STRING arg46]
	// * [STRING arg47]
	// * [STRING arg48]
	// * [STRING arg49]
	// * [STRING arg50]
	// * [STRING arg51]
	// * [STRING arg52]
	// * [STRING arg53]
	// * [STRING arg54]
	// * [STRING arg55]
	// * [STRING arg56]
	// * [STRING arg57]
	// * [STRING arg58]
	// * [STRING arg59]
	// * [STRING arg60]
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->get( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


////-------------------------------------------------------------------------------------------------------------
//void HelperPimTestHandler::status(  DataVariantList *callList, DataVariantList *returnList )
//{
//	// Called with:
//	// *
//	// Returns:
//	// * ENUM(OK:ERROR) Status=OK
//	// * [STRING Info]
//	// * [STRING Message]
//	//
//	mHelper->status( mMsgParser, callList, returnList ) ;
//
//	// Insert your code here : %%-->
//
//	// <--%%
//}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::logClose(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * ENUM(REPLY:EVENT:LOG:MATLAB:TEXT) type
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->logClose( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::logOpen(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * ENUM(REPLY:EVENT:LOG:MATLAB:TEXT) type
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->logOpen( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::logShow(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->logShow( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::mimoSearch(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->mimoSearch( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::orthogonalise(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->orthogonalise( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::pdp(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->pdp( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::portClose(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * ENUM(REPLY:EVENT:LOG:MATLAB:TEXT) type
	// * INT port
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->portClose( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::portOpen(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * ENUM(REPLY:EVENT:LOG:MATLAB:TEXT) type
	// * INT port
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->portOpen( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::portShow(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->portShow( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::reset(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->reset( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::set(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) response]
	// * [INT msgId]
	// * [INT command]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) succeeded]
	// * [INT buildNo]
	// * [INT debug]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) logTrace]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) logVerbose]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) logMatlab]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) logConsole]
	// * [INT uptime]
	// * [INT t]
	// * [INT dt]
	// * [INT block]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) canceller]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) track]
	// * [INT trackN]
	// * [INT lockN]
	// * [INT Ta]
	// * [INT Tb]
	// * [INT CNL3]
	// * [INT CNL5]
	// * [INT CNL7]
	// * [INT FOM0]
	// * [INT FOM1]
	// * [INT FOM2]
	// * [INT FOM3]
	// * [INT pFOM]
	// * [INT dFOM]
	// * [INT pimGain]
	// * [INT period]
	// * [INT pMin]
	// * [INT pimState]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) adaptCanceller]
	// * [ENUM(no:yes:off:on:disabled:enabled:auto:NACK:ACK:none:error) adaptOrthogonalisation]
	// * [INT branches]
	// * [INT mask]
	// * [INT afStart]
	// * [INT dlBbSrc]
	// * [INT ulBbSrc]
	// * [INT ulBbDst]
	// * [INT srcBw]
	// * [INT dstBw]
	// * [INT dl0]
	// * [INT dl1]
	// * [INT dl2]
	// * [INT f0]
	// * [INT f1]
	// * [INT f2]
	// * [INT fd0]
	// * [INT fd1]
	// * [INT tssi0]
	// * [INT tssi1]
	// * [INT tssi2]
	// * [INT tssiPim]
	// * [INT testCase]
	// * [INT n]
	// * [INT addr]
	// * [INT data]
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
void HelperPimTestHandler::setCarriers(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * ENUM(5:10:15:20) bw (MHz)
	// * INT dl1
	// * INT dl2
	// * INT dlm1
	// * INT dlm2
	// * INT ul
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->setCarriers( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::sisoSearch(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->sisoSearch( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::start(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
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
void HelperPimTestHandler::startTrack(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->startTrack( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::startTssi(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->startTssi( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::stop(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->stop( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::stopTrack(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->stopTssi( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::stopTssi(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->stopTssi( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::update(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->update( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void HelperPimTestHandler::xcorr(  DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//
	mHelper->xcorr( mMsgParser, callList, returnList ) ;

	// Insert your code here : %%-->

	// <--%%
}










// Add any statics, private methods etc here %%-->

// <--%%
