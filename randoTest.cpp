/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, numberDivisble)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(5,5) );
	ASSERT_TRUE( rando.isDivisbleBy(2,2) );
	ASSERT_TRUE( rando.isDivisbleBy(4,2) );
	ASSERT_TRUE( rando.isDivisbleBy(3,6) );
	ASSERT_FALSE( rando.isDivisbleBy(5,7) );  
        ASSERT_TRUE( rando.isDivisbleBy(7, 0)); 
 
}

TEST(RandoTest, numberPrime)
{
	Rando rando; 
	ASSERT_FALSE( rando.isPrime(0) );
	ASSERT_TRUE( rando.isPrime(2) );
	ASSERT_TRUE( rando.isPrime(5) );
	ASSERT_TRUE( rando.isPrime(7) );
	ASSERT_FALSE( rando.isPrime(8) );
}
TEST(RandoTest,nearestToZero)
{
	Rando rando; 
	ASSERT_TRUE( rando.nearestToZero(0, 7) );
	ASSERT_TRUE( rando.nearestToZero(7, 7) );
	ASSERT_TRUE( rando.nearestToZero(8, -7) );
	ASSERT_TRUE( rando.nearestToZero(1, 5) );
	ASSERT_TRUE( rando.nearestToZero(2, 3) );
	ASSERT_TRUE( rando.nearestToZero(10, 1) );
}
