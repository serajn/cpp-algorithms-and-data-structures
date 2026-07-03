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

        void insert(int val) {
            if(head == nullptr) {
                head = new Node(val);
                tail = head;
            }
            else {
                Node* newNode = new Node(val);
                tail->next = newNode;
                tail = newNode;
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
        
        ~SinglyLinkedList() {
            deleteList();
            cout << "List deleted." << endl;
        }
    private:
        void deleteList() {
            Node* current = head;
            while(current != nullptr) {
                Node* nextNode = current->next;
                delete current;
                current = nextNode;
            }
            head = nullptr;
        }
};

int main() {
    SinglyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display(); // Output: 10 -> 20 -> 30 -> nullptr

    return 0;
}