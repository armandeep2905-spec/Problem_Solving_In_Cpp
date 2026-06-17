#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
int n=6;
int val;
vector<int> ans;
priority_queue<int> a;
for(int i =0;i<n;i++){
    cin>>val;
    a.push(val);

}
int count;
for(int i =0;i<n;i++){
    int temp=a.top();
    a.pop();
    if(a.top()==temp) {ans.push_back(temp);
        count++;}
    if(a.top()!=temp) {
        ans.push_back(temp);
    }
}

}