//============================================================================
// 785A. Anton and Polyhedrons - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Sums the total number of faces of given 3D polyhedrons
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

    int n, faces = 0;
    cin >> n;
    string t = "Tetrahedron";
    string c = "Cube";
    string o = "Octahedron";
    string d = "Dodecahedron";
    string i = "Icosahedron";

    while (n--)
    {
        string poly;
        cin >> poly;

        if (poly == t)
            faces += 4;
        else if (poly == c)
            faces += 6;
        else if (poly == o)
            faces += 8;
        else if (poly == d)
            faces += 12;
        else if (poly == i)
            faces += 20;
    }

    cout << faces << endl;
    return 0;
}

/*
  ## 💡 Solution Logic
  - Each polyhedron type has a fixed number of faces.
  - Read the number of polyhedrons `n`.
  - For each polyhedron name, add its face count to `faces`.
  - Output the total number of faces.
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
