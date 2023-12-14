#include<bits/stdc++.h>
using namespace std;
int main(){
    // earase one element from vector
    vector<int> v={12,34,2,2};
     v.erase(v.begin()+2);
    
    for(int i=0;i<v.size();i++){
        cout <<v[i]<<" ";
    }
}