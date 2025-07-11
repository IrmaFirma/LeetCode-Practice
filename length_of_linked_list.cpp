#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next; //pointer to next list element
        
    //constructor to initialize a new Node
    Node(int new_value){
        value = new_value;
        next = nullptr; //by default NULL
    }
};

int giveLength(Node* head){
    int count = 0;
    
    Node* curr = head;
    
    while(curr!=nullptr){
        count++;
        curr = curr->next; //move pointer to next node
    }
    
    return count;
}

int main() {
  	
    // Create a hard-coded linked list:
    // 1 -> 3 -> 1 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    // Function call to count the number of nodes
    cout << "Count of nodes is " << giveLength(head);
    return 0;
}
