#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    long int M = 1000000007;
    long int ans=1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        ans = (ans*2)%M ;
    }
    cout << ans;
}
