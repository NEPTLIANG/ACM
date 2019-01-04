#include <iostream>
using namespace std ;
#define MAX 1000010
//HD1032 v2.0
//Unsloved

int main()
{
    int a , b ;
    while ( scanf("%d %d" , &a ,&b)!=EOF )
    {
        //static int sum ;
        static int res[MAX] ;
        //for ( int i=1 ; i<MAX ; i++ )
        for ( int i=MAX-1 ; i>0 ; i-- )
        {
            int sum=1 ;
            long long n=i ;
            while ( n!=1 )
            {
                if ( n<MAX )
                {
                    if ( !res[n] )
                    {
                        if ( n%2==1 ) { n = 3*n+1 ; }
                        else { n = n/2 ; }
                        sum++ ;
                    }
                    else
                    {
                        sum += (res[n]-1) ;
                        break ;
                    }
                }
                else
                {
                    //continue ;
                    //break ;
                    if ( n%2==1 ) { n = 3*n+1 ; }
                    else { n = n/2 ; }
                }
            }
            res[i] = sum ;
        }
        int c , d ;
        //if ( a>b ) { c = a ; d = b ; }
        if ( a<b ) { c = a ; d = b ; }
        else { c = b ; d = a ; }
        //static int maxSum ;
        int maxSum=0 ;
        for ( int i=c ; i<=d ; i++ )
        {
            if ( maxSum < res[i] ) { maxSum = res[i] ; }
        }
        printf("%d %d %d\n" , a , b , maxSum) ;
    }
    return 0 ;
}
