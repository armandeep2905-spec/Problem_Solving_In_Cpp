#include<iostream>
#include<vector>
#include<limits>
#include<unordered_map>
using namespace std;
int main(){

    vector<int> v={1, 3, 2, 3, 4, 3};
    unordered_map<int , int> mp;
int m=INT_MIN;
int maxfreq=0;
int ans=1000;

    for(auto x: v){
        mp[x]++;
    }
    
for(auto it: mp){
 int element=it.first;
 int freq=it.second;

 if(freq>maxfreq){
    maxfreq=freq;
     ans = it.first;
 }
 if(freq==maxfreq){
     ans=max(element,ans);
 }


}

cout<<ans;
}
   
