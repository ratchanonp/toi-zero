#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string firstname, lastname;

    cin >> firstname >> lastname;

    cout << "Hello " << firstname << " " << lastname << endl;
    cout << string_view(firstname.substr(0, 2)) << string_view(lastname.substr(0, 2)) << endl;

    return 0;
}