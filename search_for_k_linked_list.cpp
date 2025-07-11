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

bool searchForKey(Node* head, int key){
    Node* curr = head;
    
    while(curr!=nullptr){
        if(curr->value == key){
            return true;
        }else{
            curr = curr->next;
        }
    }
    
    return false;
}
// Driver code
int main() {

    // Create a hard-coded linked list:
    // 14 -> 21 -> 13 -> 30 -> 10
    Node* head = new Node(14);
    head->next = new Node(21);
    head->next->next = new Node(13);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(10);

  	// Key to search in the linked list
  	int key = 12;
  
    if (searchForKey(head, key))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
