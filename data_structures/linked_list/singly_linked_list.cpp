# include <iostream>

using namespace std;

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

        void display() {
            Node* current = head;
            while(current != nullptr) {
                cout << current->data << " -> ";
                current = current->next;
            }
            cout << "nullptr" << endl;
        }
};

int main() {
    SinglyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display(); // Output: 30 -> 20 -> 10 -> nullptr

    return 0;
}