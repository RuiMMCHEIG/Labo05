/*
  ---------------------------------------------------------------------------
  File            : Chrono.h
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 09.11.2021
  Description     : Header file with every prototype of the Chrono.cpp file

  Comment(s)      : -

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef LABO05_C_MCRM_PB_CHRONO_H
#define LABO05_C_MCRM_PB_CHRONO_H

#include <ctime>
#include <cassert>

//-----------------------------------------------------------
// Subprogram name: chronoStart()
//-----------------------------------------------------------
// Description: Take the actual time and set a flag (isChronoStarted)
// to true to specify that the chrono is currently started.
//
// Parameters: -
//
// Return: -
//-----------------------------------------------------------
void chronoStart();

//-----------------------------------------------------------
// Subprogram name: chronoStop()
//-----------------------------------------------------------
// Description: If the chrono hasn't been started yet we return
// 0 (as a real life chronometer) else we set the flag
// (isChronoStarted) to false and we return the time difference.
//
// Parameters: -
//
// Return: The time difference (type double)
//-----------------------------------------------------------
double chronoStop();

#endif //LABO05_C_MCRM_PB_CHRONO_H
