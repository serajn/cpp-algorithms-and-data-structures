#include "../include/singly_linked_list.h"

int main() {
    SinglyLinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);

    list.print(); // Output: 30 -> 20 -> 10 -> nullptr

    return 0;
}
