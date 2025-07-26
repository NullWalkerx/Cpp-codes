#include<iostream>
using namespace std;

void func(int a) {
    if (a == 0) {
        cout << "0 ";
        return;
    }
    int r = 0;
    while(a > 0) {
        r = a % 10;
        a /= 10;
        cout << r << " ";
    }
}

int main() {
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        func(m);
        cout << endl;
    }
    return 0;
}
