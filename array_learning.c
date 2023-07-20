/*	arrDemo1

	- uses prototypes
	- various forms of declaring arrays
	- passing arrays to functions

	- TO COMPILE:  gcc -ansi -pedantic -W -Wall  arrDemo1.c  -o arrDemo1
	- TO EXECUTE:  ./arrDemo1
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swapInts( int *i, int *j );
void printInts( int i, int j );
void initArray( int arr[], int arrCap, int factor);
void swapArrays( int a[], int aCnt, int b[], int bCnt );
void printArray( int arr[], int arrcnt );

/*........................M A I N    F U N C T I O N........................ */

int main() /* no argc or argv since this demo does not expect cmd line values */
{

	/* Remember: variables must be declared before you write code */

	int a[] = { 2,3,5,7,11 }; /* these values can be modified. They are not constants */
	int aCnt, aCap;
	int b[] = { 4,6,8,12, 16 };
	int bCnt, bCap;
	int c[10], cCnt=0, cCap;
	cCnt=cCap=10;
	aCnt = aCap = bCnt = bCap = 5;

	/* Declarations are done. Now we can write code */

	initArray( c, cCap, 3);

	printf("\nBefore swapArrays:\n" );
	printArray( a, aCnt ); /* we pass just the array's name. No []s */
	printArray( b, bCnt );

	swapArrays( a, aCnt, b, bCnt ); /* Note we don't use & before the array's name. We use the name as if it is a pointer */

	printf("\nAfter swapArrays:\n" );
	printArray( a, aCnt );
	printArray( b, bCnt );

	printf("\nEnter a value for c[0]  ");
	scanf( "%d",c);
	printf("c[0]: %d,\n", c[0]);

	return 0;
}

/*
	SWAPINTS: uses pointers to exchange values of incoming args
*/
void swapInts( int *i, int *j )
{
	int temp = *i;
	*i = *j;
	*j = temp;
}
/*
	PRINT: takes copy args - no need to modify args
*/
void printInts( int i, int j )
{
	printf("1st arg: %d  2nd arg: %d\n", i, j);
}

void initArray( int arr[], int arrCap, int factor)
{
	int i;
	for (i=0 ; i<arrCap ; ++i )
		arr[i] = i*factor;
}

void swapArrays( int a[], int aCnt, int b[], int bCnt )
{
	int i;
	if (aCnt != bCnt )
		return; /* don't try to swap diff sized arrays */
	for (i=0 ; i < aCnt ; ++i)
		swapInts( &a[i], &b[i] ); /* RE-USE working code since array elements are int variables */
}

void printArray( int arr[], int arrCnt )
{
	int i;
	for (i=0 ; i < arrCnt ; ++i)
		printf( "%3d ", arr[i] );
	printf("\n");
}
