/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      DiscoverySingleton.cpp
 * \brief     Create the IDiscovery singleton
 *
 *
 * \details
 *
 */


//=============================================================================================================
// INCLUDE
//=============================================================================================================

#include "Discovery.h"

using namespace Mplane ;

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
std::shared_ptr<IDiscovery> IDiscovery::getInstance()
{
	static std::shared_ptr<IDiscovery> instance( std::make_shared<Discovery>() ) ;
	return instance ;
}
