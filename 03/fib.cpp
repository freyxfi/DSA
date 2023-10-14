// fibonacci series 

// 0,1,1,2,3,5,8,13,21................
// (0+1)=1,(1+1)=2,(1+2)=3..........

#include <iostream>
using namespace std;

int main(){

    int n = 10;

    int a = 0;
    int b = 1;
    cout << a << "\n" << b << "\n";
    for(int i = 1; i<=n; i++){
        int nextnum = a + b;
        cout << nextnum << endl;

        a = b;
        b = nextnum;
    }
}