#include <iostream>
#include <regex>

using namespace std;
using namespace regex;
int main(void){
  string s;
  cin >> s;
  cout << regex::replace_all_regex(s,',', ' ');
}
