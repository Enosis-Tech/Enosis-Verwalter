// *********************************
// *** Author: Enosis Technology ***
// *** Date:   April 28 of 2026  ***
// *** Update: April 28 of 2026  ***
// *** License: AGPL-3-or-later  ***
// *********************************

#ifndef ENOSIS_ENUI_ENUI_H
#define ENOSIS_ENUI_ENUI_H

#ifdef __cplusplus
extern "C" {
#endif
// *********************
// *** Libraries     ***
// *********************

#if defined(_WIN32) || defined(_WIN64)
#include <Windows.h>
#endif // _WIN32

#ifdef __linux__
#if defined(XLIB)
#include <X11/Xlib.h>
#elif defined(WAYLAND)
#include <wayland.h>
#endif
#endif // __linux__

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

// *************
// *** Flags ***
// *************

// ***************
// *** Aliases ***
// ***************

// ********************
// *** Enumerations ***
// ********************

// **************
// *** Unions ***
// **************

// ******************
// *** Structures ***
// ******************

// ************************
// *** Shared Functions ***
// ************************

extern void enui_initialiseren();
extern bool enui_aktualisieren();
extern void enui_freigeben();
extern void enui_hauptfunktion();

#ifdef __cplusplus
}
#endif

#endif // ENOSIS_ENUI_ENUI_H