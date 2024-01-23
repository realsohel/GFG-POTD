#include<bits/stdc++.h>
using namespace std;

// Course Schedule
// There are a total of n tasks you have to pick, labelled from 0 to n-1. Some tasks may have prerequisite tasks, for example to pick task 0 you have to first finish tasks 1, which is expressed as a pair: [0, 1]
// Given the total number of n tasks and a list of prerequisite pairs of size m. Find a ordering of tasks you should pick to finish all tasks.
// Note: There may be multiple correct orders, you just need to return any one of them. If it is impossible to finish all tasks, return an empty array. Driver code will print "No Ordering Possible", on returning an empty array. Returning any correct order will give the output as 1, whereas any invalid order will give the output 0.


vector<int> findOrder(int numCourses, int m, vector<vector<int>> prerequisites) {
    //code here
    vector<int>adj[numCourses];
    vector<int>indeg(numCourses,0);
    for(auto i:prerequisites)
    {
        adj[i[1]].push_back(i[0]);
    }
    for(int i=0;i<numCourses;i++)
    {
        for(auto job:adj[i])
        {
            indeg[job]++;
        }
    }
    queue<int>q;
    for(int i=0;i<numCourses;i++)
    {
        if(indeg[i]==0)
            q.push(i);
    }
    vector<int>ans;
    while(!q.empty())
    {
        int k=q.front();
        ans.push_back(k);
        q.pop();
        for(auto j:adj[k])
        {
            indeg[j]--;
            if(indeg[j]==0)
                q.push(j);
        }
    }
    if(ans.size()==numCourses)
        return ans;
    return {};
}
int main(){
    return 0;
}