// Q. Writing the right_rotate() function
// Create a function that rotates a portion of an array to the right by 1.

// [code 0-8]
void right_rotate(int arr[], int s, int t)
{
	int i, last;

	last = arr[t];
	for (i = t; i > s; i--)
		arr[i] = arr[i - 1];
	arr[s] = last;
}

// Q. Writing the left_rotate() function
// Create a function that rotates a portion of an array to the left by 1.
void left_rotate(int arr[], int s, int t)
{
	int i, first;
	for (i = s; i < t; i++)
		arr[i] = arr[i + 1];
	arr[t] = first;
}

// Think about it
// Write a function that takes k as an argument and rotates to the right by k. 
// Rotating to the right by k is equivalent to rotating to the right by 1, repeated k times. This is slow.
// Let's write it to get the result faster.



