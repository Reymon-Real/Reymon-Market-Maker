# **************************
# *** Author: Reymon Dev ***
# *** Date: 1 Mai 2026   ***
# *** Update: 1 Mai 2026 ***
# *** License: MIT       ***
# **************************

subdir('binance')
subdir('kraken')

libreymm_connect = shared_library(
	'reymm_connect',

	FILES_CONNECT_KRAKEN,
	FILES_CONNECT_BINANCE,

	link_with: [ libreymm_utilities, libreymm_risk ],
	dependencies: dependencies,
	include_directories: directories
)