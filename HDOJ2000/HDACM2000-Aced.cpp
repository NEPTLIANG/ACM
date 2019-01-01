#include <iostream>
using namespace std ;
//HDOJ2000
//Accepted

int main()
{
    char a, b, c, d, tmp;
    while ( scanf("%c%c%c",&a,&b,&c)!=EOF )
    {
        scanf("%c", &d);
        if ( a>b )
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        if ( b>c )
        {
            tmp = b;
            b = c;
            c = tmp;
        }
        if ( a>b )
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        printf("%c %c %c\n", a, b, c);
    }
    return 0;
}
