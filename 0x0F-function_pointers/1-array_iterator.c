lude "function_pointers.h"

/**
 * array_iterator - executes a function given as a parrameter on array
 * @array: input integer array
 * @size: size of the array
 * @action: pointer to the function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	if (array && action)
		for (t = 0; t < size; t++)
			action(array[t]);
}
