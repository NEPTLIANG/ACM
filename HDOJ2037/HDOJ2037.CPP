#include <iostream>
#include <algorithm>
using namespace std;
//HD2037

struct Prog
{
	int Ti_s ;
	int Ti_e ;
} prog[10000] ;

int sortType(Prog a , Prog b)
{
	if ( a.Ti_e<b.Ti_e ) { return 1 ; }
	else { return 0 ; }
}

int main()
{
	int i , n , sum , flag ;
	 ;
	while ( scanf("%d" , &n) && n )
	{
		sum = 1 ;
		flag = 0 ;
		memset(prog , 0 , sizeof(prog)) ;
		for ( i=0 ; i<n ; i++ )
		{
			scanf("%d %d" , &prog[i].Ti_s , &prog[i].Ti_e) ;
		}
		sort(prog , prog+n , sortType) ;
		for ( i=0 ; i<n ; i++ )
		{
			if ( prog[i].Ti_s >= prog[flag].Ti_e )
			{
				sum++ ;
				flag = i ;
			}
		}
		printf("%d\n" , sum) ;
	}
	return 0 ;
}