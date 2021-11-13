/*
  ---------------------------------------------------------------------------
  File            : Chrono.cpp
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 09.11.2021
  Description     : Chronometer

  Comment(s)      :

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include "Chrono.h"

//Global variables
bool     isChronoStarted;

time_t   timeStart;

//Start a chronometer
void chronoStart(){
   time(&timeStart);
   isChronoStarted = true;
}

//Stop the chronometer
double chronoStop(){
   assert(isChronoStarted); //Sends an error if no chronometer has been started

   isChronoStarted = false;
   return difftime(time(nullptr), timeStart);
}