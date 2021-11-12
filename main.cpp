/*
  ---------------------------------------------------------------------------
  File            : main.cpp
  Laboratory name : Labo_05_Chrono
  Author(s)       : Rui Carneiro & Bastien Pillonel
  Creation date   : 09.11.2021
  Description     : This program asks how many letters he needs to generate.
                    Then it display randoms letters one by one and the goal is,
                    for the user, to retype as fast as possible the same letter.
                    At the end of the game, the program display the number of
                    letters correctly typed, the total elapsed time (in sec)
                    and the average time per letter.

  Comment(s)      : Create subprogramms which are logically distributed and as
                    reusable as possible.
                    The main program represent the analyse part only.

  Compiler        : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include "Chrono.h"
#include "Generator.h."

using namespace std;

int main() {

   // Variables and constants declaration
   const int      MIN_RETRY      = 1,
                  MAX_RETRY      = 10;

   int            dunningNumber;

   char           letterGenerated,
                  letterTyped,
                  rematch;

   const string   dunningMessage = "How many dunning ";

   // User Message
   cout  << "This program tests your typing speed" << endl;

   // Game loop
   do{

   }while(rematch == 'y');

   return EXIT_SUCCESS;
}