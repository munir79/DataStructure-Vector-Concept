#include<bits/stdc++.h>
using namespace std;
int main(){
    // insert one element in vector

    vector<int> v={12,34,2,2};
    vector <int> x={10,20,30};
     v.insert(v.begin()+2,4);
    for(int i=0;i<v.size();i++){
        cout <<v[i]<<" ";
    }
    cout<< endl;
    // insert multiple element in vector
    v.insert(v.begin()+2,x.begin(),x.end());
    for(int i=0;i<v.size();i++){
        cout<< v[i] <<" ";
    }
}