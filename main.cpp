#include <iostream>
#include <math.h>
// #include 'lib/useful.h'

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
    // Implementing modular exponentiation for efficiency
    int res = 1;
    for (int i = 0; i < p - 1; i++)
    {
        res = (res * a) % p;
    }
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

int main(int argc, char *argv[])
{

    /*Unit 1 stuff*/
    // Fermat's theorem: a^(p-1)mod p congruent to 1
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <number>\n";
        return 1;
    }

    int number = std::atoi(argv[1]);

    bool primecheck = IsPrime(2, number);
    // Chinese remainder theorem

    // Euclid's GCD

    // Quadratic Residues

    // Legendre and Jacobi Symbols
}