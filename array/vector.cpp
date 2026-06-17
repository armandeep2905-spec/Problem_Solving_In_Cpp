#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& b){
    b[2]=100;
}
int main(){
    vector <int> a;
    a.push_back(2);
    a.push_back(9);
    a.push_back(1);
    a.push_back(7);
    a.push_back(5);
    a.push_back(3);

    for (int i = 0; i < a.size(); i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;

    a.at(2)=10;

    sort(a.begin(),a.end());
      for (int i = 0; i < a.size(); i++)
    {
       cout<<a[i]<<" ";
    }cout<<endl;

    change(a);
    for (int i = 0; i < a.size(); i++)
    {
       cout<<a[i]<<" ";
    }
}