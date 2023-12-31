#include "node.h"

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

Node::Node(int data, Node* next) {
    this->data = data;
    this->next = next;
}

int Node::getData() {
    return this->data;
}

Node* Node::getNext() {
    return this->next;
}

void Node::setData(int data) {
    this->data = data;
}

void Node::setNext(Node* next) {
    this->next = next;
}
