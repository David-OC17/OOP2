#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

class LinkedList{
    private:
        Node* head;
        int size;

    public:
        LinkedList();
        ~LinkedList();

        void addFirst(int data);
        void addLast(int data);

        void removeFirst();
        void removeLast();
        void remove(int index);

        void print();
};

#endif //LINKED_LIST_H