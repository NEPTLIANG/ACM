#include <iostream>
using namespace std;
//HD2602 v2.0 Code Refactoring Edition
//Accepted

int main()
{
    int t ;  //t cases
    int n , v ;  //n bones, volume of bag
    static int val[1100] , vol[1100] ;  //Value and volume of every bone
    static int max[1100][1100] ;  //Table of maximum result
    //int res ;  //Result of the problem
    scanf("%d" , &t) ;
    while ( t-- )
    {
        scanf("%d %d" , &n , &v) ;
        for ( int i=1 ; i<=n ; i++ )
        {
            scanf("%d" , &val[i]) ;
        }//for(i)
        for ( int i=1 ; i<=n ; i++ )
        {
            scanf("%d" , &vol[i]) ;
        }//for(i)
        for ( int i=1 ; i<=n ; i++ )  //Fill in the table
        {
            for ( int j=0 ; j<=v ; j++ )
            {
                if ( j>=vol[i] )  //!
                {
                    max[i-1][j]>max[i-1][j-vol[i]]+val[i] ? max[i][j]=max[i-1][j] : max[i][j]=max[i-1][j-vol[i]]+val[i] ;
                }
                else
                {
                    max[i][j] = max[i-1][j] ;
                }//if(>=)
            }//for(j)
        }//for(i)
        //v ? res=max[n][v] : res=max[n][v] ;
        printf("%d\n" , max[n][v]) ;  //!
    }//while(--)
}//main()
