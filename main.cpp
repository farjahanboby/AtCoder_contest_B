#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1, t;
    cin>>t;
    int a[t];
    for(i=1;i<=t;i++){
        cin>>a[i];
    }
    for(i=2;i<=t;i++){
          if(a[j]<a[i])
          j=i;
    }
      cout<<j;
    return 0;
}
