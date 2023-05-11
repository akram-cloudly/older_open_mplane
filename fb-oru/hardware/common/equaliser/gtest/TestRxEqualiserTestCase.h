/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      RxEqualiserTestCase.h
 * \brief     Test case header file for the Rx Equaliser
 *
 *
 * \details   Test case header file for the Rx Equaliser
 *
 */

#ifndef TEST_RX_EQUALISER_TESTCASE_H_
#define TEST_RX_EQUALISER_TESTCASE_H_


// Includes go here, before the namespace
#include "gtest/gtest.h"

#include "OffTargetFPGA.h"
#include "CommonRxEqualiser.h"
#include "RxEqualiser.h"
#include "TxEqualiser.h"


namespace Mplane
{

class TestRxEq : public CommonRxEqualiser
{
public:

	TestRxEq();

    ~TestRxEq();


};


class TestRxEqTestCases: public ::testing::Test
{

protected:
    virtual void SetUp();
    virtual void TearDown();
    virtual void setFreq(std::shared_ptr<CommonEqualiser> cEq, Frequency freq);
    virtual void extractResp(std::shared_ptr<RxEqualiser> eq, std::vector<EqPoint> &freqResp, bool ifResp);
    virtual void interpolate(std::shared_ptr<RxEqualiser> eq, std::vector<EqPoint> freqResp, std::vector<EqPoint> &freqGainTable);
    virtual void combineResp(std::shared_ptr<RxEqualiser> eq, std::vector<EqPoint> &freqGainTable1, std::vector<EqPoint> &freqGainTable2);
    virtual void calculateIfft(std::shared_ptr<RxEqualiser> eq,std::vector<EqPoint> freqGainTable, std::complex<float> input[]);
    virtual void tukeyWindow(std::shared_ptr<RxEqualiser> eq, std::vector<float> &factor);

};

} /* namespace Mplane */

#endif /* TEST_RX_EQUALISER_TESTCASE_H_ */
