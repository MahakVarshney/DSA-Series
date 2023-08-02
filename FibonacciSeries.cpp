// To print n numbers of Fibonacci Series
// 0 1 1 2 3 5 8 13 21 
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<"enter no"<<endl;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
    return 0;
}
