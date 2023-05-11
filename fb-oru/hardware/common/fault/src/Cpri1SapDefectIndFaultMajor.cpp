/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      Cpri1RemoteAlarmIndFaultMajor.cpp
 * \brief
 *
 *
 * \details
 *
 */


//=============================================================================================================
// INCLUDE
//=============================================================================================================

#include "Cpri1SapDefectIndFaultMajor.h"

using namespace Mplane;

//=============================================================================================================
// PUBLIC
//=============================================================================================================

const char* Mplane::Cpri1SapDefectIndFaultMajor::NAME="Cpri1SapDefectIndMajorFault";

//-------------------------------------------------------------------------------------------------------------
Mplane::Cpri1SapDefectIndFaultMajor::Cpri1SapDefectIndFaultMajor() :
	Fault(3, 3, NAME )
{
}

//-------------------------------------------------------------------------------------------------------------
Mplane::Cpri1SapDefectIndFaultMajor::~Cpri1SapDefectIndFaultMajor()
{
}
