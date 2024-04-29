# Abstract Algebra and Number Theory

## Topics Included:

- [Division Algorithm](#division-algorithm)
- [Euclidean](#euclidean-algorithm)
- [Extended Euclidean](#euclidean-algorithm)
- [Modular Arithmetic](#modular-arithmetic)
- [Groups, Fields, Rings, Finite Fields](<(#abstract-math)>)
- Polynomial Arithmetic
- [Prime Numbers](#prime-numbers)
- [Fermat and Euler](#fermats-little-theorem)
- [Chinese Remainder](#chinese-remainder) -[ Discrete logarithm](#discrete-log)

### Division Algorithm

### Modular Arithmetic

Congruence (&#8801;) : 20 &#8801; 8 Mod 12 in a clock

1. (a mod n + b mod n) mod n = (a+b) mod n
1. (a mod n x b mod n) mod n = (axb) mod n

etc.

<b>Modular Exponentiation </b> </br>
(242)^329 mod 243 &#8801; (-1)^329 mod 243 &#8801; 242 mod 243

### Prime Numbers

#### Fermat's Little Theorem

#### Primitive Roots

A number '&alpha;' is a primitive root modulo n if every number coprime to n is congruent to a power of '&alpha;' modulo n.
<br>

Eg.

- 2 a prim root of 5
- 2 mod 5 &equiv; 2
- 4 mod 5 &equiv; 4
- 8 mod 5 &equiv; 3
- 16 mod 5 &equiv; 1

All are distinct, therefore 2 is a prim root of 5.

### Euclidean Algorithm

Divisors, Common Divisors and Greatest Common Divisor

q = a/b + r with a= b and b = r, until b = 0

#### Relatively Prime Numbers

If GCD(a,b) = 1

#### Euler's Totient Function

&phi;(n) : number of positive integers less than n that are relatively prime to n

Eg. &phi;(5) : <br>
n = 5 => 1,2,3,4 <br>
GCD(1,5) = 1 <br>
GCD(2,5) = 1 <br>
GCD(3,5) = 1 <br>
GCD(4,5) = 1 <br>
therefore &phi;(5) = 4 <br>

Formulae: <br>
n prime => &phi;(n)=n-1 <br>
n = pxq and p,q are prime => &phi;(n)=(p-1)x(q-1) <br>
p and q are composite => &phi;(n)=n x (1-1/p1)x(1-1/p2)x....

#### Euler's Theorem

if a and n are relatively prime, then a^&phi;(n) &equiv; 1 mod n

### Multiplicative Inverse

A^-1 x A = 1 <br>

### Extended Euclidean

### Chinese Remainder

### Discrete Log

### Abstract Math
