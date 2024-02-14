#include <main.h>

int main(){
	Node * head = NULL;
    int (*func_ptr)(Node**,int) = &insertNodeAtTheEnd;
    //int (*func_ptr)(Node**,int) = &insertNodeAtTheBeginning;
	printf("%d\n", func_ptr(&head, 12));
	printf("%d\n", func_ptr(&head, 13));
	printf("%d\n", func_ptr(&head, 14));
	printf("%d\n", func_ptr(&head, 15));
	printList(head);
	return 0;
}