#include <iostream>
#include <bitset>
using namespace std;

string decimalToBinary(int num) {
    string binaryString = "";

    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        binaryString += to_string(bit);
    }

    return binaryString;
}

int main() {
    int num;
    cout << "Enter a negative decimal number: ";
    cin >> num;

    string binary = decimalToBinary(num);

    cout << "Binary representation: " << binary << std::endl;

    return 0;
}
