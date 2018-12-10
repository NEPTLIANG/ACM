#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
//HD2602
//Unsloved

struct Bone
{
	int value ;
	int vol ;
	double apo ;
} bone[10000] ;

bool cmp(Bone a , Bone b)
{
	return a.apo>b.apo ;
}

int main()
{
	int T ;
	int N , V ;
	int sum ;
	int i ;
	scanf("%d" , &T) ;
	while ( T-- )
	{
		sum = 0 ;
		memset(bone , 0 , sizeof(bone)) ;
		scanf("%d %d" , &N , &V) ;
		for ( i=0 ; i<N ; i++ )
		{
			scanf("%d" , &bone[i].value) ;
		}
		for ( i=0 ; i<N ; i++ )
		{
			scanf("%d" , &bone[i].vol) ;
			bone[i].apo = (double)bone[i].value / (double)bone[i].vol ;
		}
		sort(bone , bone+N , cmp) ;
		for ( i=0 ; i<N && V ; i++ )
		{
			if ( V>=bone[i].vol )
			{
				V -= bone[i].vol ;
				sum += bone[i].value ;
			}
		}
		printf("%d\n" , sum) ;
	}
	return 0 ;
}
