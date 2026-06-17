#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n;
    int k=3;
    vector<int> v;
priority_queue<int,vector<int>,greater<int>> a;
cout<<"enter values for heap"<<endl;
    for(int i=0;i<7;i++){
        cin>>n;
        a.push(n);
        if(a.size()>k){
            v.push_back(a.top());
            a.pop();
        } // if we leave it here ,we will not get last some values
        
    }
    while(a.size()!=0){
         v.push_back(a.top());
            a.pop();
    }
      for(int i=0;i<7;i++){
        cout<<v[i]<<" ";

      }
}