/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      HelperFreqConstTestHandler.cpp
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
#include "HelperFreqConstTestHandler.h"

// Add any specific includes here %%-->

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%


//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
void HelperFreqConstTestHandler::registerMethods(IRtiMsgParser& msgParser, IRtiSettings& settings)
{
    // Create a directory to store the data in
    msgParser.addDir( new DirClass("/freqconst", "Set frequency constants", msgParser, settings) ) ;

    msgParser.add( static_cast<RtiDirEntry *>(new HelperFreqConstTestHandler("/freqconst/getRx",
            "",
            "ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message], FLOAT m3GMinimum (kHz), FLOAT m3GMaximum (kHz), FLOAT mFilterMinimum (kHz), FLOAT mFilterMaximum (kHz), FLOAT mMinimum (kHz), FLOAT mMaximum (kHz), FLOAT mCentre (kHz), FLOAT mBandwidth (kHz), FLOAT mRaster (kHz), ENUM(LOWSIDE:HIGHSIDE) mCarrierFlip, ENUM(LOWSIDE:HIGHSIDE) mLOInjection",
            "Gets Rx frequency constants",
            msgParser, settings))
    );

    msgParser.add( static_cast<RtiDirEntry *>(new HelperFreqConstTestHandler("/freqconst/getTx",
            "",
            "ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message], FLOAT m3GMinimum (kHz), FLOAT m3GMaximum (kHz), FLOAT mFilterMinimum (kHz), FLOAT mFilterMaximum (kHz), FLOAT mMinimum (kHz), FLOAT mMaximum (kHz), FLOAT mCentre (kHz), FLOAT mBandwidth (kHz), FLOAT mRaster (kHz), ENUM(LOWSIDE:HIGHSIDE) mCarrierFlip, ENUM(LOWSIDE:HIGHSIDE) mLOInjection",
            "Gets Tx frequency constants",
            msgParser, settings))
    );

    msgParser.add( static_cast<RtiDirEntry *>(new HelperFreqConstTestHandler("/freqconst/setRx",
            "FLOAT m3GMinimum (kHz), FLOAT m3GMaximum (kHz), FLOAT mFilterMinimum (kHz), FLOAT mFilterMaximum (kHz), FLOAT mMinimum (kHz), FLOAT mMaximum (kHz), FLOAT mCentre (kHz), FLOAT mBandwidth (kHz), FLOAT mRaster (kHz), ENUM(LOWSIDE:HIGHSIDE) mCarrierFlip, ENUM(LOWSIDE:HIGHSIDE) mLOInjection",
            "ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
            "Sets Rx frequency constants",
            msgParser, settings))
    );

    msgParser.add( static_cast<RtiDirEntry *>(new HelperFreqConstTestHandler("/freqconst/setTx",
            "FLOAT m3GMinimum (kHz), FLOAT m3GMaximum (kHz), FLOAT mFilterMinimum (kHz), FLOAT mFilterMaximum (kHz), FLOAT mMinimum (kHz), FLOAT mMaximum (kHz), FLOAT mCentre (kHz), FLOAT mBandwidth (kHz), FLOAT mRaster (kHz), ENUM(LOWSIDE:HIGHSIDE) mCarrierFlip, ENUM(LOWSIDE:HIGHSIDE) mLOInjection",
            "ENUM(OK:ERROR) Status=OK,[STRING Info],[STRING Message]",
            "Sets Tx frequency constants",
            msgParser, settings))
    );

}




//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
HelperFreqConstTestHandler::HelperFreqConstTestHandler(const std::string& pathname, const std::string& callFields,
        const std::string& returnFields, const std::string& comment,
        IRtiMsgParser& msgParser, IRtiSettings& settings) :
    EntryFunc(pathname, comment, callFields, returnFields, msgParser, settings),
    mHelper(FreqConstTestHelper::getInstance())
{
    // Insert your code here : %%-->

    // <--%%
}

//-------------------------------------------------------------------------------------------------------------
HelperFreqConstTestHandler::~HelperFreqConstTestHandler()
{
    // Insert your code here : %%-->

    // <--%%
}

//-------------------------------------------------------------------------------------------------------------
std::string HelperFreqConstTestHandler::operator()(const std::string& functionName)
{

    if( functionName == "getRx")
    {
        getRx( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "getTx")
    {
        getTx( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setRx")
    {
        setRx( callVarList, returnVarList  );
        return "" ;
    }


    if( functionName == "setTx")
    {
        setTx( callVarList, returnVarList  );
        return "" ;
    }

    return "";
}

//-------------------------------------------------------------------------------------------------------------
void HelperFreqConstTestHandler::getRx( DataVariantList *callList, DataVariantList *returnList )
{
    // Called with:
    // *
    // Returns:
    // * ENUM(OK:ERROR) Status=OK
    // * [STRING Info]
    // * [STRING Message]
    // * FLOAT Rx_3GMinimum (kHz)
    // * FLOAT Rx_3GMaximum (kHz)
    // * FLOAT Rx_FilterMinimum (kHz)
    // * FLOAT Rx_FilterMaximum (kHz)
    // * FLOAT Rx_Minimum (kHz)
    // * FLOAT Rx_Maximum (kHz)
    // * FLOAT Rx_Centre (kHz)
    // * FLOAT Rx_Bandwidth (kHz)
    // * FLOAT Rx_Raster (kHz)
    // * ENUM(LOWSIDE:HIGHSIDE) Rx_CarrierFlip
    // * ENUM(LOWSIDE:HIGHSIDE) Rx_LOInjection
    //

    // Insert your code here : %%-->
    mHelper->getRx( mMsgParser, callList, returnList ) ;
    // <--%%
}

//-------------------------------------------------------------------------------------------------------------
void HelperFreqConstTestHandler::getTx( DataVariantList *callList, DataVariantList *returnList )
{
    // Called with:
    // *
    // Returns:
    // * ENUM(OK:ERROR) Status=OK
    // * [STRING Info]
    // * [STRING Message]
    // * FLOAT Tx_3GMinimum (kHz)
    // * FLOAT Tx_3GMaximum (kHz)
    // * FLOAT Tx_FilterMinimum (kHz)
    // * FLOAT Tx_FilterMaximum (kHz)
    // * FLOAT Tx_Minimum (kHz)
    // * FLOAT Tx_Maximum (kHz)
    // * FLOAT Tx_Centre (kHz)
    // * FLOAT Tx_Bandwidth (kHz)
    // * FLOAT Tx_Raster (kHz)
    // * ENUM(LOWSIDE:HIGHSIDE) Tx_CarrierFlip
    // * ENUM(LOWSIDE:HIGHSIDE) Tx_LOInjection
    //
    mHelper->getTx( mMsgParser, callList, returnList ) ;

    // Insert your code here : %%-->

    // <--%%
}

//-------------------------------------------------------------------------------------------------------------
void HelperFreqConstTestHandler::setRx( DataVariantList *callList, DataVariantList *returnList )
{
    // Called with:
    // * FLOAT m3GMinimum (kHz)
    // * FLOAT m3GMaximum (kHz)
    // * FLOAT mFilterMinimum (kHz)
    // * FLOAT mFilterMaximum (kHz)
    // * FLOAT mMinimum (kHz)
    // * FLOAT mMaximum (kHz)
    // * FLOAT mCentre (kHz)
    // * FLOAT mBandwidth (kHz)
    // * FLOAT mRaster (kHz)
    // * ENUM(LOWSIDE:HIGHSIDE) mCarrierFlip
    // * ENUM(LOWSIDE:HIGHSIDE) mLOInjection
    // Returns:
    // * ENUM(OK:ERROR) Status=OK
    // * [STRING Info]
    // * [STRING Message]
    //
    mHelper->setRx( mMsgParser, callList, returnList ) ;

    // Insert your code here : %%-->

    // <--%%
}

//-------------------------------------------------------------------------------------------------------------
void HelperFreqConstTestHandler::setTx( DataVariantList *callList, DataVariantList *returnList )
{
    // Called with:
    // * FLOAT m3GMinimum (kHz)
    // * FLOAT m3GMaximum (kHz)
    // * FLOAT mFilterMinimum (kHz)
    // * FLOAT mFilterMaximum (kHz)
    // * FLOAT mMinimum (kHz)
    // * FLOAT mMaximum (kHz)
    // * FLOAT mCentre (kHz)
    // * FLOAT mBandwidth (kHz)
    // * FLOAT mRaster (kHz)
    // * ENUM(LOWSIDE:HIGHSIDE) mCarrierFlip
    // * ENUM(LOWSIDE:HIGHSIDE) mLOInjection
    // Returns:
    // * ENUM(OK:ERROR) Status=OK
    // * [STRING Info]
    // * [STRING Message]
    //
    mHelper->setTx( mMsgParser, callList, returnList ) ;

    // Insert your code here : %%-->

    // <--%%
}









// Add any statics, private methods etc here %%-->

// <--%%
