#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    vector<int> v;
    cin >> n;
    v.resize(n-1);
    for(i=0;i<n-1;i++)
        cin >>v[i];
    sort(v.begin(),v.begin()+(n-1));

    v.resize(n);
    for(i=0;i<n;i++)
    {
        if(v[i]!=i+1)
        {
            cout << i+1;
            break;
        }
    }
}
