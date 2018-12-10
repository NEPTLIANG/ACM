#include <iostream>
using namespace std;
//HD2602 v2.0 Code Refactoring Edition
//Unsloved

int main()
{
    int t ;  //t cases
    int n , v ;  //n bones, volume of bag
    static int val[1100] , vol[1100] ;  //Value and volume of every bone
    static int max[1100][1100] ;  //Table of maximum result
    scanf("%d" , &t) ;
    while ( t-- )
    {
        scanf("%d %d" , &n , &v) ;
        for ( int i=0 ; i<n ; i++ )
        {
            scanf("%d" , &val[i]) ;
        }//for(i)
        for ( int i=0 ; i<n ; i++ )
        {
            scanf("%d" , &vol[i]) ;
        }//for(i)
        for ( int i=0 ; i<n ; i++ )
        {
            for ( int j=0 ; j<v ; j++ )
            {
                if ( max[i-1][j] > max[i-1][j-vol[i]]+val[i] )
