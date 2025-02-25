#include <stdio.h>
#include <stdlib.h>

// Bit manipulation

/*
 Decimal to binary

 Method 1: Division Method
 Divide the decimal number by 2.
 Write down the remainder (0 or 1).
 Divide the quotient again by 2.
 Repeat until the quotient is 0.
 The binary number is the remainders read in reverse order.
 Example:
 25 % 2 = 12, remainder = 1
 12 % 2 = 6, remainder = 0
 6 % 2 = 3, remainder = 0
 3 % 2 = 1, remainder = 1
 1 % 2 = 0, remainder = 1

 For negative numbers:
 25 in binary is 11001
 Determine the Bit Width:
  Choose a bit width that accommodates the number and includes a sign bit.
  Common choices are 8, 16, or 32 bits. Here, we'll use 8 bits. Pad the binary
  representation of 25 with leading zeros to fit 8 bits: 00011001.

  Find the Two's Complement:

  Invert the Bits (One's Complement):
    Flip all bits of 00011001:
    00011001 → 11100110
    Add 1 to the Inverted Bits:
    11100110 + 1 = 11100111

Therefore, the 8-bit two's complement representation of -25 is 11100111.
*/

/*
 Binary to Decimal

 Method 1: Positional Notation
 Each binary digit represents a power of 2:
 Binary 11001 → 1×2(4) + 1×2(3) + 0×2(2) + 0×2(1) + 1×2(0) = 16+8+0+0+1=25
*/

/*
 Bitwise

 & AND : Performs a logical AND on each pair of corresponding bits of two
 numbers. The result bit is 1 only if both corresponding bits are 1; otherwise,
 it's 0.

 | OR : Operation: Performs a logical OR on each pair of corresponding bits. The
 result bit is 1 if at least one of the corresponding bits is 1; otherwise, it's
 0.

 ^ XOR : Performs a logical exclusive OR on each pair of corresponding bits. The
 result bit is 1 if the corresponding bits are different; otherwise, it's 0.

 ~ NOT : A unary operator that inverts all the bits of its operand, turning 1s
 into 0s and vice versa.
*/

int main(int argc, char *argv[]) {
  short int w1 = 25;
  short int w2 = 77;
  short int w3 = 0;

  // logical
  w3 = w1 & w2;
  printf("%d\n", w3);

  w3 = w1 | w2;
  printf("%d\n", w3);

  w3 = w1 ^ w2;
  printf("%d\n", w3);

  w3 = ~(w1);
  printf("%d\n", w3);

  // shifting
  // for each position equates to a 2. ie : 1=2, 2=4, 3=6...
  int w4 = 138 << 2;
  printf("%d\n", w4);

  w4 = 138 >> 2; // same here 1=2, 2=4, 3=6
  printf("%d\n", w4);

  // bit fields, efficient memory usage
  struct packed {
    unsigned int : 3;
    unsigned int f1 : 1;
    unsigned int f2 : 1;
    unsigned int f3 : 1;
    unsigned int type : 8;
    unsigned int index : 18;
  };

  struct packed packed_data;
  packed_data.type = 7;

  return EXIT_SUCCESS;
}
