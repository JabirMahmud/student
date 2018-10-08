#include<bits/stdc++.h>
using namespace std;
#define sz 20
char str[sz];
int main()
{
    int i,j,k,l,n;
    scanf("%s",str);
    l=strlen(str);
    bool key=1;
    i=0;
    j=l-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            key=0;
            break;
        }
        i++;
        j--;
    }
    if(key) printf("%s is a palindrome",str);
    else printf("%s is not a palindrome",str);
    return 0;
}
