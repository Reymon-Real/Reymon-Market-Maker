// **************************
// *** Author: Reymon Dev ***
// *** Date: 1 Mai 2026   ***
// *** Update: 1 Mai 2026 ***
// *** License: MIT       ***
// **************************

#ifndef REYMON_REYMM_CONNECT_BINANCE_H
#define REYMON_REYMM_CONNECT_BINANCE_H
#if defined(__cplusplus)
extern "C" {
#endif

// *****************
// *** Libraries ***
// *****************

#include "connect.h"
#include <curl/curl.h>

// ***************
// *** Aliases ***
// ***************

typedef reymm_st_connect binance_st;

// ******************
// *** Structures ***
// ******************

// *****************
// *** Functions ***
// *****************

extern void       binance_initialiseren();
extern binance_st binance_aktualisieren();
extern void       binance_freigeben();
extern void       binance_connect(void (binance_initialiseren)(), binance_st (binance_aktualisieren)(), void (binance_freigeben)());

#if defined(__cplusplus)
}
#endif
#endif // REYMON_REYMM_CONNECT_BINANCE_H