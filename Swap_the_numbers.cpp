// _GUNJAN_AGRAWAL_ 
//insta id->_gunjan_agrawal_
//Leetcode-> https://leetcode.com/gunjan192002/
//LinekdIN->https://www.linkedin.com/in/gunjan-agrawal-537929229/
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){
     int n, k;
     cin>>n>>k;
     vector<long long>v;
     for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    //    cout<<x<<" ";
     }
 for(int i=0;i<n;i++){
     
    for(int j=i+k;j<n;j++){
        if(v[i]>v[j])
          swap(v[i],v[j]);
    }
 }
  for(int i=0;i<n;i++)
      cout<<v[i]<<" ";
    cout<<endl;
 }
 
 return 0;
}