//  Q. Given a linked list of N nodes. The task is to remove the loop from the linked list, if present.
//  A. The solution is to use Floyd's Cycle Detection Algorithm. The algorithm is as follows
//  1. Initialize two pointers slow and fast to the head of the linked list.
//  2. Move slow by one and fast by two. If there is a loop, they will meet.
//  3. If they meet, initialize slow to the head of the linked list and move both slow and fast by one until they meet.
//  4. The node where they meet is the starting point of the loop.	
//  5. Move fast to the last node of the loop and slow to the head of the linked list.
//  6. Move both slow and fast by one until they meet.
//  7. The node where they meet is the last node of the linked list.
//  8. Make the next of the last node NULL.
//  9. The loop is removed from the linked list.
//  10. The time complexity of the solution is O(N) where N is the number of nodes in the linked list.
//  11. The space complexity of the solution is O(1).
//  12. The code is as follows:

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};


void removeLoop(Node* head) {
    Node *fast= head;
    Node *slow= head;
    
    while(fast and fast->next){
        slow=slow->next;
        fast = fast->next->next;
        
        if(slow==fast){
            slow=head;
            while(slow!=fast){
                fast=fast->next;
                slow=slow->next;
            }

            while(fast->next!=slow){
                fast=fast->next;
            }
        }
    }
    
}

int main(){
    return 0;
}