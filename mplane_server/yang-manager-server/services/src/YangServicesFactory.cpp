/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      YangServicesFactory.cpp
 * \brief     <one-line description of file>
 *
 *
 * \details   <multi-line detailed description of file>
 *
 */

#include "IServicesCtl.h"
#include "YangServices.h"

using namespace Mplane;

std::shared_ptr<IServicesCtl>
IServicesFactory::create() {
  static std::shared_ptr<IServicesCtl> instance(
      std::make_shared<YangServices>());
  return instance;
}
