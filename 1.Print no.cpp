#include <iostream>

using namespace std;

int main ()
{

  // for output -> 1 2 3 4 5 6...n
//   by while loops
  int n;
  cout << "Enter the value of last no :";
  cin >> n;
  int i = 1;
  while (i <= n)
    {
      cout << i << " ";
      i++;
    }
//  by for loop

    int n;
  cout << "Enter the value of last no :";
  cin >> n;
  for(int i=1; i<=n; i++){
      cout << i << " ";
  }


  return 0;
}