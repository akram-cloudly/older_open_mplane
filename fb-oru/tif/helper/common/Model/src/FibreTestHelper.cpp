/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      FibreTestHelper.cpp
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
#include "FibreTestHelper.h"

// Add any specific includes here %%-->
#include <sstream>
#include "stringfunc.hpp"
#include "Power.h"
#include "Frequency.h"
//#include "ICarrierServer.h"
#include "Nodes/TestVar.h"
#include "Nodes/TestReadVar.h"
//#include "ICpri.h"
//#include "ICpriCore.h"
//#include "ICpriController.h"
//#include "ICpriPortHandler.h"
#include "ISfpData.h"
//#include "IFpgaMgr.h"

// <--%%


using namespace Mplane ;

// Add any statics, types, prototypes etc here %%-->

// <--%%



//=============================================================================================================
// SINGLETON
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
std::shared_ptr<FibreTestHelper> FibreTestHelper::getInstance()
{
	static std::shared_ptr<FibreTestHelper> instance(std::make_shared<FibreTestHelper>()) ;
	return instance ;
}

//=============================================================================================================
// PUBLIC
//=============================================================================================================

//-------------------------------------------------------------------------------------------------------------
FibreTestHelper::FibreTestHelper()
// Insert additional inheritance constructors here : %%-->

// <--%%
{
	// Insert your code here : %%-->

	// <--%%
}

//-------------------------------------------------------------------------------------------------------------
FibreTestHelper::~FibreTestHelper()
{
	// Insert your code here : %%-->

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void FibreTestHelper::getTemp( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{0..${MAX_FIBRE}} Index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * FLOAT temp (DegC)
	//

	// Insert your code here : %%-->
    unsigned index( callList->find("Index")->toInt() ) ;
	std::shared_ptr<ISfpData> sfpData( ISfpData::getInstance(index) );

	                                                                // ATG requirements traceability. Do not remove.
	returnList->find("temp")->setFloat(sfpData->sfpTemperature()) ; // \verify{@req_8403{142}}

	// <--%%
}


//-------------------------------------------------------------------------------------------------------------
void FibreTestHelper::sfpDump( IRtiMsgParser& msgParser, DataVariantList *callList, DataVariantList *returnList )
{
	// Called with:
	// * INT{0..${MAX_FIBRE}} Index
	// Returns:
	// * ENUM(OK:ERROR) Status=OK
	// * [STRING Info]
	// * [STRING Message]
	// * BOOL(NO:YES) sfpFitted
	// * BOOL(NO:YES) a0Present
	// * BOOL(NO:YES) a2Present
	// * HEXINT[] A0
	// * HEXINT[] A2
	//

	// Insert your code here : %%-->
    unsigned index( callList->find("Index")->toInt() ) ;
	std::shared_ptr<ISfpData> sfpData( ISfpData::getInstance(index) );
	std::vector<UINT8> a0Bytes;
	std::vector<UINT8> a2Bytes;
	bool fitted(sfpData->sfpRawData(a0Bytes, a2Bytes)) ;

	returnList->find("sfpFitted")->set(fitted) ;
	returnList->find("a0Present")->set(!a0Bytes.empty()) ;
	returnList->find("a2Present")->set(!a2Bytes.empty()) ;

	unsigned i(0) ;
	for (auto byte : a0Bytes)
	{
		returnList->find("A0")->set(i++, (int)byte) ;
	}
	i=0 ;
	for (auto byte : a2Bytes)
	{
		returnList->find("A2")->set(i++, (int)byte) ;
	}

	// <--%%
}










// Add any statics, private methods etc here %%-->

// <--%%
