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
        int size;

        SinglyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

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
            size++;
        }

        void insertAtTail(int val) {
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

        int getSize() const {
            return size;
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
            size = 0;
        }
        
        ~SinglyLinkedList() {
            clear();
            cout << "List destroyed." << endl;
        } 
};

int main() {
    SinglyLinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);

    list.print(); // Output: 30 -> 20 -> 10 -> nullptr

    cout << "Is the list empty? " << (list.empty() ? "Yes" : "No") << endl;
    cout << "Size of the list: " << list.getSize() << endl;

    list.clear();
    cout << "Is the list empty after clearing? " << (list.empty() ? "Yes" : "No") << endl;
    cout << "Size of the list after clearing: " << list.getSize() << endl;

    list.insertAtTail(40);
    list.insertAtTail(50);
    list.print(); // Output: 40 -> 50 -> nullptr

    return 0;
}