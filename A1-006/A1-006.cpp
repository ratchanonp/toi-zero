#include <ios>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int divisor, dividend;

  cin >> divisor >> dividend;
  cout << (divisor % dividend == 0 ? "yes" : "no") << endl;

  return 0;
}