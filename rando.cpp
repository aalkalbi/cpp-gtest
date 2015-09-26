#include "rando.h"
//#include <stdlib.h>


/**
 * Worry if only one child is smiling or if all children are smiling
**/
bool Rando::shouldWorry(bool childASmile, bool childBSmile, bool childCSmile)
{
	if( childASmile && childBSmile && childCSmile )
		return true;
	else if( childASmile ^ childBSmile ^ childCSmile )
		return true;
	else
		return false;
}
/**
 * Determines if first or second are evenly divisible by the other.
**/
bool Rando::isDivisbleBy(int first, int second)
{
	if (second == 0 && first == 0) // if both 0, divide by zero failure
		return false;
	if ( (second == 0 && first!= 0) || (first == 0 && second != 0) ) // if only one zero, then divisibilty has to be true ( 0 divided by any non zero is true)
		return true;
	if (first%second == 0 || second%first==0) // if first is divisible by second OR second is divisible by first
		return true;
	else
		return false;
}

/**
 * Given a number, num, says whether or not that number is prime
 * (that is, only evenly divisible by itself and 1. For the sake
 * of this function, do NOT consider 0 prime)
**/
bool Rando::isPrime(int num)
{
	if (num<=1) // 0, 1 are not prime
		return false;

	for (int i=2; i<num; i++)
	{
		if (num%i == 0) // if we find an "i" number which divides "num", so "i" is another factor of "num" hence, it is not prime
			return false;
	}

	return true; // if no other factor found, then the number is prime
}

/**
 * Given two numbers, first and second, return the value of the one
 * that is closest to zero without actually being zero.
**/
int Rando::nearestToZero(int a, int b)
{
	if (a==0)
		return b;
	if (b==0)
		return a;

	int absa, absb; // get absolute values

	if (a<0)
		absa = -1 * a;
	else
		absa = a;

	if (b<0)
		absb = -1 * b;
	else
		absb = b;

	if ( absa > absb ) // compare on absolute values
		return b;
	else
		return a;
}
