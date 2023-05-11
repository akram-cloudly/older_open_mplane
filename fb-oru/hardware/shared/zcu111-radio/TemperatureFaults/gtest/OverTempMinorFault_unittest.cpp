/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      OverTempMinorFault_unittest.cpp
 * \brief     Google Test of over temperature minor faults
 *
 *
 * \details   This file contains the implementation of the Google Test test cases
 *            for the OverTempMinorFault class.
 *
 */

#include <gtest/gtest.h>

#include <sstream>
#include <string>
#include <iostream>
#include <memory>

#include "IFault.h"
#include "IFaultOwner.h"
#include "Fault.h"
#include "FaultOwner.h"

#include "IRadio.h"
#include "IDevices.h"
#include "ISynth.h"

#include "BoardTxOverTemperatureFaultMinor.h"
#include "PaOverTemperatureFaultMinor.h"
#include "OverTempMinorFaultOwner.h"
#include "TestCommonTxPort.h"

using namespace Mplane;
using namespace std;

//-------------------------------------------------------------------------------------------------------------
TEST(BoardTxOverTemperatureMinorFault, Test)
{
	const ::testing::TestInfo* const test_info =
	  ::testing::UnitTest::GetInstance()->current_test_info();

	std::cout << std::endl << "*** " << test_info->test_case_name() << " Tests ***" <<  std::endl;
	std::cout << test_info->name() << " - START" <<  std::endl;

	std::shared_ptr<IFault> faultTx1(make_fault<BoardTx1OverTemperatureFaultMinor>());
	std::shared_ptr<IFault> faultTx2(make_fault<BoardTx2OverTemperatureFaultMinor>());
	std::shared_ptr<IFault> faultTx3(make_fault<BoardTx3OverTemperatureFaultMinor>());
	std::shared_ptr<IFault> faultTx4(make_fault<BoardTx4OverTemperatureFaultMinor>());
	std::shared_ptr<IFault> faultPa1(make_fault<Pa1OverTemperatureFaultMinor>());
	std::shared_ptr<IFault> faultPa2(make_fault<Pa2OverTemperatureFaultMinor>());
	std::shared_ptr<IFault> faultPa3(make_fault<Pa3OverTemperatureFaultMinor>());
	std::shared_ptr<IFault> faultPa4(make_fault<Pa4OverTemperatureFaultMinor>());

	std::shared_ptr<IFaultOwner> faultOwner (make_faultOwner<OverTempMinorFaultOwner>());

	// no fault
	faultOwner->updateFaults() ;
	EXPECT_FALSE(faultTx1->isFaultPresent()) ;
	EXPECT_FALSE(faultTx2->isFaultPresent()) ;
	EXPECT_FALSE(faultTx3->isFaultPresent()) ;
	EXPECT_FALSE(faultTx4->isFaultPresent()) ;

	std::cout << "** No Faults ** " << std::endl ;

	// fault
    std::shared_ptr<IRadio> radio(IRadioFactory::getInterface());
    ITxPort& txPort1 = radio->getTxPort(0);
	ITxPort& txPort2 = radio->getTxPort(1);
	ITxPort& txPort3 = radio->getTxPort(2);
	ITxPort& txPort4 = radio->getTxPort(3);

	// Cast so that we can use the test member mTestTemperature
	TestCommonTxPort& testTx1Port = dynamic_cast<TestCommonTxPort&>(txPort1);
	TestCommonTxPort& testTx2Port = dynamic_cast<TestCommonTxPort&>(txPort2);
	TestCommonTxPort& testTx3Port = dynamic_cast<TestCommonTxPort&>(txPort3);
	TestCommonTxPort& testTx4Port = dynamic_cast<TestCommonTxPort&>(txPort4);

    // Check over temperature major faults for all available Tx ports
    // Fault in ports 1,2
	testTx1Port.mTestTemperature = 82.0;
	testTx2Port.mTestTemperature = 82.0;
	testTx3Port.mTestTemperature = 81.0;
	testTx4Port.mTestTemperature = 81.0;
	faultOwner->updateFaults() ;
    EXPECT_TRUE(faultTx1->isFaultPresent()) ;
    EXPECT_TRUE(faultTx2->isFaultPresent()) ;
    EXPECT_FALSE(faultTx3->isFaultPresent()) ;
    EXPECT_FALSE(faultTx4->isFaultPresent()) ;

    // Fault in ports 3,4
	testTx1Port.mTestTemperature = 81.0;
	testTx2Port.mTestTemperature = 81.0;
	testTx3Port.mTestTemperature = 82.0;
	testTx4Port.mTestTemperature = 82.0;
	faultOwner->updateFaults() ;
	EXPECT_FALSE(faultTx1->isFaultPresent()) ;
	EXPECT_FALSE(faultTx2->isFaultPresent()) ;
	EXPECT_TRUE(faultTx3->isFaultPresent()) ;
	EXPECT_TRUE(faultTx4->isFaultPresent()) ;

    // Fault in all ports
	testTx1Port.mTestTemperature = 90.0;
	testTx2Port.mTestTemperature = 90.0;
	testTx3Port.mTestTemperature = 90.0;
	testTx4Port.mTestTemperature = 90.0;
	faultOwner->updateFaults() ;
	EXPECT_TRUE(faultTx1->isFaultPresent()) ;
	EXPECT_TRUE(faultTx2->isFaultPresent()) ;
	EXPECT_TRUE(faultTx3->isFaultPresent()) ;
	EXPECT_TRUE(faultTx4->isFaultPresent()) ;

    // No Faults
	testTx1Port.mTestTemperature = 80.0;
	testTx2Port.mTestTemperature = 80.0;
	testTx3Port.mTestTemperature = 80.0;
	testTx4Port.mTestTemperature = 80.0;
	faultOwner->updateFaults() ;
	EXPECT_FALSE(faultTx1->isFaultPresent()) ;
	EXPECT_FALSE(faultTx2->isFaultPresent()) ;
	EXPECT_FALSE(faultTx3->isFaultPresent()) ;
	EXPECT_FALSE(faultTx4->isFaultPresent()) ;
}
