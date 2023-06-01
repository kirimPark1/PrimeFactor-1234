#include "pch.h"
#include "../primeFactors/PrimeFactor.cpp"

using namespace std;
TEST(TestCaseName, of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
TEST(TestCaseName, of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}