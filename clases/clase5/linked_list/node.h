#ifndef NODE_H
#define NODE_H

class Node{
    private:
        int data;
        Node* next;

    public:
        Node(int data);
        Node(int data, Node* next);

        int getData();
        Node* getNext();
        void setData(int data);
        void setNext(Node* next);
};

#endif //NODE_H