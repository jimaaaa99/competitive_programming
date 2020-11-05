#include <bits/stdc++.h>
using namespace std;

int main(){
  int N = 0;
  cin >> N;
  int a[N];
  for (int i = 0; i < N; i++) cin >> a[i];
  sort(a, a + N, greater<int>());
  int al = 0;
  int bo = 0;

  for(int i = 0; i < N; i++) {
    if (i%2 == 0) {
      al += a[i];
    } else {
      bo += a[i];
    }
  }
  cout << al - bo << endl;
}
