#include<iostream>

using namespace std;

int main(){
    int n = 10;
    string arr[10][10];
    arr[0][2] = "Hello";
    arr[1][3] = "world";
    cout << arr[0][2] << ' ' << arr[1][3] << endl;
    return 0;
}