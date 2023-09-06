// Online C++ compiler to run C++ program online
#include <iostream>
#include <iostream>
#include <vector>
#include <cmath> // Include cmath for sqrt function

using namespace std;

int isprime(int h, int l) {
    int count = 0;
    
    // Create a vector to mark primes in the range [l, h]
    vector<bool> prime(h - l + 1, true);
    
    // Generate primes from 2 to sqrt(h)
    for (int i = 2; i <= sqrt(h); i++) {
        for (int j = max(i * i, (l + i - 1) / i * i); j <= h; j += i) {
            prime[j - l] = false;
        }
    }
    
    // Count the number of primes in the range
    for (int i = 0; i <= h - l; i++) {
        if (prime[i]) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int high;
    int low;
    cout << "Enter the high value: ";
    cin >> high;
    cout << "Enter the low value: ";
    cin >> low;
    cout << endl << "Number of prime numbers between " << low << " and " << high << ": " << isprime(high, low) << endl;

    return 0;
}
