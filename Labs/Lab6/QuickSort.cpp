#include <iostream>
#include <algorithm>

using namespace std;

int partition(int a[], int left, int right, int pivot) {
    while(left <= right) {
        while(a[left] < pivot) {
            left++;
        }
        while(a[right] > pivot) {
            right--;
        }
        if (left <= right) {
            swap(a[left], a[right]);
            left++;
            right--;
        }
    }
    return left;
}

void QuickS(int a[], int left, int right) {
    if (left >= right) {
        return;
    }
    int pivot = a[(left + right)/2];
    int index = partition(a, left, right, pivot);
    QuickS(a, left, index - 1);
    QuickS(a, index, right);
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    QuickS(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}