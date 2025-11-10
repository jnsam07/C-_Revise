#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 9; i++) {
        for(int j = 2; j <= 9; j++) {
        cout << i << "x" << j << "=" << (i*j);
        cout << "\n ----------------- \n";
        }
    };

    return 0;

}