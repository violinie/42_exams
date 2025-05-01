/*Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"*/

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	bit = 8;
	while(bit--)
	{
		if ((octet >> bit) & 1) // shifting octed to the right "bit times" & getting the last one -- is it true ? 1 : 0
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

int	main(void)
{
	print_bits(2);
	return(0);
}
