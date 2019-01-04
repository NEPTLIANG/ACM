#include <iostream>
#include <string>
using namespace std;
//LN1937
//Unsloved

int main()
{
    string name ;
    int a , b , res ;
    char opChar ;
    while ( scanf("%s : %d%c%d=%d", &name, &a, &opChar, &b, &res)!=EOF )
    {
        int sta=0 ;
        switch ( opChar )
        {
            case '+' : if ( a+b==res ) { sta = 1 ; }
            case '-' : if ( a-b==res ) { sta = 1 ; }
            case '*' : if ( a*b==res ) { sta = 1 ; }
            case '/' : if ( a/b==res ) { sta = 1 ; }
        }
        if ( sta==1 ) { printf("Orz %s\n" , name) ; }
        else { printf("Are your math teacher WTO?\n") ; }
    }
    return 0 ;
}
