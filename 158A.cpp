//A. Next Round - Codeforce

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int p = 0;
    int score = arr[k-1];

    for(int i=0 ; i<n; i++)
    {
        if((arr[i] >= score) && arr[i] > 0)
        {
            p++;
        }
        else if(arr[0] == 0)
        {
            p = 0;
            break;
        }
        else
        {
            break;
        }
    }
    cout<<p<<endl;

    return 0;
}


/*

## 💡 Solution Logic

traverse whole array comparing with the score of k-th position and increment p
*/
