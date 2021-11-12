/*
  ---------------------------------------------------------------------------
  File            : Generator.cpp
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 11.11.2021
  Description     : Cpp file with the subprogram who allow to generate a
                    lowercase or uppercase letter.

  Comment(s)      :  We possibly can add other type of generator in the futur
                     (special character, number, etc...)

                     The " warning: conversion from 'time_t' {aka 'long long int'}
                     to 'unsigned int' " isn't very important because we just want
                     any integer number for the seed of the pseudorandom number
                     generator

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include "Generator.h"

//Generate a random letter
char letterGenerator(bool lowercase){
   //Initialized only the first time when letterGenerator is call
   static bool isRandInitialize;
   if(!isRandInitialize){
      srand(time(NULL));
      isRandInitialize = true;
   }

   char letterGenerated = lowercase ?  char('a' + rand() % 26) :
                                       char('A' + rand() % 26);

   return letterGenerated;
}