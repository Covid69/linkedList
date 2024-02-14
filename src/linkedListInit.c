#include <linkedList.h>

//Insert at the end
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


//Insert at begining
int insertNodeAtTheBeginning(Node** head, int newValue) {
	//Allocate memory for new node
	Node * newNode = (Node*)malloc(sizeof(Node));
	//Link the newNode next node address to current head
	newNode->next = *head;
	//Add value to the new node
	newNode->value = newValue;
	//Set the current Node as new head
	*head = newNode;

	return 0;
}

//Print out list
void printList(Node * node){
		while(node != NULL){
			printf("%d -> ",node->value);
			node = node->next;
		}
		printf("NULL\n");
		return;
}

// Delete Node using key value
int deleteNodeUsingKey(Node** head, int key){
	// If the list is empty, return
    if (*head == NULL)
        return 1;
    
    // If the node to be deleted is the head node
    if ((*head)->value == key) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return 2;
    }

    // Search for the node with the given key
    Node* prev = NULL;
    Node* current = *head;
    while (current != NULL && current->value != key) {
        prev = current;
        current = current->next;
    }

    // If the node with the key is not found
    if (current == NULL)
        return 3;
    
    // Unlink the node from the list
    prev->next = current->next;
    free(current);
	return 0;
}