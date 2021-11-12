/*
  ---------------------------------------------------------------------------
  File            : Generator.h
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 11.11.2021
  Description     : Header file with every prototype of the Generator.cpp file

  Comment(s)      : -

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef LABO05_C_MCRM_PB_GENERATOR_H
#define LABO05_C_MCRM_PB_GENERATOR_H

#include <cstdlib>
#include <time.h>

//----------------------------------------------------------------------------
// Subprogram name: letterGenerator()
//----------------------------------------------------------------------------
// Description :  Generate a random lowercase or uppercase letter
//
// Parameters  :  lowercase = false   => generate uppercase letter
//                lowercase = true    => generate lowercase letter
//
// Return      :  The letter generated
//----------------------------------------------------------------------------
char letterGenerator(bool lowercase);

#endif //LABO05_C_MCRM_PB_GENERATOR_H
