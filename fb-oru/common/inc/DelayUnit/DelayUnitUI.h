/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      DelayUnitUI.h
 * \brief     Provide support for UI (1 / line rate)
 *
 *
 * \details
 *
 */


#ifndef DELAYUNITUI_H_
#define DELAYUNITUI_H_

#include "DelayUnit/DelayUnit.h"

namespace Mplane {

class DelayUnitUI : public DelayUnit
{
public:
	static const DelayUnitUI UNIT ;

	/**
	 * Does this delay unit need to know the line rate in order to convert to/from ns
	 * @return true if it uses the line rate; false otherwise
	 */
	virtual bool usesLineRate() const {return true ;} ;

	/**
	 * Convert from these units into nanoseconds
	 * @param delay	Delay in these units
	 * @param lineRateMHz	Optional line rate in MHz
	 * @return delay in nanoseconds
	 */
	virtual float to_ns(float delay, float lineRateMHz = 3072.0) const  ;

	/**
	 * Convert from nanoseconds into these units
	 * @param delay	Delay in nanoseconds
	 * @param lineRateMHz	Optional line rate in MHz
	 * @return delay in these units
	 */
	virtual float from_ns(float delay_ns, float lineRateMHz = 3072.0) const  ;

	/**
	 * Get a string representation of the units
	 * @return string containing units
	 */
	virtual std::string unitstring() const {
		return "UI";
	} ;

};

} // namespace Mplane


#endif /* DELAYUNITUI_H_ */
