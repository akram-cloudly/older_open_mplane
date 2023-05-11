/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      I2cTestHelper.h
 * \brief     Test helper for common
 *
 *
 * \details   Auto-generated by gentool. Contains test interface definitions. Please add your own
 * code between the %%--> and <--%% comment lines (any code outside these comments will be discarded
 * next time the generate tool is run).
 *
 */

#ifndef __I2CTESTHELPER__H_
#define __I2CTESTHELPER__H_


//=============================================================================================================
// INCLUDE
//=============================================================================================================
#include <string>
#include <vector>
#include <memory>
#include "IRtiMsgParser.h"
#include "DataVariant.h"

// Add any specific includes here %%-->

// <--%%

//=============================================================================================================
// CLASS
//=============================================================================================================

namespace Mplane {

class I2cTestHelper
// Add any extra inheritance %%-->

// <--%%
{
public:

	// Add any class settings %%-->

	// <--%%

	// singleton
	static std::shared_ptr<I2cTestHelper> getInstance() ;


	I2cTestHelper();

    virtual ~I2cTestHelper();

	/**
	 * Called with:
	 *   STRING path
	 *   INT i2cAddress
	 *   INT offset
	 *   [INT numBytes=1]
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *   HEXINT[] Hex
	 *
	 */
	void read( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   STRING path
	 *   INT i2cAddress
	 *   INT offset
	 *   INT byte
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void write( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );

	/**
	 * Called with:
	 *   STRING path
	 *   INT i2cAddress
	 *   INT offset
	 *   INT short
	 *
	 * Returns:
	 *   ENUM(OK:ERROR) Status=OK
	 *   [STRING Info]
	 *   [STRING Message]
	 *
	 */
	void writeShort( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList );






// Add any extra methods %%-->

// <--%%

};



// Add any Mplane namespace code here %%-->

// <--%%


} // Mplane

// Add any global namespace code here %%-->

// <--%%


#endif /* __I2CTESTHELPER__H_*/
