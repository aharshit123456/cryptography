

struct crteqn
{
    int a;
    int m;
};

// Math functions
int power(long long x, unsigned int y, int p);
bool IsPrime(int a, int p);
int findGCD(int a, int b);
bool isRelativelyPrime(int a, int b);
int eulerTotient(int n);
int IsPrimeEuler(int p);
bool isPrimRoot(int a, int p);
int findMI(int a, int n);

// Classical Encryption Ciphers

char *caesar_cipher(const char *plaintext, int key, int mode);
char *monoalph_cipher(char *text, int mode);
char *playfair_cipher(char *plaintext, int key);
char *hill_cipher(char *plaintext, int key);
char *vigenere_cipher(char *plaintext, int key);
char *vernam_cipher(char *plaintext, int key);

/// @brief one time pad (modified vernam cipher)
/// @param text plaintext or ciphertext
/// @param key key used
/// @param mode 1 for encryption 2 for decryption
/// @return resulted text
char *OTP(const char *text, int key, int mode);

/// @brief linear congruential generator
/// @param a
/// @param c
/// @param m
/// @param seed
/// @return
int LCG(int a, int c, int m, unsigned int seed);
