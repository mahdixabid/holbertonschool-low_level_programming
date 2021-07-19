/**
* get_bit - Gives the value of a bit at a given index.
* @n: Number to evaluate.
* @index: Index to look for.
* Return: Bit at index on number.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n >>= index;
	if (n & 1)
		return (1);
	else
		return (0);
}
