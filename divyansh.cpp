#include <bits/stdc++.h>
using namespace std;
int  lengthOfLongestSubstring(string s){
    int n=s.length();
    int start =0; int end;
    int len=1;
    unordered_set<char> ss;
    for(int i=0;i<n;i++){
        end=i;
        char ch=s[i];
        while(ss.find(ch)!=ss.end() && start<end){
            ss.erase(s[start++]);
        }
        ss.insert(ch);
        int tmp=end-start+1;
        len=max(len,tmp);

    }
    return len;
}