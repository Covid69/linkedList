#include <main.h>

int main(){
	Node * head = NULL;
	printf("%d\n", insertNodeAtTheEnd(&head, 12));
	printf("%d\n", insertNodeAtTheEnd(&head, 13));
	printf("%d\n", insertNodeAtTheEnd(&head, 14));
	printf("%d\n", insertNodeAtTheEnd(&head, 15));
	printList(head);
	return 0;
}
