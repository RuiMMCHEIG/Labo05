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
#include <iomanip>
#include "Chrono.h"
#include "Generator.h."
#include "inputs.h"

using namespace std;

int main() {

   //Variables and constants declaration
   const unsigned MIN_RETRY            =  1,
                  MAX_RETRY            =  10,
                  DISPLAY_SPACING      =  26;

   const int      PRECISION            =  0,
                  FINER_PRECISION      =  3;

   string         dunningMessage       =  "How many dunning ",
                  reflexInputMessage   =  "Letter : ",
                  rematchMessage       =  "Would you like to replay : [y|n]";

   unsigned       dunningNumber,
                  correctInputCounter;

   char           letterGenerated,
                  letterTyped,
                  rematch;

   double         elapsedTime;

   //User Message
   cout  << "This program tests your typing speed" << endl;

   //Game loop
   do{
      //Reset counter
      correctInputCounter  =  0;

      //Dunning input
      dunningNumber = getUnsigned(dunningMessage, MIN_RETRY, MAX_RETRY);
      chronoStart();

      //Reflex input loop
      for(unsigned dunning = dunningNumber; dunning > 0; --dunning){
         letterGenerated   =  letterGenerator(true);
         letterTyped       =  getChar((reflexInputMessage + letterGenerated));

         if(letterTyped == letterGenerated){
            ++correctInputCounter;
         }
      }

      elapsedTime =  chronoStop();

      //Display results
      cout  << setprecision(PRECISION) << fixed << endl  << endl
            << setw(DISPLAY_SPACING)         << left
            << "Number of correct answers"   << ": "  << correctInputCounter  << endl
            << setw(DISPLAY_SPACING)         << left
            << "Elapsed time"                << ": "  << elapsedTime          << endl
            << setprecision(FINER_PRECISION) << fixed
            << " => "   << (elapsedTime / (double) dunningNumber)
            << " sec per letter" << endl  << endl;

      //Asks the user if he wants to rematch
      do{
         rematch  =  getChar(rematchMessage);
      }while(rematch != 'y' && rematch != 'n');

   }while(rematch == 'y');

   return EXIT_SUCCESS;
}