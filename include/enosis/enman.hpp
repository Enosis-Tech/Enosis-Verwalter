// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 17 from 2026 ***
// *** Update: April 17 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef ENOSIS_ENMAN_HPP
#define ENOSIS_ENMAN_HPP

// ******************************
// *** Standard C++ Libraries ***
// ******************************

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstddef>
#include <cstdint>
#include <cstring>

// ************************
// *** SQLite Libraries ***
// ************************

#include <sqlite/sqlite3.h>

// ******************
// *** Data Types ***
// ******************

// **************
// *** Clases ***
// **************

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

};

// **********************
// *** Main Functions ***
// **********************

void enman_init();
bool enman_loop();
void enman_free();
void enman_main(void (enman_init)(), void (enman_loop)(), void (enman_free)());

// ************************
// *** Create Functions ***
// ************************

void enman_create_database(const char*);
void enman_create_table(const char*);

// ************************
// *** Output Functions ***
// ************************

void enman_add();

// **********************
// *** Input Funcions ***
// **********************

void enman_read();

// ********************
// *** IO Functions ***
// ********************

void enman_delete();

#endif // ENOSIS_ENMAN_HPP