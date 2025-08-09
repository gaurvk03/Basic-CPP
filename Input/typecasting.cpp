#include <iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    int u = (float)x;
    if(u<0) u=u-1;
    
    cout<<x-u;


}