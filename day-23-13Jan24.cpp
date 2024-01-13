#include<bits/stdc++.h>
using namespace std;

// Insertion Sort for Singly Linked List
// Given a singly linked list, sort the list (in ascending order) using insertion sort algorithm.


// Khudse...
Node* merge(Node* left, Node* right) {
    if (!left) return right;
    if (!right) return left;

    Node* result = nullptr;

    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }

    return result;
}

// Merge Sort function for sorting the linked list
Node* mergeSort(Node* head) {
    if (!head || !head->next) {
        return head; // Already sorted or empty list
    }

    // Split the linked list into two halves
    Node* slow = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* right = slow->next;
    slow->next = nullptr;

    // Recursively sort both halves
    Node* leftSorted = mergeSort(head);
    Node* rightSorted = mergeSort(right);

    // Merge the sorted halves
    return merge(leftSorted, rightSorted);
}

Node* insertionSort(struct Node* head_ref)
{
    //code here
    return mergeSort(head_ref);
}

int main(){
    return 0;
}