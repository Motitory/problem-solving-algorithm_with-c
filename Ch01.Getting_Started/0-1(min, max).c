// [code 0-1]
int min (int x, int y)
{
	if (x < y)
		return x;

	return y;
}

int max (int x, int y)
{
	if (x > y)
		return x;

	return y;
}

// ===============================================================================================================================================

// Q. Create a function max_arr() that returns the largest value in an integer array.
// [code 0-2]
int max_arr(int arr[], int arr_len)
{
	int maxa;

	maxa = arr[0];
	for (int i = 1; i < arr_len; i++)
		if (arr[i] > maxa)
			maxa = arr[i];

	return maxa;
}

// ===============================================================================================================================================

// macro function
// [code 0-3]
#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))

// Unlike regular functions, macro functions change the code itself before compilation.
// Therefore, there is a high possibility of making mistakes in the process of changing the code.
// In this case, max(3, 2) is replaced with ((3) > (2) ? (3) : (2)) before compilation.
// If you define it without the outer parenthesis ()
#define max2 (x, y) (x) > (y) ? (x) : (y)

// "2 * max2 (3, 2)" = "2 * (3) > (2) ? (3) : (2)" = 6 > 2 : 3 : 2 => result = 3

int i, j;
i = 4;
j = max2(3, i++);
// If max() is a normal function, the result is i = 5, j = 4.
// But, If In this case it changes j = ((3) > (i++) ? (3) : (i++)) before compilation.
// So, i = 6, j = 5

// With the development of C/C++, this seems to have become unusable, but even more caution is needed when declaring and using macro functions.

// ===============================================================================================================================================

// [code 0-4]
int max_arr2(int arr[], int arr_len)
{
	if (arr_len == 1)
		return arr[0];
	else
		return max(arr[arr_len - 1], max_arr2(arr, arr_len - 1));
}

// max_arr2() is a problem-free recursive function. 
// However, if max() is a macro function of code 0-3, and the factor array is a monotonically decreasing sequence, the problem arises.

// Using macro functions is good that there is no time (though it is a very short time) to call the function, 
// but if you do something wrong, you get a bug that is hard to find. 
// Therefore, if there is no particular reason, let's write the code with a normal function.






