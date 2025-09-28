//============================================================================
// 1399A. Remove Smallest - Codeforces
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Check whether a list of integers can be made equal by removing
//              elements such that the difference between any two adjacent
//              elements is at most 1.
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

#define InputForTestCase int t; cin>>t;
#define Input int n; cin>>n;

// Debug (disabled in submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

int main()
{
    FAST_IO;
    InputForTestCase
    while(t--)
    {
        Input
        int a[n];
        bool flag = true;
        for(int i=0; i <n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1; i++)
        {
            if((a[i+1] - a[i]) > 1)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

/*
  ## 💡 Solution Logic
  If any two adjacent elements in the sorted array have a difference greater than 1,
  output "NO" (cannot remove to satisfy the condition).
  Else, output "YES" (possible to remove and meet the constraint).
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
