#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 5;

    cout << "a&b" << (a&b) << endl;
    cout << "a|b" << (a|b) << endl;
    cout << "a^b" << (a^b) << endl;
    cout << "~a" << ~a << endl;
    cout << "~b" << ~b << endl;

    cout << (17>>1) << endl;
    cout << (21>>2) << endl;
    cout << (13<<1) << endl;
    cout << (21<<1) << endl;

    int f = 10;

    cout << (++f) << endl;
    // 11
    cout << (f++) << endl;
    // 11
    cout << (--f) << endl;
    // 11 
    cout << (--f) << endl;
    // 10
    cout << (f--) << endl;
    // 10

}