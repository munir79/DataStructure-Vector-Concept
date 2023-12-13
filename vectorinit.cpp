#include<bits/stdc++.h>
using namespace std;
int main(){
  vector <int> v; // type 1
  cout<< v.size();
  cout << endl;
  vector <int> v1(5); // type 2
  cout << v1.size();
  cout << endl;
  vector <int> v2(4,10); //type 3
  for(int i=0;i<v2.size();i++){
    cout << v2[i] << " ";
  }

  cout << endl;
  vector<int> v3(3,50);

  // copy vector

  vector<int>v4(v3);
  for(int i=0;i<v4.size();i++){
    cout << v4[i]<< " ";
  }



}