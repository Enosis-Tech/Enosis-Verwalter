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

#include <enosis/enman.hpp>

// *******************
// *** Entry Point ***
// *******************

int main(void) {

	enman_init();
	
	while(enman_loop() == true);

	enman_free();

	return EXIT_SUCCESS;
}