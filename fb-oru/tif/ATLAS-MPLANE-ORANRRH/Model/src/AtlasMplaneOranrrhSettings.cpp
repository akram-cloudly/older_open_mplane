/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      AtlasMplaneOranrrhSettings.cpp
 * \brief     Limits variable settings for Atlas-MPLANE-ORANRRH
 *
 *
 * \details   Auto-generated by gentool. Contains limits variable definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run)
 *
 */


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include "IDataVariantSettings.h"
#include "AtlasMplaneOranrrhSettings.h"

// Add any specific includes here %%-->
#include "SettingsHelper.h"
// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%

//=============================================================================================================
// STATIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
std::shared_ptr<ILimitsSettings> ILimitsSettings::getInstance()
{
	static std::shared_ptr<ILimitsSettings> instance(std::make_shared<AtlasMplaneOranrrhSettings>()) ;
	return instance ;
}



//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
AtlasMplaneOranrrhSettings::AtlasMplaneOranrrhSettings()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
AtlasMplaneOranrrhSettings::~AtlasMplaneOranrrhSettings()
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
void AtlasMplaneOranrrhSettings::registerSettings()
{
	std::shared_ptr<IDataVariantSettings> settings(IDataVariantSettings::getInstance()) ;

	settings->registerSettings(std::map<std::string, std::string>{
		{ "CAL_FILE_TYPES",		"" },
		{ "CARRIER_SIGNALS",		"" },
		{ "CARRIER_STATES",		"" },
		{ "CARRIER_TYPES",		"" },
		{ "MAX_FIBRE",		"1" },
		{ "NUM_RX_PORTS",		"4" },
		{ "NUM_SRX_PORTS",		"2" },
		{ "NUM_TX_PORTS",		"4" },
		{ "NUM_TX_PORTS_PER_SRX_PORT",		"2" },

	}) ;

	// Insert your code here : %%-->
	SettingsHelper::commonSettings() ;
	// <--%%
}




// Add any statics, private methods etc here %%-->

// <--%%
