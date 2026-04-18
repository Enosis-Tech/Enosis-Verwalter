// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 17 from 2026 ***
// *** Update: April 17 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef ENOSIS_ENMAN_H
#define ENOSIS_ENMAN_H

#ifdef _cpluplus
extern "C" {
#endif

// ****************************
// *** Standard C Libraries ***
// ****************************

#ifndef _cplusplus
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#endif

// ******************************
// *** Standard C++ Libraries ***
// ******************************

#ifdef _cplusplus
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstddef>
#include <cstdint>
#include <cstring>
#endif

// *************************
// *** Common Structures ***
// *************************

// ***************************
// *** Common C Structures ***
// ***************************

// *************************
// *** Common C++ Clases ***
// *************************

#ifdef _cpluplus

class window_man {

	private:

		char name[30];

		uint32_t width;
		uint32_t height;

	public:

		// Constructors

		window_man(const char*);

		// Getter and Setter for name

		void  set_name(const char*);
		char* get_name(void);

		// Getter and Setter for with

		void     set_width(uint32_t);
		uint32_t get_width(void);

		// Getter and Setter for height

		void     set_height(uint32_t);
		uint32_t get_height(void);

}

#endif

// ************************
// *** Common Functions ***
// ************************

void enman_init();
bool enman_loop();
void enman_free();
void enman_main(void (enman_init)(), void (enman_loop)(), void (enman_free)());

// **************************
// *** Common C Functions ***
// **************************

// ****************************
// *** Common C++ Functions ***
// ****************************

#ifdef _cpluplus
}
#endif

#endif // ENOSIS_ENMAN_H