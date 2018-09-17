#include <iostream>
#include <cstdio> 

//这个没有研究完成！！！！！

using namespace std ;
char b[50] ;
int a[50] , m = 1 , ans;
main()
{
    for( int i = 1 ; i <= 13 ; i ++ )
    {
         cin >> b[i] ;
    }
    for( int i = 1 ; i <= 13 ; i ++ )
    {
        if( i == 2 or i == 6 or i == 12 ) continue ; 
        a[ i ] = b[ i ] - '0' ; 
    }
    for( int i = 1 ; i <= 13 ; i ++ )
    {
        if( i == 2 or i == 6 or i == 12 or i == 13 ) continue ; 
        ans += a[i] * m ;
        m ++ ;
    }
    if( ans % 11 == 10 )
    {
        if( b[13] == 'X' )
        {
            cout<< "Right";
            return 0 ;
        }
        else
        {
            for( int i = 1 ; i <= 12 ; i ++ ) cout<< b[i] ;
            cout<< "X" ;
            return 0 ;
        }
    }
    if( ans % 11 == a[13] ){
         cout<< "Right " ;
         return 0 ;
    }else
    {
        for( int i = 1 ; i <= 12 ; i ++ ) cout<< b[i] ;
        cout<< ans % 11 ; 
         return 0 ;
    }
  return 0 ; 
} 