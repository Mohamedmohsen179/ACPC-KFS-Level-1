#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, mn, mx;
    cin >> a >> b >> c;
    
    if (a <= b && a <= c) {
      mn = a;
    } 
    else if (b <= a && b <= c) {
      mn = b;
    }
    else {
      mn = c;
    }
    
    if (a >= b && a >= c) {
      mx = a;
    }
    else if (b >= a && b >= c) {
      mx = b;
    }
    else {
      mx = c;
    } 
    cout << mn << " " << mx << "\n";
    return 0;
}