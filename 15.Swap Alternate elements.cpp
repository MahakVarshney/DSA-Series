#include <iostream>
using namespace std;

void swapAlternate(int num[],int size){

    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(num[i],num[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
    
}

int main() {
   int arr[1000];
   int size;
   cout<<"Enter the size of array:";
   cin>>size;
   
   cout<<"Enter the elements of array:"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
}
cout<<"Alternate swapped array is:";
    swapAlternate(arr,size);
    return 0;
}
