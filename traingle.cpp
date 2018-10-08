#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && a==c)
        cout<<"somo bahu";
    else if((a==b) || (a==c) || (b==c))
        cout<<"somo di-babu";
    else cout<<"bisom bahu";
    return 0;
}
