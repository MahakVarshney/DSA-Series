#include <iostream>
using namespace std;
void sort(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
       
         if(i<j) {
             swap(arr[i],arr[j]);
            i++;
            j--;}
    }
}

void printa(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[8]={1,0,1,1,0,1,0,1};
   sort(arr,8);
  printa(arr,8);
    return 0;
}
