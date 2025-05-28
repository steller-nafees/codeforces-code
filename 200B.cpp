//============================================================================
// 200B. Drinks - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Calculates the percentage of orange juice in the drink mixture
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

int main() {
    FAST_IO;

    int n, p;
    cin >> n;

    double pure = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        pure += p / 100.0;
    }

    double result = (pure / n) * 100.0;
    cout << setprecision(14) << result << endl;

    return 0;
}

/*
  ## 💡 Solution Logic
  - Read `n`: number of drinks.
  - For each drink, read the percentage of orange juice it contains.
  - Convert it to a fraction and sum up.
  - Compute the average percentage: `(pure / n) * 100`.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
