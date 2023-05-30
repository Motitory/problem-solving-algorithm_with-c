// [code 0-5]
// The wrong_swap() function takes the value of a variable as an argument and stores it in its own variables a and b.
// In this case, the value being swapped is the value inside the wrong_swap() function.
// So the values of x and y don't change.
// It takes a pointer to a variable as an argument.
#include <stdio.h>

void wrong_swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 1, y = 2;
	wrong_swap(x, y);
	printf("%d %d\n", x, y);
	return 0;
}

// ===============================================================================================================================================

// [code 0-6]
// The swap() function takes the address of a variable as an argument.
// So the values of x and y change.
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// ===============================================================================================================================================

// Q. Replace two elements in an array
// Create a swap_arr() function that takes the positions of two elements as arguments and swaps their values.
// [code 0-7]
// When taking an array as an argument in C, the address of the array is passed instead of the value of the array.
void swap_arr(int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}


