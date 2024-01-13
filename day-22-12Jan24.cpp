#include<bits/stdc++.h>
using namespace std;

// Reverse First K elements of Queue
// Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

// Only following standard operations are allowed on queue.

// enqueue(x) : Add an item x to rear of queue
// dequeue() : Remove an item from front of queue
// size() : Returns number of elements in queue.
// front() : Finds front item.
// Note: The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.


queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        int n = q.size();
        stack<int> s;

        for(int i=0;i<k;i++){
            int f = q.front();
            s.push(f);
            q.pop();
        }
        
        queue<int> ans ;

        while(s.size()!=0){
            int t = s.top();
            ans.push(t);
            s.pop();
        }

        while(q.size()!=0){
            int t = q.top();
            ans.push(t);
            q.pop();
        }

        return ans;
    }
int main(){
    return 0;
}