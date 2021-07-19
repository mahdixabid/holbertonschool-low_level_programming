/**
* flip_bits - Gives number of bits you would need to flip to get from n to m.
* @n: First number.
* @m: Second number.
* Return: Count of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	for (; n > 0 || m > 0; n >>= 1, m >>= 1)
		if ((n ^ m) & 1)
			count++;
	return (count);
}
