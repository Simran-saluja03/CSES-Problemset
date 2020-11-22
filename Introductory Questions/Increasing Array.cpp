#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    long long int n,i,turn=0;
    vector <long int> a;
    cin >> n;
    a.resize(n);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i]< a[i-1])
        {
            turn = turn + a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }
    cout << turn;
}
