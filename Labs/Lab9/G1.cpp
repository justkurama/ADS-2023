#include <iostream>
#include <vector>

using namespace std;

// Function to compute the LPS (Longest Proper Prefix which is also Suffix) array for the KMP algorithm
vector<int> computeLPS(string pattern) {
    int n = pattern.length();
    vector<int> lps(n, 0);

    int len = 0;
    int i = 1;

    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

// Function to find the minimum possible length of the original string using KMP algorithm
int minOriginalLength(string S) {
    int n = S.length();

    // Compute LPS array for the pattern S
    vector<int> lps = computeLPS(S);

    // The minimum possible length of the original string is given by (n - lps[n - 1])
    return (n - lps[n - 1]);
}

int main() {
    string S;
    cin >> S;

    int result = minOriginalLength(S);

    cout << result << endl;

    return 0;
}
