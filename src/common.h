#ifndef _COMMON_H
#define _COMMON_H

#include <stdio.h>

#ifdef DEBUG
  #define DEBUG_HEADER fprintf(stderr, "node-usb-detection [%s:%s() %d]: ", __FILE__, __FUNCTION__, __LINE__);
  #define DEBUG_FOOTER fprintf(stderr, "\n");
  #define DEBUG_LOG(...) DEBUG_HEADER fprintf(stderr, __VA_ARGS__); DEBUG_FOOTER
#else
  #define DEBUG_LOG(...)
#endif

#endif 