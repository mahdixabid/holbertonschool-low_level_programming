/**
* set_bit - Sets the value of a bit to 1 at a given index.
* @n: Number to Modify.
* @index: Index of the bit to be set to 1.
* Return: 1 if success, -1 if not.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n |= 1 << index;
	return (1);
}
