#include <stdio.h>
#include <stdlib.h>

//Node struct
typedef struct Node{
		int value;
		struct Node * next;		
}Node;


//Node methods
int insertNodeAtTheEnd(Node** head, int newValue);
int insertNodeAtTheBeginning(Node** head, int newValue);
void printList(Node * node);
int deleteNodeUsingKey(Node** head, int key);