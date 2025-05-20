#include <iostream>

using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int amount;
  cin >> amount;

  int coins[] = {10, 5, 2, 1};

  for (int i = 0; i < sizeof(coins) / sizeof(int); i++) {

    int n_coin;

    n_coin = amount / coins[i];
    amount -= n_coin * coins[i];

    cout << coins[i] << " = " << n_coin << endl;
  }

  return 0;
}