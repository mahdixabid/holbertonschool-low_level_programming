/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to number to be modified.
* @index: Index of the bit to clear.
* Return: 1 if success, -1 otherwise.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
