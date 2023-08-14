#include <iostream>
using namespace std;

int getSum(int num[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+num[i];
    }
    return sum;
}

int main() {
   int arr[100];
   int size;
   cout<<"Enter the size of array:";
   cin>>size;
   
   cout<<"Enter the elements of array:"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
}

   int sum=getSum(arr,size);
   cout<<"Sum of elements is:"<<sum;
  
    return 0;
}
