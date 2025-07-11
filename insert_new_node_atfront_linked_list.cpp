#include <iostream>
using namespace std;

//insert node at beginning of linkedlist

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

Node* insertNew(Node* head, int new_value){
    Node* new_node = new Node(new_value);
    
    new_node->next = head;
    
    return new_node;
}

void printList(Node* head)
{
    // Start from the head of the list
    Node* curr = head;

    // Traverse the list
    while (curr != nullptr) {
        // Print the current node's data
        cout << " " << curr->value;

        // Move to the next node
        curr = curr->next;
    }

    // Print a newline at the end
    cout << endl;
}

// Driver code to test the functions
int main()
{
    // Create the linked list 2->3->4->5
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    // Print the original list
    cout << "Original Linked List:";
    printList(head);

    // Insert a new node at the front of the list
    cout << "After inserting Nodes at the front:";
    int value = 1;
    head = insertNew(head, value);

    // Print the updated list
    printList(head);

    return 0;
}
