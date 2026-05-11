# *********************************************
# *** Author: PZH Gesellschaft, SAS de CV   ***
# *** Date: 8 Mai 2026                      ***
# *** Update: 8 Mai 2026                    ***
# *** License: AGPL-3-or-later              ***
# *********************************************

datei_hilfs = files(
	'pzhnormalisieren.c',
	'pzhsignatur.c'
)

bibliothek_hilfsfunktionen = shared_library(
	'pzhmm_hilfsfunktionen',

	datei_hilfs,

	dependencies: dependencies,
	include_directories: directories,

	install: true
)