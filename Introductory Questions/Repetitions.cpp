#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    char s[10000000];
    gets(s);
    char pc = s[0];
    int l = 1,i;
    int maxl = 0;
    for(i=1;i<strlen(s);i++)
    {
        if(s[i]!=pc)
        {
            if(maxl<l)
                maxl = l;
            l = 1;
            pc = s[i];
        }
        else
        {
            l++;
        }
    }
    if(maxl<l)
        maxl = l;
    cout << maxl;
}
