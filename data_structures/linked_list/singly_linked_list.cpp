# include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
    public:
        Node* head;

        SinglyLinkedList() : head(nullptr) {}
};

