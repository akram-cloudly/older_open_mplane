#ifndef _ACE_AXIS_FailString_H_
#define _ACE_AXIS_FailString_H_

#include <string>
#include <memory>

/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      FailString.h
 * \brief     Defines an interface for failure string capture
 *
 *
 * \details   Defines an interface for carriers to capture and use a failure reason string
 *
 */

namespace Mplane
{

/*! @brief  Fail interface
 *
 *  Provides an object to encapsulate failure string in classes so that they have a common
 *  mechanism for capturing (and manipulating) a failure reason string. The failure reason being used when
 *  any method fails, the reason providing feedback (e.g. in error logs, customer messages etc)
 *
 */
class FailString
{
public:

    /**
     *
     */
    FailString();

    /*! @brief  Destructor
     *
     *  Allow destruction through the interface
     */
    virtual ~FailString();

    /*! @brief  Get failure reason
     *
     *  If a method fails, then this method will return a
     *  string describing the reason for failure
     * @return string containing reason for failure, or empty string if no fail
     */
    virtual std::string failReason(void) ;

    /*! @brief  Set failure reason
     *
     *  Set the failure reason string
     * @param reason string containing reason for failure
     */
    virtual void setFailReason(const std::string& reason) ;

    /*! @brief  Clear failure reason
     *
     * Clear out the failure reason string
     * @param reason string containing reason for failure
     */
    virtual void clearFailReason() ;

private:
    std::string mFailureReason ;
};


}


#endif /* _ACE_AXIS_FailString_H_ */
