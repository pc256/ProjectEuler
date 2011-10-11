// Problem 3

// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

// Solution

#include <iostream>
#include <cmath>

int main(void)
{
	double t = 600851475143;

	int k = 2;
    int f = 0;

    // Loop keeps dividing t until it gets to itself (if prime)
	while( t != 1 && t > 0)
	{
        // Is our total a multiple of current k?
		while( fmod(t,(double)k) == 0 )
		{
            f = k;
			t /= k;
		}

		k++;
	}

    std::cout << f << std::endl;

    return 0;
}

// END
