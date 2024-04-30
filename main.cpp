#include <iostream>
#include <math.h>
#include "lib/usefulstuff.h"

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
    // int a = 33;
    // int b = 12;
    // int gcd = findGCD(a, b);
    // printf("GCD is %d \n", gcd);

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    // printf("Multiplicative Inverse is %d \n", findMI(a, b));

    printf("");

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