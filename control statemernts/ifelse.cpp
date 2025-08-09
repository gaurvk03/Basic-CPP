#include <iostream>
using namespace std;

int main() {
    cout<<"enter cp: ";
    int cp,sp;
    cin>>cp>>sp;
    if (sp-cp>0){
        cout<<"profit";
    }
    if(sp-cp==0){
        cout<<"breakeven";
    }
    else{
        cout<<"loss";
    }
}