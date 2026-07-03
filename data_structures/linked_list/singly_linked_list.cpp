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

        void removeFromHead() {
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

        bool contains(int val) const {
            Node* current = head;
            while(current != nullptr) {
                if(current->data == val) {
                    return true;
                }
                current = current->next;
            }
            return false;
        }

        Node* find(int val) const {
            Node* current = head;
            while(current != nullptr) {
                if(current->data == val) {
                    return current;
                }
                current = current->next;
            }
            return nullptr;
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
    list.insertAtTail(60);
    list.print(); // Output: 40 -> 50 -> 60 -> nullptr

    list.removeFromHead();
    list.print(); // Output: 50 -> 60 -> nullptr

    cout << "Does the list contain 50? " << (list.contains(50) ? "Yes" : "No") << endl;
    cout << "Does the list contain 70? " << (list.contains(70) ? "Yes" : "No") << endl;

    Node* foundNode = list.find(50);
    if(foundNode != nullptr) {
        cout << "Found node with value 50." << endl;
    }
    else {
        cout << "Node with value 50 not found." << endl;
    }

    return 0;
}