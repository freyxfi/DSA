#include <iostream>
#include <string>
using namespace std;

// class FC{
//     public:
//         string say;
// };


// int main(){
//     FC FO;
//     FO.say = "Frey0xD";
//     cout << FO.say;
//     return 0;
// }

class FC{
    public:
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
    FC FO;
    FO.setSay("FREY0XD");
    cout << FO.getSay() <<endl;


    return 0;
}