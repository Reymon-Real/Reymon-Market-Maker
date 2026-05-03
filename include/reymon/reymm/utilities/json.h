// **************************
// *** Author: Reymon Dev ***
// *** Date: 1 Mai 2026   ***
// *** Update: 1 Mai 2026 ***
// *** License: MIT       ***
// **************************

#ifndef REYMON_REYMM_UTILITIES_JSON_H
#define REYMON_REYMM_UTILITIES_JSON_H
#if defined(__cplusplus)
extern "C" {
#endif

// ************************
// *** Libraries Config ***
// ************************

#define JSMN_STATIC

// *****************
// *** Libraries ***
// *****************

#include <jsmn.h>
#include <curl/curl.h>

// **************
// *** Macros ***
// **************

#define REYMM_TOKEN_SIZE 0x1000

// ***************
// *** Aliases ***
// ***************

// *****************
// *** Enumerate ***
// *****************

// ******************
// *** Structures ***
// ******************

// *****************
// *** Functions ***
// *****************

extern jsmn_parser* reymm_open_json();
extern char*        reymm_get_json(char* msg, const char* key);

#if defined(__cplusplus)
}
#endif
#endif // REYMON_REYMM_UTILITIES_JSON_H