// Problem 4

// A palindromic number reads the same both ways. The largest palindrome made 
// from the product of two 2-digit numbers is 9009 = 91 x 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

// Solution

// Ugly brute force solution

#include <stdio.h>
#include <iostream>

bool IsPalindrome(int value)
{
    // Convert value to char array...
    char c[10];
    sprintf(c, "%d", value);

    // Calculate length of char array
    int l = 0;
    while( c[l] != 0 ) l++;

    // Check whether the string is a palindrome
    bool isValid = true;
    int h = 0, t = l-1;
    while ( h != t && isValid )
    {   
        if ( c[h] != c[t] ) isValid = false;
        if ( h+1 == t ) break;
        h++; t--;
    }

    return isValid;
}

int main(void)
{
    std::cout << "IsPalindrome( 0 ) = " << ( IsPalindrome(0) ? "TRUE" : "FALSE" ) << std::endl;
    std::cout << "IsPalindrome( 11 ) = " << ( IsPalindrome(11) ? "TRUE" : "FALSE" ) << std::endl;
    std::cout << "IsPalindrome( 123321 ) = " << ( IsPalindrome(123321) ? "TRUE" : "FALSE" ) << std::endl;
    std::cout << "IsPalindrome( 123456 ) = " << ( IsPalindrome(123456) ? "TRUE" : "FALSE" ) << std::endl;

	int maxPalindrome = 0;
	for( int i=999; i>=100; i-- )
	{
		for( int j=999; j>=100; j-- )
		{
			int p = i*j;
			if( IsPalindrome(p) && p > maxPalindrome )
				maxPalindrome = p;
		}
	}

	std::cout << "Max Palindrome = " << maxPalindrome << std::endl;

    return 0;
}

// END
