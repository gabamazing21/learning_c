#include <stdio.h>
#include <stdlib.h>
/**
  * learning linkedlist
  */
typedef struct node *nodePtr;
struct node
{
	int data;
	nodePtr next;
};
typedef struct node node;
int main(int argc, const char * argv[])
{
	/* insert code here */
	nodePtr first = NULL;
	first = malloc (sizeof(node));
	first->next = NULL;
	/** node firstNode; **/
	/* firstNode = *first */
	first->data = 61;

	/* first->next = malloc(sizeof(node));*/
	/* first->next->next = NULL;*/
	/* first->next->data = 62;*/
	nodePr temp = malloc(sizeof (node));
	temp->next = first;
	first = temp;
	printf("hello world\n");
	return (0);
}
