#include <iostream>
#include "singly_linked_list.h"

using namespace std;

void SinglyLinkedList::insertAtHead(int val) {
    if(head == nullptr) {
        head = new Node(val);
        tail = head;
    }
    else {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    size++;
}

void SinglyLinkedList::insertAtTail(int val) {
    if(tail == nullptr) {
        tail = new Node(val);
        head = tail;
    }
    else {
        Node* newNode = new Node(val);
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

void SinglyLinkedList::insertAt(int val, int position) {
    if(position < 0 || position > size) {
        cout << "Invalid position. Cannot insert." << endl;
        return;
    }

    if (position == 0) {
        insertAtHead(val);
        return;
    }
    else if (position == size) {
        insertAtTail(val);
        return;
    }

    Node* newNode = new Node(val);
    Node* current = head;
    for(int i = 0; i < position - 1; i++) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    size++;
}

void SinglyLinkedList::removeFromHead() {
    if(head == nullptr) {
        cout << "List is empty. Cannot remove from head." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    size--;
    if(head == nullptr) {
        tail = nullptr;
    }
}

void SinglyLinkedList::removeFromTail() {
    if(tail == nullptr) {
        cout << "List is empty. Cannot remove from tail." << endl;
        return;
    }

    if(head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
        size--;
    }
    else {
        Node* current = head;
        while(current->next != tail) {
            current = current->next;
        }
        delete tail;
        tail = current;
        tail->next = nullptr;
        size--;
    }
}

void SinglyLinkedList::removeValue(int val) {
    if(head == nullptr) {
        cout << "List is empty. Cannot remove value." << endl;
        return;
    }

    if(head->data == val) {
        removeFromHead();
        return;
    }

    if(tail->data == val) {
        removeFromTail();
        return;
    }

    Node* current = head;
    while(current->next != nullptr) {
        if(current->next->data == val) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            size--;
            return;
        }
    }
}

void SinglyLinkedList::reverse() {
    Node* prev = nullptr;
    Node* current = head;
    tail = head; // Update tail to the current head
    while(current != nullptr) {
        Node* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    head = prev;
}

int SinglyLinkedList::front() const {
    if(head == nullptr) {
        cout << "List is empty. No front element." << endl;
        return -1; // or throw an exception
    }
    return head->data;
}

void SinglyLinkedList::print() {
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

bool SinglyLinkedList::empty() {
    if (head == nullptr) {
        return true;
    }
    else {
        return false;
    }
}

bool SinglyLinkedList::contains(int val) const {
    Node* current = head;
    while(current != nullptr) {
        if(current->data == val) {
            return true;
        }
        current = current->next;
    }
    return false;
}

Node* SinglyLinkedList::find(int val) const {
    Node* current = head;
    while(current != nullptr) {
        if(current->data == val) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

int SinglyLinkedList::getSize() const {
    return size;
}

void SinglyLinkedList::clear() {
    Node* current = head;
    while(current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
    tail = nullptr;
    size = 0;
}

SinglyLinkedList::~SinglyLinkedList() {
    clear();
    cout << "List destroyed." << endl;
} 