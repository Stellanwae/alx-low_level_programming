#include stdio.h
#include search_algos.h

/**
* a linear search - looks for value in an array
* @array: pointer for the 1st element of array
* @value: the value
*
* Return: 
*/
int linear_search(int *array, size_t size, int value)
{
  size_t j;i
  
	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
