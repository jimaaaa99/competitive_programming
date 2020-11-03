#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, x, n = 0, p, s;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;
  p = x/50;

  for (int ai = 0; ai <= a; ai++) {
    for (int bi = 0; bi <= b; bi++) {
      for (int ci = 0; ci <= c; ci++) {
        int s = ai*10 + bi*2 + ci;
        if (s == p) {
          n++;
        }
      }
    }
  }


  cout << n << endl;
}
