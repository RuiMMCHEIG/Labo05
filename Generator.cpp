/*
  ---------------------------------------------------------------------------
  File            : Generator.cpp
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 11.11.2021
  Description     : Value generator

  Comment(s)      : The " warning: conversion from 'time_t' {aka 'long long int'}
                    to 'unsigned int' " isn't very important because we just need
                    any integer number for the seed of the pseudorandom number
                    generator

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include "Generator.h"

//Generates a random letter
char letterGenerator(bool lowercase){
   //Initialized only the first time letterGenerator is called
   static bool isRandInitialize;
   if(!isRandInitialize){
      srand(time(NULL));
      isRandInitialize = true;
   }

   char letterGenerated = lowercase ?  char('a' + rand() % 26) :
                                       char('A' + rand() % 26);

   return letterGenerated;
}