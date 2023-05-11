/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      RxPortTestHelper.cpp
 * \brief     Test helper for common
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run)
 *
 */


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include "RtiKeyword.h"
#include "RxPortTestHelper.h"

// Add any specific includes here %%-->
#include <cmath>
#include <string>
#include <sstream>
#include <typeinfo>
#include "ITifIoctl.h"
#include "IRadio.h"
#include "IRxPort.h"
#include "IMeasRssi.h"
#include "IMeasAdc.h"
#include "ICarrierHardware.h"
#include "ICarrierServer.h"

#include "GlobalTypeDefs.h"

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->
using namespace std;



// <--%%



//=============================================================================================================
// SINGLETON
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
std::shared_ptr<RxPortTestHelper> RxPortTestHelper::getInstance()
{
	static std::shared_ptr<RxPortTestHelper> instance(std::make_shared<RxPortTestHelper>()) ;
	return instance ;
}

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
RxPortTestHelper::RxPortTestHelper()
// Insert additional inheritance constructors here : %%-->

// <--%%
{
	// Insert your code here : %%-->


	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
RxPortTestHelper::~RxPortTestHelper()
{
	// Insert your code here : %%-->


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::getAdcRms( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
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

	// Insert your code here : %%-->

	// Get an instance of the rx port
	int index( callList->find("index")->toInt()-1 ) ;
	std::shared_ptr<IMeasAdc> rxAdc(IMeasAdc::getInterface(index));
	if( !rxAdc )
		return ;

	Power adcPower ;
	unsigned rawAdc ;
	ReturnType::State status = rxAdc->getAdcRms(adcPower, rawAdc) ;
	if (status != ReturnType::RT_OK)
	{
		// set an error
		returnList->find(RtiKeyword::STATUS_VAR)->set( RtiKeyword::StatusERROR );
		returnList->find(RtiKeyword::MESSAGE_VAR)->set("Unable to read ADC") ;
		return ;
	}

	returnList->find("result")->set(adcPower.get());
	returnList->find("raw")->set((int)rawAdc);

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::getExtFilterLoss( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT value (dB)
	//

	// Insert your code here : %%-->

	std::shared_ptr<IRxPort> rxPort = getRxPort(   callList, returnList );

	if( rxPort.get() )
	{
		Power extLoss = rxPort->getExtFilterLoss();

		returnList->find("value")->set( extLoss.get() );
	}


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::getFreq( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * INT value (kHz)
	//

	// Insert your code here : %%-->
	std::shared_ptr<IRxPort> rxPort = getRxPort(   callList, returnList );

	if( !rxPort.get() )
		return ;

	Frequency freq = rxPort->getFrequency();
	DataVariant* value(returnList->find("value")) ;
	value->set( (int)freq.getInt( Frequency::str2unit(value->getUnits()) ) ) ;

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::getIfAtten( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT value (dB)
	//

	// Insert your code here : %%-->

	std::shared_ptr<IRxPort> rxPort = getRxPort(callList, returnList);

	if( !rxPort.get() )
		return ;


	Power attenuation(0.0);
	attenuation = rxPort->getIfAttenuation();

	returnList->find("value")->set( attenuation.get());


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::getPath( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * INT path
	//

	// Insert your code here : %%-->
	std::shared_ptr<IRxPort> rxPort = getRxPort(callList, returnList);

	if( !rxPort.get() )
		return ;

	returnList->find("path")->set(rxPort->getPath());

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::getRfAtten( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT value (dB)
	//

	// Insert your code here : %%-->

	std::shared_ptr<IRxPort> rxPort = getRxPort(callList, returnList);

	if( !rxPort.get() )
		return ;


	Power attenuation(0.0f);

	attenuation = rxPort->getRfAttenuation();

	returnList->find("value")->set( attenuation.get());


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::getRssi( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT rssiResult (dBm)
	//

	// Insert your code here : %%-->
	int index( callList->find("index")->toInt()-1 ) ;
	std::shared_ptr<IMeasRssi> rxRssi(IMeasRssi::getInterface(index));
	if( !rxRssi )
		return ;

	Power rssiValue( rxRssi->getRssi() );
	returnList->find("rssiResult")->set(rssiValue.get());
	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::getTemp( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT result (DegC)
	//

	// Insert your code here : %%-->

	std::shared_ptr<IRxPort> rxPort = getRxPort(   callList, returnList );

	if( !rxPort.get() )
		return ;

	Temperature returnValue = rxPort->getTemperature( );

	returnList->find("result")->set( returnValue.get() );


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::setEnable( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * ENUM(on:off:follow) mode
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->
	ReturnType::State ret = ReturnType::RT_OK;

	// Retrieve an instance of the Rx port
	std::shared_ptr<IRxPort> rxPort = getRxPort(   callList, returnList );

	if( !rxPort.get() )
		return ;

	// get the mode
	if (callList->find("mode")->toString() == "on")
	{
		rxPort->setRxOn();
	}
	else if (callList->find("mode")->toString() == "off")
	{
		rxPort->setRxOff();
	}
	else if (callList->find("mode")->toString() == "follow")
	{
		// TODO This will follow the FPGA TDD frame timing (RRH mode). Set to not supported for the time being.
		ret = ReturnType::RT_NOT_SUPPORTED;
	}

	// Check to see if the return value is anything other than RT_OK. This will
	// provide error feedback or just return a value result of 0 if everything is
	// ok.
	checkState(ret, "value", returnList) ;

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::setExtFilterLoss( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * FLOAT{0.0..3.0} value (dB)
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->

	std::shared_ptr<IRxPort> rxPort = getRxPort(   callList, returnList );

	if( rxPort.get() )
	{
		ReturnType::State ret = ReturnType::RT_NOT_SUPPORTED ;

		DataVariant* value(callList->find("value")) ;
		if (value->isSet())
		{
			Power filterLoss( value->toFloat() );
			ret = rxPort->setExtFilterLoss( filterLoss );
		}
		checkState(ret, "value", returnList) ;

	}

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::setFreq( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * FLOAT value (kHz)
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->
	std::shared_ptr<IRxPort> rxPort = getRxPort(   callList, returnList );

	if( !rxPort.get() )
		return ;

	ReturnType::State ret = ReturnType::RT_OK ;

	// * [FLOAT NCOFreq]
	DataVariant* value(callList->find("value")) ;
	if (value->isSet())
	{
		ret = rxPort->setFrequency(Frequency(value->toFloat(), Frequency::str2unit(value->getUnits()))) ;

		if (!checkState(ret, "value", returnList))
			return ;
	}


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::setIfAtten( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * FLOAT value (dB)
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->

	std::shared_ptr<IRxPort> rxPort = getRxPort(callList, returnList);

	if( !rxPort.get() )
		return ;

	Power attenuation( callList->find("value")->toFloat() );

	ReturnType::State result = rxPort->setIfAttenuation( attenuation  );

	checkState(result, "IfAtten", returnList) ;


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::setPath( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * INT path
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->
	std::shared_ptr<IRxPort> rxPort = getRxPort(callList, returnList);

	if( !rxPort.get() )
		return ;

	ReturnType::State result = rxPort->setPath( callList->find("path")->toInt()  );

	checkState(result, "Path", returnList) ;

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::setRfAtten( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// * FLOAT value (dB)
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->

	std::shared_ptr<IRxPort> rxPort = getRxPort(callList, returnList);

	if( !rxPort.get() )
		return ;

	Power attenuation(callList->find("value")->toFloat()  );

	ReturnType::State result = rxPort->setRfAttenuation( attenuation );

	checkState(result, "RfAtten", returnList) ;


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::showSynth( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{1..${NUM_RX_PORTS}} index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->

	// * INT Index
	int rxIndex = callList->find("index")->toInt() ;
	rxIndex--; // called by port number, change to zero based index

	std::shared_ptr<IRadio>radio( IRadioFactory::getInterface() );
	IDevices& devices( radio->getDevices() ) ;
	std::shared_ptr<ISynth> rxSynth( devices.getRxSynth( rxIndex ) ) ;

	std::stringstream ss ;
	ss << std::endl ;
	rxSynth->show(ss) ;
	returnList->find(RtiKeyword::INFO_VAR)->set(ss.str()) ;

	// <--%%
}




//-------------------------------------------------------------------------------------------------------------
void RxPortTestHelper::PortsGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/rx/Ports"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->
	std::vector< std::shared_ptr<IRxPort> > rxPorts = IRxPortFactory::getPorts( ) ;
	returnList->find(pathname)->setInt(rxPorts.size()) ;

	// <--%%
}








// Add any statics, private methods etc here %%-->
//-------------------------------------------------------------------------------------------------------------
std::shared_ptr<IRxPort> RxPortTestHelper::getRxPort(DataVariantList *callList, DataVariantList *returnList) const
{

	std::vector< std::shared_ptr<IRxPort> > rxPorts = IRxPortFactory::getPorts( ) ;
	int index( callList->find("index")->toInt() ) ;
	index--;  // change 1 based port to zero based index
	return rxPorts[index] ;
}

//-------------------------------------------------------------------------------------------------------------
bool RxPortTestHelper::checkState(ReturnType::State ret, const std::string& param, DataVariantList *returnList) const
{
	if (ret != ReturnType::RT_OK)
	{
		// set an error
		returnList->find(RtiKeyword::STATUS_VAR)->set( RtiKeyword::StatusERROR );

		std::stringstream ss ;
		ss << "Unable to set/get " << param << " : ERROR" << ReturnType::getState(ret) ;
		returnList->find(RtiKeyword::MESSAGE_VAR)->set(ss.str()) ;

		return false ;
	}

	return true ;
}


// <--%%
