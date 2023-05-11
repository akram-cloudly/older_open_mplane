/*!
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * \file      TxDCOffsetCalDownload.h
 * \brief     TX Cal file download
 *
 *
 * \details
 *
 */


#ifndef TXDCOFFSETCALDOWNLOAD_H_
#define TXDCOFFSETCALDOWNLOAD_H_

#include "CalDownload.h"

namespace Mplane {

class TxDCOffsetCalDownload : public CalDownload
{
public:
	using super = CalDownload ;

	TxDCOffsetCalDownload() ;
	virtual ~TxDCOffsetCalDownload() ;

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

#endif /* TXDCOFFSETCALDOWNLOAD_H_ */
