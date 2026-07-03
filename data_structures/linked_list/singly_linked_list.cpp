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

        void insert(int val) {
            if(head == nullptr) {
                head = new Node(val);
            }
            else {
                Node* newNode = new Node(val);
                newNode->next = head;
                head = newNode;
            }
        }
};

