/*
  ---------------------------------------------------------------------------
  File            : Chrono.cpp
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 09.11.2021
  Description     : Cpp file with all the definitions of the subprograms

  Comment(s)      : -

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include "Chrono.h"
#include <ctime>

using namespace std;

//-----------------------------------------------------------
// Globale variable and constants declaration
//-----------------------------------------------------------

time_t timeStart;

bool isChronoStarted = false;

//-----------------------------------------------------------
// Subprogramme chronoStart()
//-----------------------------------------------------------

void chronoStart(){
   time(&timeStart);
   isChronoStarted = true;
}

//-----------------------------------------------------------
// Subprogramme chronoStop()
//-----------------------------------------------------------

double chronoStop(){
   if(!isChronoStarted){
      return 0.;
   }
   else{
      isChronoStarted = false;
      return difftime(time(nullptr), timeStart);
   }
}