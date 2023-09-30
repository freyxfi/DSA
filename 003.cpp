#include <iostream>
#include <string>

using namespace std;

class FreyClass{
    public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    private:
    string name;
};

int main(){
    FreyClass fo;
    fo.setName("The Vooiam off");
    cout << fo.getName();

}