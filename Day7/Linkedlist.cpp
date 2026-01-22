#include <iostream>
using namespace std;

class ListNode {
public:
    int val;           
    ListNode* next;    

    
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};


ListNode* insertHead(ListNode* head, int x) {
    ListNode* node = new ListNode(x); 
    node->next = head;                
    return node;                      
}


ListNode* insertTail(ListNode* head, int x) {
    ListNode* node = new ListNode(x);


    if (head == NULL) {
        return node;
    }

    ListNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    return head;
}


void printList(ListNode* head) {
    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


ListNode* deleteHead(ListNode* head) {
    if (head == NULL) return NULL;

    ListNode* temp = head;
    head = head->next;
    delete temp;

    return head;
}

int main() {
    ListNode* head = NULL; 

    cout << "Insert at head: 10, 20, 30" << endl;
    head = insertHead(head, 10);
    head = insertHead(head, 20);
    head = insertHead(head, 30);
    printList(head);

    cout << "\nInsert at tail: 40, 50" << endl;
    head = insertTail(head, 40);
    head = insertTail(head, 50);
    printList(head);

    cout << "\nDelete head once" << endl;
    head = deleteHead(head);
    printList(head);

    return 0;
}