#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
//HD1009

struct Room
{
	int xing ;
	int jia ;
	double xjb ;
} room[10000] ;

bool sortType(Room a , Room b)
{
	return a.xjb>b.xjb ;
}

int main()
{
	int m , n ;
	int i ;
	double sum ;
	while ( 1 )
	{
		sum = 0 ;
		memset(room , 0 , sizeof(room)) ;
		scanf("%d %d" , &m , &n) ;
		if ( m==-1 && n==-1 ) { break ; }
		for ( i=0 ; i<n ; i++ )
		{
			scanf("%d %d" , &room[i].xing , &room[i].jia) ;
			room[i].xjb = (double)room[i].xing / (double)room[i].jia ;
		}
		sort(room , room+n , sortType) ;
		for ( i=0 ; i<n && m ; i++ )
		{
			if ( m > room[i].jia )
			{
				sum += room[i].xing ;
				m -= room[i].jia ;
			}
			else
			{
				sum	+= (m/(double)room[i].jia) * room[i].xing ;
				m = 0 ;
			}
		}
		printf("%.3f\n" , sum) ;
	}
	return 0 ;
}