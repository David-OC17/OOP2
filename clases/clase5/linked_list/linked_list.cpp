#include <iostream>
#include "linked_list.h"


LinkedList::LinkedList() {
    this->head = nullptr;
    this->size = 0;
}

LinkedList::~LinkedList() {
    Node* current = this->head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->getNext();
        delete current;
        current = next;
    }
}

void LinkedList::addFirst(int data) {
    Node* newNode = new Node(data, this->head);
    this->head = newNode;
    this->size++;
}

void LinkedList::addLast(int data) {
    if (this->head == nullptr) {
        this->addFirst(data);
    } else {
        Node* current = this->head;

        while (current->getNext() != nullptr) {
            current = current->getNext();
        }

        Node* newNode = new Node(data);
        current->setNext(newNode);
        this->size++;
    }
}

void LinkedList::removeFirst() {
    if (this->head != nullptr) {
        Node* first = this->head;
        this->head = this->head->getNext();
        delete first;
        this->size--;
    }
}

void LinkedList::removeLast() {
    if (this->head != nullptr) {
        if (this->head->getNext() == nullptr) {
            this->removeFirst();
        } else {
            Node* current = this->head;

            while (current->getNext()->getNext() != nullptr) {
                current = current->getNext();
            }

            Node* last = current->getNext();
            current->setNext(nullptr);
            delete last;
            this->size--;
        }
    }
}

void LinkedList::remove(int index) {
    if (index == 0) {
        this->removeFirst();
    } else if (index == this->size - 1) {
        this->removeLast();
    } else if (index > 0 && index < this->size - 1) {
        Node* current = this->head;

        for (int i = 0; i < index - 1; i++) {
            current = current->getNext();
        }

        Node* toRemove = current->getNext();
        current->setNext(toRemove->getNext());
        delete toRemove;
        this->size--;
    }
}

void LinkedList::print() {
    Node* current = this->head;

    while (current != nullptr) {
        std::cout << current->getData() << " ";
        current = current->getNext();
    }

    std::cout << std::endl;
}