#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> map1 = { {1, 10}, {2, 20} };
    map<int, int> map2 = { {2, 30}, {4, 40} };
    map1.merge(map2);
    cout<<"KEY & VALUE"<<endl;
    for (auto  &i: map1) {
        cout << i.first <<" "<< i.second << endl;
    }


    void insert1(map<char,int>&mp1,map<char,int>&mp2)
    
    return 0;
}