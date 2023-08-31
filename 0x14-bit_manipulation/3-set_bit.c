/**
 * set_bit - set bit to 1 at index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int t = 1;

        if (index > (sizeof(unsigned long int) * 8))
                return (-1);

        t <<= index;/*shift the value in set left by 1 bit.*/
        /*t <<= index is the same as t = t << index*/

        *n = *n | t;/*bitwise OR operator*/
        return (1);
}
