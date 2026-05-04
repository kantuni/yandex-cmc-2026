#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  int a, b, c;
  a = -1e8;
  b = x + a;
  c = z + a;
  if (x == abs(a - b) and y == abs(b - c) and z == abs(c - a)) {
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    return 0;
  }
  b = -1e8;
  c = y + b;
  a = x + b;
  if (x == abs(a - b) and y == abs(b - c) and z == abs(c - a)) {
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    return 0;
  }
  c = -1e8;
  b = y + c;
  a = z + c;
  if (x == abs(a - b) and y == abs(b - c) and z == abs(c - a)) {
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    return 0;
  }
  return 0;
}
