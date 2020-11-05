#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  set<int> sa;
  for (int i = 0; i < n; i++) {
    sa.insert(a[i]);
  }

  cout << sa.size() << endl;
}
