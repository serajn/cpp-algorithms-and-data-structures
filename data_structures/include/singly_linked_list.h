#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

struct Node {
    int data;
    Node* next;

    Node (int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
    public:
        Node* head;
        Node* tail;
        int size;

        SinglyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

        void insertAtHead(int val);
        void insertAtTail(int val);
        void insertAt(int val, int position);
        void removeFromHead();
        void removeFromTail();
        void removeValue(int val);
        void reverse();
        int front() const;
        void print();
        bool empty();
        bool contains(int val) const;
        Node* find(int val) const;
        int getSize() const;
        void clear();

        ~SinglyLinkedList();
};

#endif // SINGLY_LINKED_LIST_H