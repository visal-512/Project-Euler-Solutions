#include <iostream>
#include <cmath>

using namespace std;

// Check if a number is pentagonal by seeing if the nth position of that number in the sequence is an integer
bool is_pent_num(int num) {
    double pos = (1.0 + sqrt(1 + 24.0 * num)) / 6.0; // rearrange the formula to find n for nth pentagonal number
    return pos == floor(pos);
}

// Since every hexagonal number is a triangular number, we can ignore triangular numbers
// loop through hexagonal numbers and check it is also triangular

int main() {
    long long n = 144; // start from 40755 which is 143rd hexagonal number
    
    while (true) {
        long long hex_num = n*(2*n - 1); // find the hexagonal number in that position
        cout << hex_num << endl;

        if (is_pent_num(hex_num)) {
            cout << "Found: " << hex_num << endl;
            break; // end loop after value has been found
        }

        n++; // increment the position by 1 to find next hexagonal number
    }

    return 0;
}
