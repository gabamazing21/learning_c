#include <stdio.h>
#include <stdbool.h>
// A compare function used to seach for integer array

bool compare(const void * a, const void * b)
{
	return (*(int *)a == *(int*)b);
}

// General purpose search () function that can be used 
// for searching an element *x in an array arr[] of
// arr_size . Note that void pointers are used so that
// the function can be called by passing a pointer of
// any type. ele_size is size of any array element
int search (void *arr, int arr_size, int el_size, void *x,
		bool compare (const void *, const void *))
{
	// since char takes one byte, we can use char pointer
	// for any type/ To get pointer arithmetic correct,
	// we need to multiply index with size of an array
	// element ele_size
	char *ptr = (char *)arr;

	int i;
	for (i = 0; i < arr_size; i++)
		if (compare(ptr + i*el_size, x))
				return (i);
	//if element found
	return (-1);
}

int main()
{
	int arr[] = {2, 5, 7, 90, 70};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 7;
	printf("Returned index is %d ", search (arr, n,
				sizeof(int), &x, compare));
	return (0);
}
