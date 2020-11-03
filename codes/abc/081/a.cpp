#include <bits/stdc++.h>
using namespace std;

int main(){
  string x;
  cin >> x;
  int i = 0, count = 0;
  while(x[i] != '\0'){
    if (x[i] == '1') {
      count++;
    }
    i++;
  }
  cout << count << endl;
}
