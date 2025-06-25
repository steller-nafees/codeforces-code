    //============================================================================
    // 381A. Sereja and Dima - Codeforces
    // Author: H M Nafees N Islam
    // Institution: North South University (NSU), CSE
    // Description: Simulates a game where two players pick the largest remaining
    //              number from either end of the array, alternating turns.
    //              Calculates the final score of both players.
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

    int main()
    {
        FAST_IO;
        int n;
        cin >> n;
        int s = 0, d = 0, l=0, r=n-1;
        bool flip = true;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];


        while(l <= r)
        {
            if(flip)
            {
                if(a[l] > a[r])
                {
                    s += a[l];
                    l++;
                }
                else
                {
                    s += a[r];
                    r--;
                }

            }
            else
            {
                if(a[l] > a[r])
                {
                    d += a[l];
                    l++;
                }
                else
                {
                    d += a[r];
                    r--;
                }

            }
            flip = !flip;
        }
        cout << s << " " << d << endl;

        return 0;
    }

/*
  ##  Solution Logic
  - Input `n` integers representing card values in a row.
  - Two players (Sereja and Dima) take turns picking the larger value from
    either the left or right end of the current list.
  - The player who starts first is Sereja.
  - Use two pointers (`l` and `r`) to represent the current ends of the list.
  - Alternate turns using a boolean flag `flip`, and accumulate scores.
  - Print the final scores of both players.
*/


    /*
      Alhamdulillah, problem solved!
      الحمد لله الذي بنعمته تتم الصالحات
    */
