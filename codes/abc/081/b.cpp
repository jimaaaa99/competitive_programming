#include <bits/stdc++.h>
using namespace std;

int main(){
  int n = 0, counter = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  bool f = true;
  while(f) {
    for (int i = 0; i< n; i++) {
      if (a[i]%2 == 1) {
        f = false;
      } else {
        a[i] = a[i]/2;
      }
    }
    if (!f) { break; }
    if (f) { counter++; }
  }
  cout << counter << endl;
}
