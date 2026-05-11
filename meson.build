project(
	'PZH Market-Maker',
	'c',
	meson_version : '>=1.9.0',
	version : '0.1',
	default_options : [
		'c_std=gnu23',
		'warning_level=3',
		'buildtype=debug',
		'strip=true'
  	]
)

# ************************
# *** Global Arguments ***
# ************************

if get_option('buildtype') == 'debug'

add_project_arguments(
	'-DREYMM_DEMO=1',
	language: 'c'
)

else

add_project_arguments(
	'-DREYMM_RELEASE=1',
	language: 'c'
)

endif

add_project_link_arguments(
	
	'-lm',
	'-lpthread',

	language: 'c'
)

# ****************
# *** Programs ***
# ****************

gdb = find_program('gdb')

# ********************
# *** Dependencies ***
# ********************

curl       = dependency('libcurl')
json       = dependency('yyjson')
crypto     = dependency('libcrypto')
openssl    = dependency('openssl')
websockets = dependency('libwebsockets')

dependencies = [
	curl,
	json,
	crypto,
	openssl,
	websockets
]

# ***************
# *** Headers ***
# ***************

directories = include_directories(
	'include',
	'include/reymon'
)

# **********************
# *** Subdirectories ***
# **********************

subdir('src/hilfs')
subdir('src/risiko')
subdir('src/börse')

libraries = [
	bibliothek_hilfsfunktionen,
	bibliothek_risiko,
	bibliothek_borsen
]

# *******************
# *** Executables ***
# *******************

reymm_exe = executable(
	'pzhmm',
	
	'src/kern.c',

	link_with: libraries,
	dependencies : dependencies,
	include_directories: directories,

	install: true
)

# *******************
# *** Run Targets ***
# *******************

run_target('run-debug',   command: [ gdb, reymm_exe ])
run_target('run-release', command: [ reymm_exe ])