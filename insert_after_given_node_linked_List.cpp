#include <iostream>
using namespace std;

//insert node after given node of linkedlist

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

Node* insertAfter(Node* head, int new_value, int key){
    Node* curr = head;
    
    while(curr!=nullptr){
        if(curr->value == key)
            break;
        curr=curr->next;

    }
    
    if (curr == nullptr) {
    	cout << "Node not found" << endl;  
        // Return the head of the original linked list
      	return head;
    }

    // Allocate new node and make the element to be inserted
    // as a new node
    Node* newNode = new Node(new_value);

    // Set the next pointer of new node to the next pointer of given node
    newNode->next = curr->next;

  	// Change the next pointer of given node to the new node
    curr->next = newNode;
  	
  	// Return the head of the modified linked list
  	return head;
}

// Function to print the linked list
void printList(Node* node)
{
    while (node != nullptr) {
        cout << node->value << " ";
        node = node->next;
    }
  	cout << endl;
}

// Driver code
int main() {

    // Create a hard-coded linked list:
	// 2 -> 3 -> 5 -> 6
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    cout << "Original Linked List: ";
    printList(head);

    // Key: Insert node after key
    int key = 3, newValue = 4;

    // Insert a new node with data 4 after the node having
    // data 3
    head = insertAfter(head, newValue, key);

    cout << "Linked List after insertion: ";
    printList(head);

    return 0;
}
