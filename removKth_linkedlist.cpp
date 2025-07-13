#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    
    Node(int x){
        value = x;
        next = nullptr;
    }
};

Node* deleteK(Node* head, int k){
    int counter = 0;
    
    if(head==nullptr or k<=0){
        return head;
    }
    
    Node* curr = head;
    Node* prev = nullptr;
    
    while(curr!=nullptr){
        counter++;
        if(counter%k==0){
            if(prev!=nullptr){
                prev->next = curr->next; //skipping
            }else{
                head = curr->next;
            }
        }else{
            prev = curr;
        }
        curr = curr->next;
    }
    return head;
}

void printList(Node* head) {
  
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->value << " ";
        curr = curr->next;
    }
}


int main() {
  
    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5 -> 6
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    int k = 2;
    head = deleteK(head, k);
    printList(head);

    return 0;
}
