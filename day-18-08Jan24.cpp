#include<bits/stdc++.h>
using namespace std;


// Merge 2 sorted linked list in reverse order
// Given two linked lists of size N and M, which are sorted in non-decreasing order. The task is to merge them in such a way that the resulting list is in non-increasing order.


// ALmost Khudse kiyaaa...
struct Node
{
    int data;
    Node* next;
};

// Function to reverse a linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* nextNode = nullptr;

    while (current != nullptr) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    // The new head of the reversed linked list is the last node
    head = prev;

    return head;
}


struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
    Node *node1 = reverseLinkedList(node1);
    Node *node2 = reverseLinkedList(node2);
    
    Node *newHead = nullptr;
    Node *curNode = nullptr;
    
    while(node1 &&  node2){
        if(node1->data>node2->data){
            if(!curNode){
                curNode = new Node;
                curNode->data = node1->data;
                newHead=curNode;
            }
            else{
                Node *newNode = new Node;
                newNode->data = node1->data;
                curNode->next = newNode;
                curNode = newNode;
            }
            node1=node1->next;
        }
        else{
            if(!curNode){
                curNode = new Node;
                curNode->data = node2->data;
                newHead=curNode;
            }
            else{
                Node *newNode = new Node;
                newNode->data = node2->data;
                curNode->next = newNode;
                curNode = newNode;
            }
            node2=node2->next;
        }
    }

    while(node1){
        if(!curNode){
                curNode = new Node;
                curNode->data = node1->data;
                newHead=curNode;
            }
            else{
                Node *newNode = new Node;
                newNode->data = node1->data;
                curNode->next = newNode;
                curNode = newNode;
            }
            node1=node1->next;
    }

    while (node2){
        if(!curNode){
                curNode = new Node;
                curNode->data = node2->data;
                newHead=curNode;
            }
            else{
                Node *newNode = new Node;
                newNode->data = node2->data;
                curNode->next = newNode;
                curNode = newNode;
            }
            node2=node2->next;
    }
    
    return newHead;

} 

int main(){
    return 0;
}