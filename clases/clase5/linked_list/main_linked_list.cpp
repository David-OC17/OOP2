#include "linked_list.h"

int main(){
    //Creating a linked list with 3 elements
    LinkedList* list = new LinkedList();
    list->addFirst(1);
    list->addFirst(2);
    list->addFirst(3);

    //Printing the list
    list->print();

    //Removing the first element
    list->removeFirst();

    //Printing the list
    list->print();

    //Removing the last element
    list->removeLast();

    //Printing the list
    list->print();

    //Destroying the list
    delete list;

    return 0;
};