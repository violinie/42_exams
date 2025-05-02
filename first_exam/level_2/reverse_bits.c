/*Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
     ||
     \/
 0110  0100*/

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	reverse = 0;
	int	bit = 8;
	while (bit--)
	{
		reverse <<= 1; // 0000 0000 move on space to the left -> 0000 0000 -> 0000 0000 -> 0000 0010
		reverse |= (octet & 1); // copy the rightmost bit from octet into reverse
		octet >>= 1; // 0010 0110 move one space to the right -> 0001 0011 -> 0000 1001
	}
	return reverse;
}

int	main(void)
{
	printf("%d", reverse_bits(38));
	return(0);
}
