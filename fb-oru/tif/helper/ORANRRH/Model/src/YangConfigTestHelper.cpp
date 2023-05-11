/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      YangConfigTestHelper.cpp
 * \brief     Test helper for ORANRRH
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
#include "YangConfigTestHelper.h"

// Add any specific includes here %%-->
#include <string>
#include "IYangConfig.h"
// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%



//=============================================================================================================
// SINGLETON
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
std::shared_ptr<YangConfigTestHelper> YangConfigTestHelper::getInstance()
{
	static std::shared_ptr<YangConfigTestHelper> instance(std::make_shared<YangConfigTestHelper>()) ;
	return instance ;
}

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
YangConfigTestHelper::YangConfigTestHelper()
// Insert additional inheritance constructors here : %%-->

// <--%%
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
YangConfigTestHelper::~YangConfigTestHelper()
{
	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::getSupportedModules( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * STRING Modules
	//

	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	std::string moduleList = "\0";
	config->listSupportedModules(moduleList);

	// This is a comma separated list.
	std::string modules = "\0";

	bool allDone = false;

	do
	{
		std::size_t delimiterPos = moduleList.find(",");

		if( 0 != delimiterPos && std::string::npos != delimiterPos)
		{
			modules += moduleList.substr(0, delimiterPos);
			modules += "\n";

			moduleList.erase(0, delimiterPos + 1);
		}
		else
		{
			// We must be all done
			allDone = true;
		}
	}
	while(allDone != true);

	returnList->find("Modules")->set(modules) ;

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::listConfigTree( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * STRING List
	//

	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	std::string configTree = "\0";
	config->listConfigTree(configTree);

	returnList->find("List")->set(configTree) ;
	// <--%%
}




//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::CompanyNameGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/oran/yangConfig/CompanyName"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	std::string companyName = config->getCompanyName();

	returnList->find(pathname)->set(companyName) ;
	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::ConfigStatusGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/oran/yangConfig/ConfigStatus"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	bool isConfigLoaded = config->getConfigLoaded();

	returnList->find(pathname)->set(isConfigLoaded) ;
	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::FormatVersionGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/oran/yangConfig/FormatVersion"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	std::string formatVersion = config->getFormatVersion();

	returnList->find(pathname)->set(formatVersion) ;
	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::ORANversionGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/oran/yangConfig/ORANversion"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	std::string oranVersion = config->getOranVersion();

	returnList->find(pathname)->set(oranVersion) ;
	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::ProductNameGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/oran/yangConfig/ProductName"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	std::string productName = config->getProduct();

	returnList->find(pathname)->set(productName) ;
	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::VariantNameGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/oran/yangConfig/VariantName"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	std::string variantName = config->getVariant();

	returnList->find(pathname)->set(variantName) ;
	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void YangConfigTestHelper::YANGversionGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/oran/yangConfig/YANGversion"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//


	// Insert your code here : %%-->
	std::shared_ptr<IYangConfig> config = IYangConfig::getConfigSingleton();

	std::string yangVersion = config->getYangVersion();

	returnList->find(pathname)->set(yangVersion) ;
	// <--%%
}








// Add any statics, private methods etc here %%-->

// <--%%
