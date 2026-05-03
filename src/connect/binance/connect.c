// **************************
// *** Author: Reymon Dev ***
// *** Date: 1 Mai 2026   ***
// *** Update: 1 Mai 2026 ***
// *** License: MIT       ***
// **************************

#include <reymm/connect/binance.h>

void binance_connect(void (binance_initialiseren)(), binance_st (binance_aktualisieren)(), void (binance_freigeben)()) {

	binance_initialiseren();
	while(binance_aktualisieren() == REYMM_ST_CONNECT_SUCCESS);
	binance_freigeben();
}