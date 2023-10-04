#include <iostream>
#include <string>
using namespace std;

class FC{
    public:
        FC (string z){
            setSay(z);
        }
        void setSay(string x){
            say = x;
        }
        string getSay(){
            return say;
        }
    private:
    string say;
};

int main(){
    FC FO("Hello mello lello\n");
    cout << FO.getSay();
    FC FO2("SLAM DUNK TOP #1");
    cout << FO2.getSay();
}


    