#include <bits/stdc++.h>
using namespace std;

queue <int> q;

class RecentCounter {
public:
    RecentCounter() {
        //constructor , when we write RecentCounter rc --> rc object is created with initial [] then the rc.ping starts the ping function belonging to the rc,
    }
    
    int ping(int t) {
        q.push(t);
        while(q.front() < t - 3000){
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */


int main(){

}