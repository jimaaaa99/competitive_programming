#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Y;
  cin >> N >> Y;

  int zi;
  for(int xi = 0; xi <= N; xi++) {
    for(int yi = 0; yi <= ( N - xi ); yi++) {
      zi = N - xi - yi;
      if ( 10*xi + 5*yi + zi == Y/1000 ) {
        cout << xi << ' ' << yi << ' ' << zi << endl;
        return 0;
      }
    }
  }
  cout << -1 << ' ' << -1 << ' ' << -1 << endl;
}
