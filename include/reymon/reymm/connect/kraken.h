// **************************
// *** Author: Reymon Dev ***
// *** Date: 1 Mai 2026   ***
// *** Update: 1 Mai 2026 ***
// *** License: MIT       ***
// **************************

#ifndef REYMON_REYMM_CONNECT_KRAKEN_H
#define REYMON_REYMM_CONNECT_KRAKEN_H
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

typedef reymm_st_connect kraken_st;

// ******************
// *** Structures ***
// ******************

// *****************
// *** Functions ***
// *****************

extern void      kraken_initialiseren();
extern kraken_st kraken_aktualisieren();
extern void      kraken_freigeben();
extern void      kraken_connect(void (kraken_initialiseren)(), kraken_st (kraken_aktualisieren)(), void (kraken_freigeben)());

#if defined(__cplusplus)
}
#endif
#endif // REYMON_REYMM_CONNECT_KRAKEN_H