//============================================================================
// Platform      : Codeforces 
// Problem Title : B. Abraham's Great Escape
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : October 05, 2025 
//
// Problem Statement:
//   Abraham is a brave explorer who plans to investigate a peculiar maze. The
//   maze is represented as an n×n grid, where each cell contains an arrow
//   pointing in one of four directions: Up (U), Down (D), Left (L), or Right (R).
//   If Abraham starts on a cell, he must follow the arrows until he escapes the
//   grid (when an arrow points outside).
//
//   Your task is to construct an arrangement of arrows such that exactly k
//   starting cells will allow Abraham to escape the maze.
//
// Input:
//   The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases.
//   Each test case contains two integers n and k (2 ≤ n ≤ 100, 0 ≤ k ≤ n²).
//   It is guaranteed that the sum of n² across all test cases does not exceed 10⁵.
//
// Output:
//   For each test case, output:
//     - "YES" followed by an n×n grid showing a valid arrow arrangement,
//       OR
//     - "NO" if it is impossible to construct such a grid.
//   You may print each letter in any case.
//
// Constraints:
//   - 2 ≤ n ≤ 100
//   - 0 ≤ k ≤ n²
//   - Σ(n²) ≤ 10⁵
//   - Time limit: 1.5 seconds
//   - Memory limit: 256 MB
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define OUTPUT_CONDITION(x) x?"NO" : "YES"
#define INPUT_ARRAY(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define OUTPUT_2Values(o1,o2) cout<<o1<<" "<<o2<<endl
#define SORT_DESC(a) sort(a.begin(), a.end(),greater<int>())
#define SORT_ASC(a) sort(a.begin(), a.end())
#define vi(a,n) vector<int> a(n);
#define vl(a,n) vector<ll> a(n);
// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

void solve() {
    int n, k;
    cin >> n >> k;

    int cells = n * n;
    int spcells = cells - k; // special cells to place

    if (spcells == 1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    // initialize the grid with all 'R'
    vector<vector<char>> grid(n, vector<char>(n, 'R'));

    // special hard-coded 2x2 case
    if (n == 2 && spcells == 3) {
        grid = {
            {'U', 'D'},
            {'R', 'L'}
        };
    } else {
        // distribute special cells column by column
        vector<pair<int,int>> columns;
        int col = 0;
        int rem = spcells;

        // fill as many full/partial columns as possible
        while (rem >= 2) {
            int take = min(n, rem);
            columns.push_back({col, take});
            col++;
            rem -= take;
        }

        // handle leftover 1 special cell
        if (rem == 1) {
            for (int i = (int)columns.size() - 1; i >= 0; i--) {
                if (columns[i].second >= 3) {
                    columns[i].second--;
                    columns.push_back({col, 2});
                    col++;
                    break;
                }
            }
        }

        // fill the grid according to column info
        for (auto [c, t] : columns) {
            for (int i = 0; i < t - 1; i++) {
                grid[i][c] = 'D';
            }
            if (t >= 2) {
                grid[t - 1][c] = 'U';
            }
            // remaining cells in column stay 'R'
        }
    }

    // print the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j];
        }
        cout << "\n";
    }
}


int main()
{
    FAST_IO;

    int t; cin>>t; 
    while (t--) solve();
    
    //For single test case, comment the above 3 lines and uncomment below line
    //solve();

    return 0;
}

/*
  💡 Solution Logic:
  - We need to construct an n×n grid of arrow directions so that exactly k cells 
    lead to escaping the maze.
  - Let total cells = n², and define spcells = n² - k, representing the number 
    of “trapped” or non-escaping cells.
  - If spcells = 1, it is impossible to create a valid structure → print "NO".
  - Otherwise:
      • Initialize the grid with all 'R' (right arrows — guaranteed escape).
      • Fill some columns with 'D' and 'U' arrows to create loops that prevent escape.
      • Distribute the trapped cells column by column.
      • Handle the edge case when one cell remains (rem == 1) by splitting a 
        previously filled column to maintain consistency.
      • Finally, print "YES" and the constructed grid.
  - This ensures exactly k escaping cells and maintains valid arrow directions.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
