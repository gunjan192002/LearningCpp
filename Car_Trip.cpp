#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n*10<=3000)
        cout<<3000<<endl;
        else
        cout<<n*10<<endl;
    }

    return 0;
}