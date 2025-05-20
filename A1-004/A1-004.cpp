#include <iostream>
#include <ostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int passed_score[] = {10, 40, 50};
  bool some_fail = false;

  for (int i = 0; i < 3; i++) {
    int input;
    cin >> input;
    if (input < passed_score[i] / 2)
      some_fail = true;
  }

  if (some_fail)
    cout << "fail" << endl;
  else
    cout << "pass" << endl;
}