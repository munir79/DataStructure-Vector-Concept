#include<bits/stdc++.h>
using namespace std;
int main(){
    // earase one element from vector
    vector<int> v={12,34,2,2};
   //
    // earase multiple element from vector
   
    v.erase(v.begin()+1,v.begin()+3);
    for(int i=0;v.size();i++){
        cout << v[i] << " ";
    }
}