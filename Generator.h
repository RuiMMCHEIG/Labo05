/*
  ---------------------------------------------------------------------------
  File            : Generator.h
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 11.11.2021
  Description     : Value generator

  Comment(s)      :

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef LABO05_C_MCRM_PB_GENERATOR_H
#define LABO05_C_MCRM_PB_GENERATOR_H

#include <cstdlib>
#include <time.h>

/*
Name        letterGenerator
Goal        Generates a random letter
Param       lowercase         false   => generates uppercase letter
                              true    => generates lowercase letter
Return      The letter generated
Exception   n/a
*/
char letterGenerator(bool lowercase);

#endif //LABO05_C_MCRM_PB_GENERATOR_H
