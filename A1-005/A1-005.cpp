#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string seasons[] = {"winter", "spring", "summer", "fall"};

  int month, day;
  cin >> month >> day;

  if (month % 3 == 0) {
    if (day >= 21) {
      cout << seasons[month / 3] << endl;
    } else {
      cout << seasons[(month / 3) - 1] << endl;
    }
  } else {
    cout << seasons[month / 3] << endl;
  }

  return 0;
}