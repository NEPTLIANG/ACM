#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#define MAXSIZE 10000

int main()
{
    char tmp;
    int tmpInt;
    scanf("%d" , &tmpInt);
    while ( scanf("%c",&tmp)!=EOF )
    {
        char a[MAXSIZE];
        int sum=0;
        fgets(a , MAXSIZE , stdin);
        for ( int i=0 ; i<strlen(a) ; i++ )
        {
            if ( a[i]>='0' && a[i]<='9' ) { sum++; }
        }
        printf("%d\n", sum);
    }
    return 0;
}
