project(
	'Enosis Verwalter',
	'c', 'cpp',
	version: '0.1.0',
	meson_version: '>=1.9.0',
	license: 'AGPL-3-or-later',

	default_options: [
		
		'strip=true',
		
		'c_std=c99',
		'cpp_std=c++20',

		'optimization=g',
		'warning_level=3',
		'buildtype=debug',
	
	]
)

# *******************
# *** Directories ***
# *******************

search_include = include_directories('include', 'include/sqlite', 'include/Enosis')

# ********************
# *** Dependencies ***
# ********************

sqlite3_dep = dependency('sqlite3', static: true)

dependencies = [ sqlite3_dep ]

if host_machine.system() == 'windows' 

dependentias_enui = []

elif host_machine.system() == 'linux'

xlib_dep = dependency('x11')

wayland_client_dep = dependency('wayland-client')
wayland_server_dep = dependency('wayland-server')
wayland_cursor_dep = dependency('wayland-cursor')

dependencies_enui = [
	xlib_dep,
	wayland_client_dep,
	wayland_server_dep,
	wayland_cursor_dep
]

endif

# *************
# *** Files ***
# *************

subdir('src/bestand')
subdir('src/enui')
subdir('src/kern')

# *****************
# *** Libraries ***
# *****************

library_shared_enver_enui_xlib = shared_library(
	'enui_xlib',

	DATEL_ENUI_XLIB_C,

	include_directories: search_include,

	dependencies: [
		dependencies_enui
	],

	install: true
)

library_shared_enver_enui_wayland = shared_library(
	'enui_wayland',

	DATEL_ENUI_WAYLAND_C,

	include_directories: search_include,

	dependencies: [
		dependencies_enui
	],

	install: true
)

library_shared_enver_bestand = shared_library(
	'enver_bestand',
								
	DATEL_BESTAND_CPP,

	include_directories: search_include,
								
	dependencies: [
		dependencies
	],

	install: true
)


# *******************
# *** Executables ***
# *******************

binarius_executabilis_enver = executable(
	'enver',
							
	DATEL_KERN_CPP,

	include_directories: search_include,
							
	link_with: [
		library_shared_enver_enui_xlib,
		library_shared_enver_enui_wayland,
		library_shared_enver_bestand
	],

	dependencies: [
		dependencies
	],

	install: true
)