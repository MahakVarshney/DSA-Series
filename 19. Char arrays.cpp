// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool ispalindrome(char ch[],int n){
    int s=0,e=n-1;
    while(s<e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int length(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main() {
   char ch[1000];
   cout<<"Enter your name:";
   cin>>ch;
  
   cout<<endl<<"length of string is:"<<length(ch)<<endl;
   reverse(ch,length(ch));
   cout<<ch<<endl;
   cout<<"is palindrome:"<<ispalindrome(ch,length(ch));

    return 0;
}
