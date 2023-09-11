#include <bits/stdc++.h>

using namespace std;

int main() {
    deque<int> dq;
    string operation;

    while (cin >> operation) {
        if (operation == "!") {
            break;
        } else if (operation == "+") {
            int num;
            cin >> num;
            dq.push_front(num);
        } else if (operation == "-") {
            int num;
            cin >> num;
            dq.push_back(num);
        } else if (operation == "*") {
            if (dq.empty()) {
                cout << "error" << endl;
            } else {
                int first = dq.front();
                int last = dq.back();
                dq.pop_front();
                if (!dq.empty()) {
                    dq.pop_back();
                }
                cout << first + last << endl;
            }
        }
    }

    return 0;
}