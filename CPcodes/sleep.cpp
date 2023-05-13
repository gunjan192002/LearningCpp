#include <iostream>
using namespace std;

int timediff(int h1, int m1, int h2, int m2){
    int t1 = h1*60 + m1;
    int t2 = h2*60 + m2;
    if(t2 > t1){
        return t2 - t1;
    }else if(t2 == t1){
        return 0;
    }else{
        return ((24 * 60) - t1 + t2);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, h, m; cin >> n >> h >> m;
        int sleepminutes = INT_MAX;
        for(int i = 0; i < n; i++){
            int th, tm; cin >> th >> tm;
            if(timediff(h, m, th, tm) < sleepminutes){
                sleepminutes = timediff(h, m, th, tm);
            }
        }
        cout << sleepminutes / 60 << ' ' << sleepminutes % 60 << '\n';
    }
}