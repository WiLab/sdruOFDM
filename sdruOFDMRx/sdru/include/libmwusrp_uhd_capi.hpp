/* Copyright 2012 The MathWorks, Inc. */
#ifndef __libmwusrp_uhd_capi_hpp__
#define __libmwusrp_uhd_capi_hpp__

/* we have locally replicated necessary defs from src/include/package.h */
#include "sdrupackage.h"

#if defined(BUILDING_LIBMWUSRP_UHD_CAPI)
    #define LIBMWUSRP_UHD_CAPI_API EXTERN_C DLL_EXPORT_SYM
    #define LIBMWUSRP_UHD_CAPI_API_DLL_SYM DLL_EXPORT_SYM
#else
    /* for emlc compilation */
    #define LIBMWUSRP_UHD_CAPI_API EXTERN_C DLL_IMPORT_SYM
    #define LIBMWUSRP_UHD_CAPI_API_DLL_SYM DLL_IMPORT_SYM

    /* for eml block compilation:
    #define LIBMWUSRP_UHD_CAPI_API 
    */
#endif


#endif
