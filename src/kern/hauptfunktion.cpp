// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 17 from 2026 ***
// *** Update: April 17 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

// **************************
// *** Standard Libraries ***
// **************************

#include <cstdlib>

// ************************
// *** Enosis Libraries ***
// ************************

#include <enver/enver.hpp>

// *******************
// *** Entry Point ***
// *******************

void enver_hauptfunktion(int argc, char** argv) {

	enver_initia(argc, argv);
	
	while(enver_renova() == true);

	enver_libera();

	return EXIT_SUCCESS;
}