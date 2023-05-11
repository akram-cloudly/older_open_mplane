/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      AtlasAxisRrhTestInterface.cpp
 * \brief     Test interface for ATLAS-AXIS-RRH
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions.
 *
 */


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include "AtlasAxisRrhTestInterface.h"

#include "AtlasAxisRrhAgcTestHandler.h"
#include "AtlasAxisRrhCarrierTestHandler.h"
#include "AtlasAxisRrhCarrierHwTestHandler.h"
#include "AtlasAxisRrhEmbeddedTestHandler.h"
#include "AtlasAxisRrhEqualiserTestHandler.h"
#include "AtlasAxisRrhFibreTestHandler.h"
#include "AtlasAxisRrhFpgaTestHandler.h"
#include "AtlasAxisRrhFtpTestHandler.h"
#include "AtlasAxisRrhGpioTestHandler.h"
#include "AtlasAxisRrhHeartbeatTestHandler.h"
#include "AtlasAxisRrhI2cTestHandler.h"
#include "AtlasAxisRrhOranFpgaTestHandler.h"
#include "AtlasAxisRrhRadioStateTestHandler.h"
#include "AtlasAxisRrhRegDevicesTestHandler.h"
#include "AtlasAxisRrhRxPortTestHandler.h"
#include "AtlasAxisRrhSrxPortTestHandler.h"
#include "AtlasAxisRrhSystemTestHandler.h"
#include "AtlasAxisRrhTxPortTestHandler.h"
#include "AtlasAxisRrhWaveformTestHandler.h"
#include "AtlasAxisRrhWaveformFileTestHandler.h"


using namespace Mplane ;

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
AtlasAxisRrhTestInterface::AtlasAxisRrhTestInterface()
{
	AtlasAxisRrhAgcTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhCarrierTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhCarrierHwTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhEmbeddedTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhEqualiserTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhFibreTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhFpgaTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhFtpTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhGpioTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhHeartbeatTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhI2cTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhOranFpgaTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhRadioStateTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhRegDevicesTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhRxPortTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhSrxPortTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhSystemTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhTxPortTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhWaveformTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;

	AtlasAxisRrhWaveformFileTestHandler::registerMethods(/* IRtiMsgParser */ *this, /* IRtiSettings */ *this) ;


}

//-------------------------------------------------------------------------------------------------------------
AtlasAxisRrhTestInterface::~AtlasAxisRrhTestInterface()
{
}
