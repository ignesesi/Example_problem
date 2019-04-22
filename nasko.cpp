#include <iostream>
using namespace std;

typedef unsigned long long ull;
ull a, b, k;

bool go_go(ull curr) {
    ull mult = 1;
    while(curr > 0) {
        mult *= curr % 10;
        curr /= 10;
    }
    return mult % k == 0;
}

int main() {
    cin >> a >> b >> k;
    ull ans = 0;
    for(ull i = a; i <= b; i ++) {
        ans += go_go(i);
    }
    cout << ans;
}
