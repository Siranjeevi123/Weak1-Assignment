#include<iostream>
using namespace std;
int main(){
    //Intger Datatyes
    int x = 5,y = 2;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    cout<<x%y<<endl;
    // Increment and Decrement
    int a = 5;
    cout<<a<<endl; 
    cout<<++a<<endl;//preincrement 
    cout<<a++<<endl; //postincrement
    cout<<a<<endl;
    int b = 5;
    cout<<b<<endl; 
    cout<<--b<<endl;//predecrement 
    cout<<b--<<endl; //postdecrement
    cout<<b<<endl;

// take two intgers a and b , a>b,and find the remainder when a divided by a/b
    int dividend = 10,divisor = 3,Quotient,remainder;
    Quotient = dividend/divisor; // a = b*q+r
    remainder = dividend - (divisor*Quotient);//r = b*q-a
    cout<<remainder<<endl;
    




    
    
    
    
    
    
    
    return 0;

}
