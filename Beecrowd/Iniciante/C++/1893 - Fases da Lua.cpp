#include <bits/stdc++.h>
using namespace std;

int main() {

    int l1, l2;

    cin >> l1 >> l2;

    if (l2 >= l1) {
        if (l2 <= 2) {
            cout << "nova" << endl;
        } else if (l2 <= 96) {
            cout << "crescente" << endl;
        } else {
            cout << "cheia" << endl;
        }
    } else {
        if (l2 <= 2) {
            cout << "nova" << endl;
        } else if (l2 <= 96) {
            cout << "minguante" << endl;
        } else {
            cout << "cheia" << endl;
        }
    }

  return 0;
}
