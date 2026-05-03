// **************************
// *** Author: Reymon Dev ***
// *** Date: 1 Mai 2026   ***
// *** Update: 1 Mai 2026 ***
// *** License: MIT       ***
// **************************

#ifndef REYMON_REYMM_REYMM_H
#define REYMON_REYMM_REYMM_H
#if defined(__cplusplus)
extern "C" {
#endif

// *****************
// *** Libraries ***
// *****************

#include <math.h>
#include <stdint.h>

// ***************
// *** Aliases ***
// ***************

// *****************
// *** Enumerate ***
// *****************

// ******************
// *** Structures ***
// ******************

typedef struct {

	double bid;
	double ask;
	double bid_size;
	double ask_size;

} reymm_mp_t;

// *****************
// *** Functions ***
// *****************

extern double reymm_mid_price(reymm_mp_t*);
extern double reymm_spread(reymm_mp_t*);
extern double reymm_imbalance(reymm_mp_t*);
extern double reymm_adjustment(reymm_mp_t*);
extern double reymm_mp(reymm_mp_t*);

#if defined(__cplusplus)
}
#endif
#endif // REYMON_REYMM_REYMM_H