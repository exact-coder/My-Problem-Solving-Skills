#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    for (int x : a)
        cout << x << " ";

    return 0;
}

// Compile and Run it:
// g++-16 Sample.cpp -o Sample && ./Sample
