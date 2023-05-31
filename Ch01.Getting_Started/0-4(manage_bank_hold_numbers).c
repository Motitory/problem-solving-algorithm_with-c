// Queue : FIFO
// Stack : LIFO

// Q. Creating a queue with an array
// Write a program to manage the waiting list at a bank.
// If a queue number (a natural number) is entered, store it in the queue. 
// If 0 is entered, fetch the longest waiting number from the queue and print it (the teller will do the work).
// If a number less than zero is entered, enter the program.
// Prints "queue empty!" if the queue is empty when 0 is entered, or "queue full!" if the array is full and no more can be added.
// Write a program to manage waiting numbers using an array of size 8.

// A. Store the waiting numbers consecutively in an array.
// Use the variable head to indicate the location of the first waiting number in the array, and the variable tail to indicate the location of the last waiting number.

// [code 0-9]
#define QUEUE_CAPACITY 8

int queue[QUEUE_CAPACITY];
int head = 0;
int tail = -1;
int queue_size = 0;

void enqueue(int n)
{
	if (queue_size == QUEUE_CAPACITY)
	{
		printf("queue full!\n");
		return;
	}

	tail++;
	queue_size++;
	queue[tail] = n;
}

int dequeue()
{
	int r;

	if (queue_size == 0)
	{
		printf("queue empty!\n");
		return -1;
	}

	r = queue[head];
	head++;
	queue_size--;

	return r;
}

int main()
{
	int number, r;

	do {
		printf("input number: ");
		scanf("%d", &number);

		if (number > 0) {
			enqueue(number);
		}
		else if (number == 0) {
			r = dequeue();
			printf("[%d]\n", r);
		}
	} while (number >= 0);
	return 0;
}

// ===============================================================================================================================================

// Q. Create a circular queue
// At this point in the process, even if the first part of the array is empty, we can't use it.
// One way to solve this is to move all elements of the array forward by one space for each dequeue() function (using the left_rotate() function created in the "0.3 Array Rotation" thought experiment).
// However, this is inefficient because it takes O(n) time to move n elements.
// Another way is to use a circular queue.

// A. Store the number to the end of the array, then store the number from the beginning of the array again.
// As before, head and tail refer to the first and last elements, where tail can be smaller than head.

// [code 0-10]
#define QUEUE_CAPACITY 8

void enqueue(int n)
{
	if (queue_size == QUEUE_CAPACITY)
	{
		printf("queue full!\n");
		return;
	}

	tail = (tail + 1) % QUEUE_CAPACITY;
	queue_size++;
	queue[tail] = n;
}

int dequeue()
{
	int r;

	if (queue_size == 0)
	{
		printf("queue empty!\n");
		return 0;
	}

	r = queue[head];
	head = (head + 1) % QUEUE_CAPACITY;
	queue_size--;
	return r;
}

// ===============================================================================================================================================

// Think about it: build a stack using an array.
#define STACK_CAPACITY 8

int stack[STACK_CAPACITY];
int top = -1;
int stack_size = 0;

void enstack(int n)
{
	if (stack_size == STACK_CAPACITY)
	{
		printf("stack full!\n");
		return;
	}

	top++;
	stack_size++;
	stack[top] = n;
}

int destack()
{
	int r;

	if (stack_size == 0)
	{
		printf("stack empty!\n");
		return 0;
	}

	r = stack[top];
	top--;
	stack_size--;
	return r;
}

int main()
{
	int number, r;

	do {
		printf("input number: ");
		scanf("%d", &number);

		if (number > 0) {
			enstack(number);
		}
		else if (number == 0) {
			r = destack();
			printf("[%d]\n", r);
		}
	} while (number >= 0);
	return 0;
}

// ===============================================================================================================================================

// Challenge: Modify your queue to handle common data types.
