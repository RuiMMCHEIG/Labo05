/*
  ---------------------------------------------------------------------------
  File            : Chrono.cpp
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 09.11.2021
  Description     : Cpp file with all the definitions of the subprograms used
                    for a chronometer.

  Comment(s)      : -

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include "Chrono.h"

using namespace std;

//-----------------------------------------------------------
// Globale variable and constants declaration
//-----------------------------------------------------------

bool     isChronoStarted;

time_t   timeStart;

//-----------------------------------------------------------
// Subprogram chronoStart()
//-----------------------------------------------------------

void chronoStart(){
   time(&timeStart);
   isChronoStarted = true;
}

//-----------------------------------------------------------
// Subprogram chronoStop()
//-----------------------------------------------------------

double chronoStop(){
   assert(isChronoStarted);

   isChronoStarted = false;
   return difftime(time(nullptr), timeStart);
}