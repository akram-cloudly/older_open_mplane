/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      TxQuadCalDownload.h
 * \brief     TX Quadrature offset Cal data file download
 *
 *
 * \details
 *
 */


#ifndef TXQUADPHASEOFFSETCALDOWNLOAD_H_
#define TXQUADPHASEOFFSETCALDOWNLOAD_H_

#include "CalDownload.h"

namespace Mplane {

class TxQuadOffsetCalDownload : public CalDownload
{
public:
	using super = CalDownload ;

	TxQuadOffsetCalDownload() ;
	virtual ~TxQuadOffsetCalDownload() ;

	/**
	 * Called after object creation in order to perform any other initialisation tasks that can't be done
	 * during initialisation (i.e. ensures all virtual methods get called correctly)
	 *
	 * @param failReason string containing failure reason if fails
	 * @return status. Will be true if initialised ok, false otherwise
	 */
	virtual bool initialise(std::string& failReason) override ;

} ;

}

#endif /* TXQUADPHASEOFFSETCALDOWNLOAD_H_ */
