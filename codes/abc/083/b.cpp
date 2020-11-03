#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b, x = 0;
  cin >> n >> a >> b;
  for (int i = 1; i <= n; i++) {
    int d = log10(i);
    int ii = i;
    int s = 0;

    while (ii > 0) {
      s += ii % 10;
      ii /= 10;
    }

    if ( s >= a and s <= b ) {
      x += i;
    }
  }
  cout << x << endl;
}
