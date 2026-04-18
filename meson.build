project(
	'Enosis Manager',
	'c', 'cpp',
	version: '0.1.0',
	meson_version: '>=1.9.0',
	license: 'AGPL-3-or-later',

	default_options: [
		
		'buildtype=debug',
		'optimization=g',
		'strip=true'
	
	]
)

# *******************
# *** Directories ***
# *******************

search_inc = include_directories('include', 'include/sqlite', 'include/Enosis')

# ********************
# *** Dependencies ***
# ********************

GTK3_DEP    = dependency('gtk+-3.0')
SQLITE3_DEP = dependency('sqlite3', static: true)

# *************
# *** Files ***
# *************

subdir('src/database')
subdir('src/enman')
subdir('src/gui')

# *****************
# *** Libraries ***
# *****************

library_shared_enman_db  = shared_library(
								'enmandb',
								
								[ C_FILES_DB, CPP_FILES_DB ],

								include_directories: search_inc,
								
								dependencies: [
									SQLITE3_DEP
								],

								install: true
							)


library_shared_enman_gui = shared_library(
								'enmangui',
							
								CPP_FILES_GUI,

								include_directories: search_inc,
							
								dependencies: [
									GTK3_DEP
								],

								install: true
							)

# *******************
# *** Executables ***
# *******************

binary_executable_enman = executable(
							'enman',
							
							CPP_FILES_ENMAN,

							include_directories: search_inc,
							
							link_with: [
								library_shared_enman_db,
								library_shared_enman_gui
							],

							dependencies: [
								GTK3_DEP,
								SQLITE3_DEP
							],

							install: true
						)