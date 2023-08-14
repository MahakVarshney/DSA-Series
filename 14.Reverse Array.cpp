#include <iostream>
using namespace std;

void reverse(int num[],int size){

    int start=0;
    int end=size-1;
    while(start<=end){
        swap(num[start],num[end]);
        start++;
        end--;
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
cout<<"Reverse array is:";
    reverse(arr,size);
    return 0;
}
