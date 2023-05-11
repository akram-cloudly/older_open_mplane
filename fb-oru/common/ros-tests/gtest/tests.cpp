/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      GenToolTests.cpp
 * \brief     <one-line description of file>
 *
 *
 * \details   <multi-line detailed description of file>
 *
 */
#include <unistd.h>
#include "gtest/gtest.h"

int main( int argc, char* argv[] )
{
	::testing::InitGoogleTest(&argc, argv);
	::chdir("ros-tests") ;
	return RUN_ALL_TESTS();
}




