// Problem 2

// Each new term in the Fibonacci sequence is generated by adding the previous 
// two terms. By starting with 1 and 2, the first 10 terms will be:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not 
// exceed four million, find the sum of the even-valued terms.

// Solution

#include <iostream>

void next_fib(int& a, int& b, int&c )
{
    c = a + b;
    a = b;
    b = c;
}

int main(void)
{
    int a = 0, b =1, c = 0;
    int count = 0;

    while ( c < 4000000 )
    {
        if ( c % 2 == 0 ) { count += c; }
        next_fib(a,b,c);
    }

    std::cout << count << std::endl;

    return 0;
}

// END
