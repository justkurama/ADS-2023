#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}
int nthSuperprime(int n) {
    vector<int> superprimes;
    int num = 2; 
    while (superprimes.size() < n) {
        if (isPrime(num) && isPrime(superprimes.size() + 1)) {
            superprimes.push_back(num);
        }
        num++;
    }
    return superprimes.back();
}
int main()
{
	int n; cin >> n;
	int ans = nthSuperprime(n);
	cout << ans;
	return 0;
}