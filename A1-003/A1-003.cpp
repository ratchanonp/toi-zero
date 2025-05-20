#include <climits>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  const int n = 3;

  int mx = INT_MIN;

  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    mx = max(mx, input);
  }

  cout << mx << endl;
}