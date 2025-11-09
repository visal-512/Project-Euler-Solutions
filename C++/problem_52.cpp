#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool have_same_digits(int num1, int num2) {
    // convert the numbers into strings
    string str_1 = to_string(num1);
    string str_2 = to_string(num2);

    // sort them in order by each char value
    sort(str_1.begin(), str_1.end());
    sort(str_2.begin(), str_2.end());

    return str_1 == str_2; // returns true if the two sorted strings are equal
}

int main() {
    int i = 1; // start at 1

    while (true) {
        // assign variables for 2x, 3x, ..., 6x
        int doub = 2*i, trip = 3*i, quart = 4*i, pent = 5*i, hex = 6*i;

        // check whether the sorted strings if the numbers are equal
        if (have_same_digits(i, doub) &&
            have_same_digits(i, trip) &&
            have_same_digits(i, quart) &&
            have_same_digits(i, pent) &&
            have_same_digits(i, hex)) {

            cout << i << endl; // output the smallest integer which is true
            break; // stop the loop
        }

        i++; // increment i to check the next number if not true
    }

    return 0;
}
