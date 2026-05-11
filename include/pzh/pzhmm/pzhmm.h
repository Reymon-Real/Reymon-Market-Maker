// *********************************
// *** Author: PZH Geselleschaft ***
// *** Date: 9 Mai 2026          ***
// *** Update 9 Mai 2026         ***
// *** License: AGPL-3-or-later  ***
// *********************************

#ifndef PZH_PZHMM_PZHMM_H
#define PZH_PZHMM_PZHMM_H
#ifdef __cplusplus
extern "C" {
#endif

// ********************
// *** Bibliotheken ***
// ********************

#include "hilfs/string.h"
#include "hilfs/sicherheit.h"

#include "risiko/bestand.h"
#include "risiko/mikropreis.h"

// ******************
// *** Funktionen ***
// ******************

extern void binance_verbinden();
extern void kraken_verbinden();

#ifdef __cplusplus
}
#endif
#endif // PZHMM_PZHMM_H