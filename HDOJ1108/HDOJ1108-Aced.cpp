#include <iostream>
using namespace std;
//HDOJ1108
//Accepted

int main()
{
    int a , b ;
    int c , d ;
    int e ;
    while ( scanf("%d %d" , &a , &b)!=EOF && b )  //&&
    {
        if ( a>b ) { c=a ; d=b ; }
        else { c=b ; d=a ; }
        while( c%d )
        {
            e = c%d ;
            c = d ;
            d = e ;
        }
        printf("%d\n" , (a*b)/d) ;
    }
}
