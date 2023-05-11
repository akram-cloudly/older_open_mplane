/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      tests.cpp
 * \brief     <one-line description of file>
 *
 *
 * \details   <multi-line detailed description of file>
 *
 */
#include <unistd.h>
#include "gtest/gtest.h"
#include "im_fixture.h"

using namespace Mplane ;

int main( int argc, char* argv[] )
{
	::testing::InitGoogleTest(&argc, argv);
	chdir("imageManagement") ;
	WorkingDir::getWd() ;

	int rc = RUN_ALL_TESTS();
	chdir("/tmp") ;
	return rc ;
}
