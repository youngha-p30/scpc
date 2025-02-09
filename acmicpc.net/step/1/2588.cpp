#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    string n2_string = to_string(n2);

    int n3 = n1 * (n2_string[2] - '0');
    int n4 = n1 * (n2_string[1] - '0');
    int n5 = n1 * (n2_string[0] - '0');
    int n6 = n1 * n2;

    cout << n3 << '\n'
         << n4 << '\n'
         << n5 << '\n'
         << n6;
}
