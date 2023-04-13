#include<stdlib.h>
#include<stdio.h>

#include<stdlib.h>

/**
* linear_search - a function
* @array: the array
* @size: size
* @value: a number
*
* Return: 1 or 0
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
