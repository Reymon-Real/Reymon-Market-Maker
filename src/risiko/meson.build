# *********************************************
# *** Author: PZH Gesellschaft, SAS de CV   ***
# *** Date: 8 Mai 2026                      ***
# *** Update: 8 Mai 2026                    ***
# *** License: AGPL-3-or-later              ***
# *********************************************

subdir('bestand')
subdir('mikropreis')

bibliothek_risiko = static_library(
	'pzhmm_risko',

	datei_risiko_bestand,
	datei_risiko_mikropreis,

	dependencies: dependencies,
	include_directories: directories,

	link_args: [ '-lm' ],

	install: false
)