#include <iostream>
#include "usefulstuff.h"

using namespace std;

int power(long long x, unsigned int y, int p)
{
    int res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        std::cout << res << "\n";
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Using Fermat's little theorem to find if a number is a prime number
bool IsPrime(int a, int p)
{
    printf("Checking if %d is prime or not...", p);

    // int i = pow(a, p - 1);
    // if (i % p != 1)
    // {
    //     printf("prime toh nahi hain");
    //     return false;
    // }

    if (p <= 1)
    {
        std::cout << "Invalid input. ";
        return false;
    }

    int res = power(a, p - 1, p);

    if (res == 1)
    {
        std::cout << "Prime.\n";
        return true;
    }
    else
    {
        std::cout << "Composite.\n";
        return false;
    }
}

int findGCD(int a, int b)
{

    // checking a > b
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    /*
        // having q and r and beginning iteration until b = 0

        int q = 0;
        int r = 0;

        while (b != 0)
        {
            q = a / b;
            r = a % b;
            a = b;
            b = r;
            printf(" %d %d %d %d \n", q, a, b, r);
        }

        return a;
    */

    if (b == 0)
        return a;
    else
        return (findGCD(b, a % b));
}

bool isRelativelyPrime(int a, int b)
{

    if (findGCD(a, b) == 1)
        return true;
    else
        return false;
}

/*Finding the number of positive integers less than n that are relatively prime to n
(Traditional Approach Commented)
*/
int eulerTotient(int n)
{

    int phi = 0;
    for (int i = 1; i < n; i++)
    {
        if (isRelativelyPrime(i, n))
            phi++;
    }

    return phi;
}

// Finds Primitivity throught Totient function
int IsPrimeEuler(int p)
{
    return 0;
}

// Finds if a is primitive root of p
bool isPrimRoot(int a, int p)
{
    return false;
}
