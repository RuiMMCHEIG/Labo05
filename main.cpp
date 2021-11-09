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
#include <cmath>
#include "Chrono.h"

using namespace std;

//-----------------------------------------------------------
// Subprogram name: dunningRequest()
//-----------------------------------------------------------
// Description: display a request message where
// we ask for a number of dunning between a range
// set in parameters.
//
// Parameters: Take 2 integers which are respectively the lower
// and higher limits of the numbers of dunning accepted.
//
// Return: the number of dunning input by the user.
//-----------------------------------------------------------
int dunningRequest(int minRetry, int maxRetry);

int main() {

   //----------------------------------------------
   // Variables and constants declaration
   //----------------------------------------------
   const int   MIN_RETRY      =  1,
               MAX_RETRY      =  10;

   //----------------------------------------------
   // User Message
   //----------------------------------------------
   cout  << "This program tests your typing speed" << endl;

   //----------------------------------------------
   // Dunning request
   //----------------------------------------------
   dunningRequest(MIN_RETRY, MAX_RETRY);

   return EXIT_SUCCESS;
}

int dunningRequest(int minRetry, int maxRetry){
   // The display set automatically the spacing according to the number of digit of
   // the lower and higher limits with log base 10 of the limits => cast to integers
   cout  << "How many dunning ["
         << setw(int(log(minRetry) / log(10)))  << minRetry << ".."
         << setw(int(log(maxRetry) / log(10)))  << maxRetry << "] :";

   return 0;
}


