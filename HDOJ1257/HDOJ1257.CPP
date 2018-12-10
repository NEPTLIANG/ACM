#include <iostream>
using namespace std;
//HD1257

/*sortType(int a , int b)
{
	if ( a>b ) { return*/

int main()
{
	int n , sum , height , status[10000] ;
	while ( scanf("%d" , &n)!=EOF )
	{
		sum = 0 ;
		status[0] = -1 ;
		memset(status,0,sizeof(status)) ;
		while ( n-- )
		{
			scanf("%d" , &height) ;
			if ( height>status[sum] )
			{
				status[++sum] = height ;
				//sort(status,status+sum,sortType) ;
			}
			else
			{
				for ( int j=1 ; j<=sum ; j++ )
				{
					if ( height<status[j] )
					{
						status[j] = height ;
						break ;
					}
				}
			}
			//if ( height[i] > height[i-1] ) { sum++ ; }
		}//for
		printf("%d\n" , sum) ;
	}//while
}//main()