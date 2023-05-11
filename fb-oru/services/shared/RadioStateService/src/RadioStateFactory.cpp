/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      RadioStateFactory.cpp
 * \brief     Implementation of the IRadioStateFactory
 *
 *
 * \details   This file defines the stub implementation of the RadioState
 *            interface IRadioState class.
 *
 */

#include <memory>
#include "IRadioState.h"
#include "RadioStateService.h"


namespace Mplane
{


/******* Base class interface implementation ***********/


std::shared_ptr<IRadioState> IRadioState::getInstance( void )
{

    static std::shared_ptr<IRadioState> _pInstance( std::make_shared<RadioStateService>() );

    return _pInstance;
}

} // namespace Mplane
