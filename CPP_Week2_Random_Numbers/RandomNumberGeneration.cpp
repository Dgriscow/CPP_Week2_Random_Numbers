#include "RandomNumberGeneration.h"
#include <cstdlib> //used for Rand(), 
#include <iostream>
#include <ctime> //used to make time() work
#include <cmath> //math library
using namespace std;


void RandomNumberGeneration::generateRandomNumbers()
{
	int number;


	int maxValue = 1000;
	int minValue = 100;
	
	//sRand sets the seed for the random number generator, so in order to get new numbers every time, use the CURRENT TIME as the seed
	srand(time(0));
					//using Mod, this is the formula you would get to generate a random number between a MAX value and a MINIMUM 
	//number = rand() % (maxValue - minValue + 1) + minValue;
	for (int i = 0; i < 20; i++) {
		number = rand() % (maxValue - minValue + 1) + minValue;

		cout << "Random Number " << i + 1<< ": " << number <<"\n";


	}
	

	


}