#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next; //pointer to next list element
        
    //constructor to initialize a new Node
    Node(int new_value){
        this->value = new_value;
        this->next = nullptr; //by default NULL
    }
};

void printlist(Node* head){
    while(head != nullptr){
        cout << head->value << " ";
        head = head->next;
    }
}

int main() {
  
    // Create a linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printlist(head);

    return 0;
}
