/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      DvTypeComplex.h
 * \brief     Represents DataVariant type "COMPLEX"
 *
 *
 * \details
 *
 */

#ifndef DvTypeComplex_H_
#define DvTypeComplex_H_

#include "DvTypeBase.h"
#include "IDvComplex.h"

namespace Mplane {

class DvTypeComplex : public virtual IDvComplex, public DvTypeBase {
 public:
  explicit DvTypeComplex(const std::string& typeStr = "");
  virtual ~DvTypeComplex();

  /**
   * Can we set the value of this particular type using the specified string?
   * @param value string
   * @return true if the value string is valid for setting this type
   */
  virtual bool canSetValue(const std::string& value) const override;

  /**
   * Can we set this particular type using the specified string?
   * @param type string
   * @return true if the type string is valid for setting this type
   */
  virtual bool canSetType(const std::string& type) const override;

  /**
   * Clears out any current value
   */
  virtual void clear() override;

  /**
   * Get the DataVariant type as a string, ie, INT, FLOAT, HEXINT, STRING, ENUM
   * @return variant type as a string
   */
  virtual const std::string getTypeStr() const override;

  /**
   * Get the DataVariant limits as a string, "{min..max/step}"
   * @return limits as a string
   */
  virtual const std::string getLimitsStr() const override;

  /**
   * Get the DataVariant limits minimum setting as a string
   * @return minimum as a string or empty string if not set
   */
  virtual const std::string getLimitsMin() const override;

  /**
   * Get the DataVariant limits maximum setting as a string
   * @return maximum as a string or empty string if not set
   */
  virtual const std::string getLimitsMax() const override;

  /**
   * Get the DataVariant limits step setting as a string
   * @return step as a string or empty string if not set
   */
  virtual const std::string getLimitsStep() const override;

  /**
   * Get the DataVariant type
   * @return variant type
   */
  virtual const DataVariantType::Type getType() const override;

  /**
   * Sets limits for either an INT or FLOAT type ; does nothing for any other
   * type
   * @param limitsStr    String in the format "min..max/step"
   * @return true if set ok (or type not INT/FLOAT); false on error
   */
  virtual bool setLimits(const std::string& limitsStr) override;

  /**
   * Set limits from min/max/step strings
   * @param minStr
   * @param maxStr
   * @param stepStr
   * @return true if set ok (or type not INT/FLOAT); false on error
   */
  virtual bool setLimits(
      const std::string& minStr,
      const std::string& maxStr,
      const std::string& stepStr) override;

  /**
   * Check the INT/FLOAT type current value against any set limits. Note that
   * this method may adjust the value based on the limits setting.
   * @return false if INT/FLOAT value does not match limits; true otherwise
   */
  virtual bool checkLimits(std::string& error) override;

  // IDvComplex

  /**
   * Set the value of the the variant to the float value. If the variant
   * is type Complex, the value is cast to a float internally.
   *
   *
   * @param value
   */
  virtual bool setComplex(const std::complex<float>& value) override;

  /**
   * Method returns the current variant value as an float
   *
   * @return variant value as an float
   */
  virtual std::complex<float> toComplex() const override;

  // IDvAccess interface

  /**
   * Set value using string
   * @param value
   * @return true if value string is valid
   */
  virtual bool set(const std::string& value) override;

  /**
   * Convert from specific type to intermediate type
   */
  virtual IDvAccess::InterInt toInterInt() const override;

  /**
   * Convert from specific type to intermediate type
   */
  virtual IDvAccess::InterFloat toInterFloat() const override;

  /**
   * Convert from intermediate type to specific type
   * @param value
   * @return false on error
   */
  virtual bool fromInterInt(const IDvAccess::InterInt& value) override;

  /**
   * Convert from intermediate type to specific type
   * @param value
   * @return false on error
   */
  virtual bool fromInterFloat(const IDvAccess::InterFloat& value) override;

 private:
  std::complex<float> mComplex; //<! COMPLEX

  // INT limits
  Limits<float> mLimits;
};

} // namespace Mplane

#endif /* DvTypeComplex_H_ */
