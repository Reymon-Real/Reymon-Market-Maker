// *********************************
// *** Author: PZH Geselleschaft ***
// *** Date: 9 Mai 2026          ***
// *** Update 9 Mai 2026         ***
// *** License: AGPL-3-or-later  ***
// *********************************

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void PZHNormalisieren(char* pc_normalisieren) {

	for (size_t i = 0; i < strlen(pc_normalisieren); i++) {

		char c = pc_normalisieren[i];
		pc_normalisieren[i] = toupper(c);

	}

}