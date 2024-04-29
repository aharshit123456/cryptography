#include <iostream>
#include <math.h>
#include "usefulstuff.h"

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

int main(int argc, char *argv[])
{

    /*Unit 1 stuff*/
    // Fermat's theorem: a^(p-1)mod p congruent to 1
    if (argc != 3)
    {
        std::cerr << "Usage: " << argv[0] << " <number> <number>\n";
        return 1;
    }

    // int number = std::atoi(argv[1]);

    // bool primecheck = IsPrime(2, number);
    // Chinese remainder theorem

    // Euclid's GCD
    int a = 33;
    int b = 12;
    int gcd = findGCD(a, b);
    printf("GCD is %d \n", gcd);

    a = std::atoi(argv[1]);
    b = std::atoi(argv[2]);
    printf("GCD is %d \n", findGCD(a, b));

    // Quadratic Residues

    // Legendre and Jacobi Symbols

    /*Unit 2 Stuff*/
    // One time pad

    // Pseudo Random Bit Generator

    // RC4 Stream Cipher Algorithm

    // Attack detection algorithms

    // Chosen Message Attack

    // Chosen Plaintext Attack

    // Chosen Ciphertext Attack

    /*Unit 3 Stuff*/

    // DES

    // AES
}