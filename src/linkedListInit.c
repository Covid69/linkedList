#include <linkedList.h>

int insertNodeAtTheEnd(Node** head, int newValue) {
	//Allocate memory for new Node
	Node * newNode = (Node*)malloc(sizeof(Node));
	//Point newNode next pointer to NULL since it will be the last node
	newNode->next = NULL;
	//Add value
	newNode->value = newValue;
	//If this is the first Node. Set head = newNode
	if (*head == NULL){
		*head = newNode;
		return 2;
	}

	//Travel to the last Node on the list
	Node * current = *head;
	while (current->next != NULL){
		current = current->next;
	}

	//Link the last node to the new Node
	current->next = newNode;
	
	return 0;
}
//TODO: Write insert at begining
int insertNodeAtTheBeginning(Node** head, int newValue) {
	return 0;
}

void printList(Node * node){
		while(node != NULL){
			printf("%d -> ",node->value);
			node = node->next;
		}
		printf("NULL\n");
		return;
}
