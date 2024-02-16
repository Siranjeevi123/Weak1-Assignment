#include<iostream>
using namespace std;
int main(){
    // take two intgers a and b , a>b,and find the remainder when a divided by a/b
    int dividend = 10,divisor = 3,Quotient,remainder;
    Quotient = dividend/divisor; // a = b*q+r
    remainder = dividend - (divisor*Quotient);//r = b*q-a
    cout<<remainder<<endl;

    // simple way
    int x = 10,y = 3;
    cout<<x%y<<endl;
    cout<<5%10<<endl; //if a<b -> a%b = a








    return 0;
}