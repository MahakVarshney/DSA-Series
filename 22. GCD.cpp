// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0)
    return b;
    
    if(b==0)
    return a;
    
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        if(b>a){
            b=b-a;
        }
    }
}
int main() {
    cout<<gcd(110,22);

    return 0;
}
