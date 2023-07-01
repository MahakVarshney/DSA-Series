#include <iostream>
using namespace std;

// In this file , here is some code of patterns ->

int main (){
    
    /* For pattern ->  * * * * 
                       * * * *
                       * * * *
                       * * * *      */
 int n;
 cout << "Enter the number :";
 cin >> n;
  // i for row and j for column
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         cout<<"*"<<" ";
     }
     cout<<endl;
 }

   /* For pattern ->  1 1 1
                      2 2 2
                      3 3 3   */
 int n;
 cout << "Enter the number :";
 cin >> n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         cout<<i<<" ";
     }
     cout<<endl;
 }

  /* For pattern ->  1 2 3
                     1 2 3
                     1 2 3   */
 int n;
 cout << "Enter the number :";
 cin >> n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         cout<<j<<" ";
     }
     cout<<endl;
 }

  /* For pattern ->  3 2 1
                     3 2 1
                     3 2 1   */
 int n;
 cout << "Enter the number :";
 cin >> n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         cout<<n-j+1<<" ";
     }
     cout<<endl;
 }

  /* For pattern ->  1 2 3 
                     4 5 6
                     7 8 9   */
 int n;
 cout << "Enter the number :";
 cin >> n;
 int count=1;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         cout<<count<<" ";
         count++;
     }
     cout<<endl;
 }

  /* For pattern ->    *
                       * *
                       * * *
                       * * * *   */
 int n;
 cout << "Enter the number :";
 cin >> n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
         cout<<"*"<<" ";
     }
     cout<<endl;
 }

  /* For pattern ->    1
                       2 3
                       3 4 5
                       4 5 6 7   */
 int n;
 cout << "Enter the number :";
 cin >> n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
         cout<<i+j-1<<" ";
     }
     cout<<endl;
 }

  /* For pattern ->    1
                       2 1
                       3 2 1
                       4 3 2 1   */
 int n;
 cout << "Enter the number :";
 cin >> n;
 for(int i=1;i<=n;i++){
     for(int j=i;j>0;j--){
         cout<<j<<" ";
     }
     cout<<endl;
 }

  /* For pattern ->     A A A
                        B B B
                        C C C         */
 int n;
 cout << "Enter the number :";
 cin >> n;
 char value='A';
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         char num=value+i;
         cout<<num<<" ";
     }
     cout<<endl;
 }

  /* For pattern ->     A B C
                        B C D
                        C D E         */
 int n;
 cout << "Enter the number :";
 cin >> n;
 char value='A';
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         char num=value+i+j;
         cout<<num<<" ";
     }
     cout<<endl;
 }
    
  return 0;
}
