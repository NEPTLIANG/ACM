#include <iostream>
#include <vector>
using namespace std;
//HD1021
//Accepted

int main()
{
    int a , end=1 ;  //end=?
    vector<int> res ;
    //res[0] = 7%3 ; res[1] = 11%3 ;
    res.push_back(7%3) ; res.push_back(11%3) ;  //.push_back()
    //while ( 1 )
    while ( scanf("%d" , &a)!=EOF )  //!=EOF
    {
        //res.clear() ;
        //res.push_back(7%3) ; res.push_back(11%3) ;
        //int a ;
        //scanf("%d" , &a) ;
        if ( a>end )
        {
            for ( int i=end+1 ; i<=a ; i++ )  //+1;<=
            {
                //if ( res[i] = (res[i-1]+res[i-2])%3 ) { printf("no\n") ; }
                res.push_back((res[i-1]+res[i-2])%3) ;
                //if ( res[i] ) { printf("no\n") ; }
                //else { printf("yes") ; }
            }//for(i)
            end = a ;
        }//if(>)
        //b = a+1 ;
        if ( res[a] ) { printf("no\n") ; }
        else { printf("yes\n") ; }
    }//while(!=)
    return 0 ;
}//main()
