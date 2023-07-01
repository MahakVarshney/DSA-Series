#include <iostream>
using namespace std;

//  Number is prime or not
// for example -> 5 is prime no. and 6 is not prime no.

int main (){
    
 
 int n;
 cout << "Enter the number :";
 cin >> n;
//  let suppose number is prime
 bool isPrime=1;
 for(int i=2;i<n;i++){
     if((n%i)==0){
         isPrime=0;
     }
 }
if(isPrime){
    cout<<"Number is prime";
}
else{
    cout<<"Number is not prime";
}
    
  return 0;
}
