// **************************
// *** Author: Reymon Dev ***
// *** Date: 1 Mai 2026   ***
// *** Update: 1 Mai 2026 ***
// *** License: MIT       ***
// **************************

#include <stdio.h>
#include <reymm/reymm.h>

void reymm_initialiseren() {
	
	FILE* setting = NULL;

	reymm_io(REYMM_TYPE_IO_OPEN, "setting.json", "rb", setting);

}