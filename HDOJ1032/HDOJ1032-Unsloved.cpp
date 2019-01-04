#include <iostream>
using namespace std ;
#define MAX 1000010
//HD1032
//Unsloved

//static int res[MAX] ;

int main()
{
    int a , b ;
    while ( scanf("%d %d" , &a ,&b)!=EOF )
    {
        //static int sum ;
        //int sum=0 ;
        static int res[MAX] ;
        for ( int i=1 ; i<MAX ; i++ )
        {
            //int n=i ;
            __int64_t n=i , sum=1 ;
            //int sum=1 ;
            while ( n!=1 )
            {
                if ( n%2==1 ) { n = 3*n+1 ; }
                else { n = n/2 ; }
                sum++ ;
            }
            res[i] = sum ;
        }
        int c , d ;
        //if ( a>b ) { c = a ; d = b ; }
        if ( a<b ) { c = a ; d = b ; }
        else { c = b ; d = a ; }
        //static int maxSum ;
        int maxSum=0 ;
        //for ( int i=c ; i<=d ; i++ )
        for ( int i=c+1 ; i<d ; i++ )
        {
            if ( maxSum < res[i] ) { maxSum = res[i] ; }
        }
        printf("%d %d %d\n" , a , b , maxSum) ;
    }
    return 0 ;
}
