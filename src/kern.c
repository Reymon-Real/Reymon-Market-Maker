// *********************************
// *** Author: PZH Geselleschaft ***
// *** Date: 9 Mai 2026          ***
// *** Update 9 Mai 2026         ***
// *** License: AGPL-3-or-later  ***
// *********************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <yyjson.h>
#include <pzh/pzhmm/pzhmm.h>

static char exchange[128];
static size_t threads;

int main(void) {

	// ********************************
	// *** Konfiguration von yyjson ***
	// ********************************

	yyjson_read_flag flg = YYJSON_READ_ALLOW_COMMENTS | YYJSON_READ_ALLOW_TRAILING_COMMAS;
	yyjson_read_err  err;

	yyjson_doc* doc  = yyjson_read_file("config/setting.json", flg, NULL, &err);

	if(!doc) return EXIT_FAILURE;

	yyjson_val* root = yyjson_doc_get_root(doc);

	// ****************************
	// *** Einstellugen abrufen ***
	// ****************************
	
	snprintf(exchange, 128, "%s", yyjson_get_str(yyjson_obj_get(root, "exchange")));
	
	threads = yyjson_get_uint(yyjson_obj_get(root, "threads"));

	yyjson_doc_free(doc);

	// **********************************
	// ***  Wählen sie eine Börse aus ***
	// **********************************

	PZHNormalisieren(exchange); // Format normalisieren

	// *****************************
	// *** Erstellen von Threads ***
	// *****************************

	for (size_t i = 0; i < threads; i++) {

		if (strcmp(exchange, "BINANCE") == 0)
			binance_verbinden();
	
		else if (strcmp(exchange, "KRAKEN") == 0)
			kraken_verbinden();

		else if (strcmp(exchange, "NOTHING") == 0)
			break;
	}

	return EXIT_SUCCESS;
}