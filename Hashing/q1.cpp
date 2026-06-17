#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int ,int > freq;
vector<int> v={
    4,4,1,1,0,0
};
    for(auto x:v){
        freq[x]++;
    }

    for(auto x:v){
        

        if(freq[x]==1){
            cout<<"element found "<<x;
      break; }
    else {cout<<"not found";
    break; }

} 
}