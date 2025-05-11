//50A. Domino piling - Codeforces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M,N;
    cin>>M>>N;

    int squares = M*N;

    int dominoes = squares / 2;
    cout<<dominoes<<endl;
    return 0;
}


/*

## 💡 Solution Logic

integer division of M*N by 2
*/
