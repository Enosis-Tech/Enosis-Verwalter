// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 28 of 2026   ***
// *** Update: April 28 of 2026   ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef ENOSIS_ENVER_ENVER_HPP
#define ENOSIS_ENVER_ENVER_HPP

// ******************************
// *** Standard C++ Libraries ***
// ******************************

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstddef>
#include <cstdint>
#include <cstring>

// **************************
// *** SQLite Libraries   ***
// **************************

#include <sqlite/sqlite3.h>

// ********************
// *** Data Types    ***
// ********************

// ***************
// *** Classes ***
// ***************

class EFenster {
	
	private:
		
		char name[30];
		uint32_t breite;
		uint32_t hoehe;
	
	public:
		
		// Constructors
		EFenster(const char*);
		
		// Getter and Setter for name
		void  setze_name(const char*);
		char* hole_name(void);
		
		// Getter and Setter for width
		void     setze_breite(uint32_t);
		uint32_t hole_breite(void);
		
		// Getter and Setter for height
		void     setze_hoehe(uint32_t);
		uint32_t hole_hoehe(void);
};

// **********************
// *** Main Functions ***
// **********************

extern void enver_initialiseren(int, char**);
extern bool enver_aktualisieren();
extern void enver_freigeben();
extern void enver_hauptfunktion(int, char**);

// ************************
// *** Create Functions ***
// ************************

extern void enver_erstellen_tabelle(const char*);
extern void enver_erstellen_datenbank(const char*);

// ************************
// *** Output Functions ***
// ************************

extern void enver_hinzufuegen();

// ***********************
// *** Input Functions ***
// ***********************

extern void enver_lesen();

// ********************
// *** IO Functions ***
// ********************

extern void enver_loeschen();

#endif // ENOSIS_ENVER_ENVER_HPP