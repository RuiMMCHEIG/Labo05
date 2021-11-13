/*
  ---------------------------------------------------------------------------
  File            : Chrono.h
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 09.11.2021
  Description     : Chronometer

  Comment(s)      :

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef LABO05_C_MCRM_PB_CHRONO_H
#define LABO05_C_MCRM_PB_CHRONO_H

#include <ctime>
#include <cassert>

/*
Name        chronoStart
Goal        Take the actual time and specify that the chrono is started
Param       n/a
Return      n/a
Exception   n/a
*/
void chronoStart();

/*
Name        chronoStop
Goal        Stops the chrono and returns the time difference
Param       n/a
Return      The time difference
Exception   n/a
*/
double chronoStop();

#endif //LABO05_C_MCRM_PB_CHRONO_H
