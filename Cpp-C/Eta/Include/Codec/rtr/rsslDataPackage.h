
#ifndef __RSSL_DATA_PACKAGE_H
#define __RSSL_DATA_PACKAGE_H


#ifdef __cplusplus
extern "C"
{
#endif

/* This includes all headers needed to use the data package */
#include "rtr/rsslDataTypeEnums.h"
#include "rtr/rsslRetCodes.h"
#include "rtr/rsslReal.h"
#include "rtr/rsslDateTime.h"
#include "rtr/rsslQos.h"
#include "rtr/rsslState.h"
#include "rtr/rsslIterators.h"
#include "rtr/rsslArray.h"
#include "rtr/rsslElementList.h"
#include "rtr/rsslFieldList.h"
#include "rtr/rsslFilterList.h"
#include "rtr/rsslMap.h"
#include "rtr/rsslSeries.h"
#include "rtr/rsslVector.h"
#include "rtr/rsslRmtes.h"
#include "rtr/rsslPrimitiveEncoders.h"
#include "rtr/rsslPrimitiveDecoders.h"
#include "rtr/rsslDataDictionary.h"
#include "rtr/rsslSetData.h"
#include "rtr/rsslDataUtils.h"



/** 
 *	@addtogroup DataPkgVersion Data Package Library Version Helper
 *	@{
 */

/** 
 * @brief Programmatically extracts library and product version information that is compiled into this library
 *
 * User can call this function to programmatically extract version information, or <BR>
 * query version information externally (via 'strings' command or something similar<BR>
 * and grep for the following tags:<BR>
 * 'VERSION' - contains internal library version information such as node number (e.g. rssl1.4.F2)<BR>
 * 'PRODUCT' - contains product information such as load/package naming (e.g. upa7.0.0.L1)<BR>
 * @param pVerInfo RsslLibraryVersionInfo structure to populate with library version information
 * @see RsslLibraryVersionInfo
 */
RSSL_API void rsslQueryDataLibraryVersion(RsslLibraryVersionInfo *pVerInfo);


/**
 * @}
 */



#ifdef __cplusplus
}
#endif

 
#endif

