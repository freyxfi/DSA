#include <iostream>

using namespace std;

int main(){
  
  int a=4,b=3,c=5,d=34,e=10;
  int f=34,g=32,h=22,i=1,j=32;
  int sum,sub,div,multi,remind;
  // + , - , / , *
  cout << a<<b<<c<<d<<e<<f<<g<<h<<i<<j << endl;
  
  sum = a+b;
  
  int sum1 = b+c, sum2 = d+j;
  
  cout << "sum is := " << sum << endl;
  cout << "sim1 is :- " << sum1 << " sum2 is :- "<< sum2 << endl;
  div = (h/a)/(j/c);
  multi = (g*a*f)*(a*i);
  remind = j%g;

  cout << div << endl << multi << endl << remind << endl;
  return 0;
}
