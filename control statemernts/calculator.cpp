#include <iostream>
using namespace std;
int main(){
     int a,b;
     char op;
     cout<<"batao kya karna hai: ";
     cout<<"a: ";
     cin>>a;
     cout<<"op: ";
     cin>>op;
     cout<<"b: ";
     cin>>b;
     if(op=='+')cout<<a+b;
     if(op=='-')cout<<a-b;
     if(op=='*')cout<<a*b;
     if(op=='/')cout<<a/b;

}