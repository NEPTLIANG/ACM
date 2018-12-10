#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//HD1070

struct Milk
{
	string S ;
	int P , V ;
	double vpp ;
} milk[10000] ;

bool sortType(Milk a , Milk b)
{
	if ( a.vpp > b.vpp ) { return 1 ; }
	else { return 0 ; }
}//sortType()

bool sortbyVol(Milk a , Milk b)
{
	if ( a.V > b.V ) { return 1 ; }
	else { return 0 ; }
}//sortType()

int main()
{
	int i , T , N ;
	double tmp ;
	scanf("%d" , &T) ;
	while ( T-- )
	{
		memset(milk , 0 , sizeof(milk)) ;
		scanf("%d" , &N);
		for ( i=0 ; i<N ; i++ )
		{
			cin >> milk[i].S >> milk[i].P >> milk[i].V ;
			if ( milk[i].V>5*200 )
			{
				milk[i].vpp = 5.0/milk[i].P ;
			}
			else
			{
				tmp = milk[i].V/200 ;
				milk[i].vpp = tmp/milk[i].P ;
			}
			//milk[i].vpp = milk[i].V/milk[i].P ;
		}//for(i)
		sort(milk , milk+N , sortType) ;
		int same=1 ;
		for ( i=0 ; i<N ; i++ )
		{
			if ( milk[i].vpp == milk[i+1].vpp )
			{	
				same++ ;
			}//if(=)
			else
			{
				sort(milk,milk+same,sortbyVol) ;
				break ;
			}//if(=)
		}//for(i)
		if ( milk[0].V>=200 )
		{
			cout << milk[0].S << endl ;
		}//if(<)
	}//while(!=)
}//main()