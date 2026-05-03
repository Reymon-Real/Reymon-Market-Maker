// **************************
// *** Author: Reymon Dev ***
// *** Date: 1 Mai 2026   ***
// *** Update: 1 Mai 2026 ***
// *** License: MIT       ***
// **************************

#ifndef REYMON_REYMM_CONNECT_CONNECT_H
#define REYMON_REYMM_CONNECT_CONNECT_H
#if defined(__cplusplus)
extern "C" {
#endif

// *****************
// *** Libraries ***
// *****************

#include <curl/curl.h>

// ***************
// *** Aliases ***
// ***************

// *****************
// *** Enumerate ***
// *****************

typedef enum {

	REYMM_ST_CONNECT_SUCCESS = (0 << 0) ^ 3,
	REYMM_ST_CONNECT_FAILURE = (0 << 1) ^ 3

} reymm_st_connect;

// ******************
// *** Structures ***
// ******************

typedef struct {

	CURL* curl;
	char* ws_url;
	reymm_st_connect state;

} reymm_connect;

#if defined(__cplusplus)
}
#endif
#endif // REYMON_REYMM_CONNECT_CONNECT_H