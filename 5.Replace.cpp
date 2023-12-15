#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={12,34,2,2};
    vector <int> x={10,20,30};
    v=x;
    for(int i=0;i<x.size();i++){
        cout <<x[i]<<" ";
    }
}