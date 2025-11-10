#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
/* multiply_string and power_string algorithms were taken from Google */
string multiply_strings(const string &num1, const string &num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int n = num1.size(), m = num2.size();
    string result(n + m, '0');

    for (int i = n - 1; i >= 0; --i) {
        int carry = 0;
        for (int j = m - 1; j >= 0; --j) {
            int sum = (num1[i] - '0') * (num2[j] - '0') +
                      (result[i + j + 1] - '0') + carry;

            result[i + j + 1] = (sum % 10) + '0';
            carry = sum / 10;
        }
        result[i] += carry;
    }

    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos) {
        return result.substr(pos);
    }
    return "0";
}

string power_string(int a, int b) {
    string base = to_string(a);
    string result = "1";

    while (b > 0) {
        if (b % 2 == 1) {
            result = multiply_strings(result, base);
        }
        base = multiply_strings(base, base);
        b /= 2;
    }

    return result;
}

int main() {
    const int n = 100; // set n s.t. a,b ∈ {2, 3, ..., n}?
    vector<string> terms = {}; // create a vector to store string of each a^b
    // loop through all a^b and add to string
    for (int a = 2 ; a <= n ; a++) {
        for (int b = 2 ; b <= n ; b++) {
            terms.push_back(power_string(a,b));
        }
    }

    sort(terms.begin(), terms.end()); // sort terms
    auto it = unique(terms.begin(), terms.end()); // places all repeated strings at the end
    terms.erase(it, terms.end()); // removes the duplicates at the end

    cout << terms.size() << endl;

    return 0;
}
