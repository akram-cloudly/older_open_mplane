/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      TestInterface.cpp
 * \brief     Test interface for common-model
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions.
 *
 */


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include "TestInterface.h"

#include "CommonModelAlarmsTestHandler.h"
#include "CommonModelCalTestHandler.h"
#include "CommonModelI2cTestHandler.h"
#include "CommonModelImagesTestHandler.h"
#include "CommonModelImagesAppTestHandler.h"
#include "CommonModelImagesFpgaTestHandler.h"
#include "CommonModelImagesLibTestHandler.h"
#include "CommonModelImagesOsTestHandler.h"
#include "CommonModelSystemTestHandler.h"
#include "CommonModelSystemBootTestHandler.h"
#include "CommonModelSystemLoggingTestHandler.h"
#include "CommonModelSystemMemTestHandler.h"
#include "CommonModelSystemTcpTestHandler.h"


using namespace Mplane ;

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
TestInterface::TestInterface()
{
	CommonModelAlarmsTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelCalTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelI2cTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelImagesTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelImagesAppTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelImagesFpgaTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelImagesLibTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelImagesOsTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelSystemTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelSystemBootTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelSystemLoggingTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelSystemMemTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	CommonModelSystemTcpTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;


}

//-------------------------------------------------------------------------------------------------------------
TestInterface::~TestInterface()
{
}
