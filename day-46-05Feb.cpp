#include<bits/stdc++.h>
using namespace std;


// Sorted insert for circular linked list
// Given a sorted circular linked list of length n, the task is to insert a new node in this circular list so that it remains a sorted circular linked list.

struct Node{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data){
        if(head==nullptr){
            Node*x = new Node(data);
            x->next=x;
            return x;
        }
        if(data<=head->data){
            Node*temp=new Node(data);
            Node*curr=head;
            while(curr->next!=head){
                curr=curr->next;
            }
            curr->next=temp;
            temp->next=head;
            return temp;
        }
        Node*temp=head;
        Node*prev;
        while(temp->data<data){
            prev=temp;
            temp=temp->next;
            if(temp==head)break;
        }
        prev->next=new Node(data);
        prev->next->next=temp;
        return head;
    }
};

int main(){
    return 0;
}