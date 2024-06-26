#include <iostream>
#include "usefulstuff.h"
#include <vector>
#include <cstring>

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

int findMI(int a, int n)
{
    if (a < n)
    {
        a = a % n;
    }

    int b = a;
    int k = n;
    int q = 1;
    int r = 1;
    int t1 = 0;
    int t2 = 1, t;
    while (b != 0)
    {
        q = k / b;
        r = k % b;
        t = t1 - t2 * q;
        printf("%d %d %d %d %d %d %d \n", q, k, b, r, t1, t2, t);

        k = b;
        b = r;
        t1 = t2;
        t2 = t;
    }

    if (t1 < 0)
        return (n + t1);
    return t1;
}

char *caesar_cipher(const char *text, int key, int mode)
{
    char *result = (char *)malloc((strlen(text) + 1) * sizeof(char));

    if (mode == 1)
    {

        char ch;

        for (int i = 0; text[i] != '\0'; i++)
        {
            ch = text[i];
            // Check for valid characters.
            if (isalnum(ch))
            {

                // Lowercase characters.
                if (islower(ch))
                {
                    ch = (ch - 'a' + key) % 26 + 'a';
                }
                // Uppercase characters.
                if (isupper(ch))
                {
                    ch = (ch - 'A' + key) % 26 + 'A';
                }

                // Numbers.
                if (isdigit(ch))
                {
                    ch = (ch - '0' + key) % 10 + '0';
                }
            }
            // Invalid character.
            else
            {
                printf("Invalid Message");
            }

            // Adding encoded answer.

            result[i] = ch;
        }
        return result;
    }
    else if (mode == 2)
    {
        char ch;

        for (int i = 0; text[i] != '\0'; i++)
        {
            ch = text[i];
            // Check for valid characters.
            if (isalnum(ch))
            {

                // Lowercase characters.
                if (islower(ch))
                {
                    ch = (ch - 'a' - key) % 26 + 'a';
                }
                // Uppercase characters.
                if (isupper(ch))
                {
                    ch = (ch - 'A' - key) % 26 + 'A';
                }

                // Numbers.
                if (isdigit(ch))
                {
                    ch = (ch - '0' - key) % 10 + '0';
                }
            }
            // Invalid character.
            else
            {
                printf("Invalid Message");
            }

            // Adding encoded answer.
            result[i] = ch;
        }

        result[strlen(text)] = '\0';

        return result;
    }
}

char *monoalph_cipher(char *text, int mode)
{
    return nullptr;
}

char *playfair_cipher(char *plaintext, int key)
{
    return nullptr;
}

char *hill_cipher(char *plaintext, int key)
{
    return nullptr;
}

char *vigenere_cipher(char *plaintext, int key)
{
    return nullptr;
}

char *vernam_cipher(char *plaintext, int key)
{
    return nullptr;
}

char *OTP(const char *text, int key, int mode)
{
    return nullptr;
}

int LCG(int a, int c, int m, unsigned int seed)
{
    seed = (a * seed * c) % m;
    return seed;
}
