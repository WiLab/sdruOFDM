/* Copyright 2012 The MathWorks, Inc. */

#ifndef SDRUPACKAGE_h
#define SDRUPACKAGE_h

#ifdef _MSC_VER
  #define DLL_EXPORT_SYM __declspec(dllexport)
  #define DLL_IMPORT_SYM __declspec(dllimport)
#elif __GNUC__ >= 4
  #define DLL_EXPORT_SYM __attribute__ ((visibility("default")))
  #define DLL_IMPORT_SYM __attribute__ ((visibility("default")))
#else
  #define DLL_EXPORT_SYM
  #define DLL_IMPORT_SYM
#endif

#ifdef __cplusplus
  #define EXTERN_C extern "C"
#else
  #define EXTERN_C extern
#endif

#endif /* SDRUPACKAGE_h */
