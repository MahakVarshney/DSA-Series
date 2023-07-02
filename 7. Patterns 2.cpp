#include <iostream>
using namespace std;

int main() {
     
     /* For pattern -> A
                       B C
                       C D E
                       D E F G     */
   int n;
 cout << "Enter the number :";
 cin >> n;
 char value='A';
 for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
         char num=value+i+j-2;
         cout<<num<<" ";
     }
     cout<<endl;
 }

 /* For pattern ->     D
                       C D
                       B C D
                       A B C D    */
   int n;
 cout << "Enter the number :";
 cin >> n;
 for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
         char num='A'+n-i+j-1;
         cout<<num<<" ";
         num++;
     }
     cout<<endl;
 }

    return 0;
}
