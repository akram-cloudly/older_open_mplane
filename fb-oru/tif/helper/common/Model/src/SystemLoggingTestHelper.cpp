/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      SystemLoggingTestHelper.cpp
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
#include "SystemLoggingTestHelper.h"

// Add any specific includes here %%-->
#include <iostream>
#include <sstream>
#include "stringfunc.hpp"
#include "ILoggable.h"

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->
using namespace std;


// <--%%



//=============================================================================================================
// SINGLETON
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
std::shared_ptr<SystemLoggingTestHelper> SystemLoggingTestHelper::getInstance()
{
	static std::shared_ptr<SystemLoggingTestHelper> instance(std::make_shared<SystemLoggingTestHelper>()) ;
	return instance ;
}

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
SystemLoggingTestHelper::SystemLoggingTestHelper()
// Insert additional inheritance constructors here : %%-->

// <--%%
{
	// Insert your code here : %%-->


	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
SystemLoggingTestHelper::~SystemLoggingTestHelper()
{
	// Insert your code here : %%-->


	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void SystemLoggingTestHelper::save( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->
	if (!ILoggable::saveSettings())
	{
		// set an error
		returnList->find(RtiKeyword::STATUS_VAR)->set( RtiKeyword::StatusERROR );
		returnList->find(RtiKeyword::MESSAGE_VAR)->set("Unable to save log settings") ;
		return ;
	}

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void SystemLoggingTestHelper::set( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * ENUM(Off:Normal:Verbose) level
	// * [STRING name]
	// * [STRING group]
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->
	ILoggable::LogDebugLevel level( ILoggable::strToLevel( callList->find("level")->toString() ) ) ;
	std::string name(callList->find("name")->toString()) ;
	std::string group(callList->find("group")->toString()) ;

	if (name.empty() && group.empty())
	{
		ILoggable::setLogDebugLevel(level) ;
		return ;
	}

	if (!name.empty())
	{
		if (!ILoggable::setInstanceLogDebugLevel(level, name))
		{
			// set an error
			returnList->find(RtiKeyword::STATUS_VAR)->set( RtiKeyword::StatusERROR );
			returnList->find(RtiKeyword::MESSAGE_VAR)->set(std::string("Unable to find instance ") + name) ;
			return ;
		}
	}

	if (!group.empty())
	{
		if (!ILoggable::setGroupLogDebugLevel(level, group))
		{
			// report group not found
			returnList->find(RtiKeyword::INFO_VAR)->set(std::string("Note: Unable to find group ") + group) ;
			return ;
		}
	}

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void SystemLoggingTestHelper::show( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// *
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	//

	// Insert your code here : %%-->
	std::stringstream ss ;
	ss << std::endl ;
	ILoggable::showList(ss) ;
	returnList->find(RtiKeyword::INFO_VAR)->set(ss.str()) ;

	// <--%%
}



//-------------------------------------------------------------------------------------------------------------
bool SystemLoggingTestHelper::consoleSet( const std::string& pathname, DataVariant *value, DataVariantList *returnList )
{
	// Setter for "/system/log/console"
	//
	// Use the value passed in as something like:
	//
	//    int newValue = value->toInt() ;
	//

	// Insert your code here : %%-->
//	ILoggable::setLogConsole( value->toBool() ) ;
//	return true ;

	ILoggable::setLogConsole( false ) ;
	return false ;
	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
void SystemLoggingTestHelper::consoleGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/system/log/console"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//

	// Insert your code here : %%-->
//	returnList->find(pathname)->set( ILoggable::getLogConsole() ) ;
	returnList->find(pathname)->set( false ) ;

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
bool SystemLoggingTestHelper::forwardSet( const std::string& pathname, DataVariant *value, DataVariantList *returnList )
{
	// Setter for "/system/log/forward"
	//
	// Use the value passed in as something like:
	//
	//    int newValue = value->toInt() ;
	//

	// Insert your code here : %%-->
	std::string host(value->toString()) ;

	// see if special case of disabling forwarding
	if (toLower(host) == "-")
		host.clear() ;
	else if (toLower(host) == "off")
		host.clear() ;
	else if (toLower(host) == "no")
		host.clear() ;

	return ILoggable::setForwarding(host) ;

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
void SystemLoggingTestHelper::forwardGet( const std::string& pathname, DataVariantList *returnList )
{
	// Getter for "/system/log/forward"
	//
	// Return the variable value using the returnList using something like:
	//
	//   returnList->find(pathname)->set(someValue) ;
	//

	// Insert your code here : %%-->
	std::string host(ILoggable::getForwarding()) ;

	// see if special case of disabling forwarding
	if (host.empty())
		host = "-" ;

	returnList->find(pathname)->set( host ) ;

	// <--%%
}









// Add any statics, private methods etc here %%-->


// <--%%
