#include <iostream>
using namespace std;

int main() {
    int n;  
    n=100;
    for (int i=n;i>=1;i--){
        cout<<n<<endl;
        n=n-3;
        if(n<0){
            break;
        }
        
    }
}