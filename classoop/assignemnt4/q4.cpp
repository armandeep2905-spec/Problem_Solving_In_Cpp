#include<iostream>
using namespace std;
#include<queue>
#include<string>
int main(){
    int temp;
    string ans="";
    queue<int> q;
cout<<"enter the values";
for(int i=0;i<4;i++){
    cin>>temp;
    q.push(temp);
}
for(int i=0;i<q.size();i++){
    ans[i]=q.front();
    q.pop();
   
}

}
