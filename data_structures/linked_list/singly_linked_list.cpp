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
        Node* tail;

        SinglyLinkedList() : head(nullptr), tail(nullptr) {}

        void insertAtHead(int val) {
            if(head == nullptr) {
                head = new Node(val);
                tail = head;
            }
            else {
                Node* newNode = new Node(val);
                newNode->next = head;
                head = newNode;
            }
        }

        void print() {
            Node* current = head;
            while(current != nullptr) {
                cout << current->data << " -> ";
                current = current->next;
            }
            cout << "nullptr" << endl;
        }

        bool empty() {
            if (head == nullptr) {
                return true;
            }
            else {
                return false;
            }
        }

        void clear() {
            Node* current = head;
            while(current != nullptr) {
                Node* nextNode = current->next;
                delete current;
                current = nextNode;
            }
            head = nullptr;
            tail = nullptr;
        }
        
        ~SinglyLinkedList() {
            clear();
            cout << "List cleared." << endl;
        } 
};

int main() {
    SinglyLinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);

    list.print(); // Output: 30 -> 20 -> 10 -> nullptr

    return 0;
}