//  Question: K Closest Points to Origin
// Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).
// The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).
// You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).

// Answer: The solution is to use a min heap. The algorithm is as follows
// 1. Create a min heap.
// 2. Insert all the elements of the array into the min heap.
// 3. Pop the top element of the min heap k times and store it in a vector.
// 4. The vector contains the k closest elements to the origin.
// 5. The time complexity of the solution is O(N*logK) where N is the number of elements in the array.
// 6. The space complexity of the solution is O(K) where K is the number of closest elements to be found.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    // Your code here
    priority_queue<pair<int, vector<int>>, vector<pair<int,
    vector<int>>>, greater<>> pq;
    for(auto it:points){
        int x=it[0];
        int y=it[1];
        int dis=sqrt((x*x)+(y*y));
        pq.push({dis,{x,y}});
    }
    vector<vector<int>>v;

    while(k>0 && !pq.empty()){
        v.push_back(pq.top().second);
        pq.pop();
        k--;
    }
    return v;
}