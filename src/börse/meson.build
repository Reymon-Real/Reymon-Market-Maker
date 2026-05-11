# *********************************************
# *** Author: PZH Gesellschaft, SAS de CV   ***
# *** Date: 8 Mai 2026                      ***
# *** Update: 8 Mai 2026                    ***
# *** License: AGPL-3-or-later              ***
# *********************************************

subdir('binance')
subdir('kraken')

# ***************
# *** Binance ***
# ***************

bibliothek_borse_binance = shared_library(
	'pzhmm_börse_binance',

	datei_borse_binance,

	link_with: [
		bibliothek_risiko,
		bibliothek_hilfsfunktionen
	],

	dependencies: dependencies,
	include_directories: directories,

	link_args: [ '-lm' ],

	install: true
)

# **************
# *** Kraken ***
# **************

bibliothek_borse_kraken = shared_library(
	'pzhmm_börse_kraken',

	datei_borse_kraken,

	link_with: [
		bibliothek_risiko,
		bibliothek_hilfsfunktionen
	],

	dependencies: dependencies,
	include_directories: directories,

	link_args: [ '-lm' ],

	install: true
)

# ********************
# *** Bibliotheken ***
# ********************

bibliothek_borsen = [
	bibliothek_borse_binance,
	bibliothek_borse_kraken
]