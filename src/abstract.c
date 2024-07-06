#include "../inc/abstract.h"

/*
    Function pointers
*/
int (*printListAbstractedFncPtr)(Node *) = printList;

//TODO: Add timestamp or a new print function
void printListAbstracted(Node * node){
    printf("Printing List: ");
    int result = printListAbstractedFncPtr(node);

    if (result == 0){
        printf("End of List\n");
    }
    else{
        printf("There is a problem with printing\n");
    }
}