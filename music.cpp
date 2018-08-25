#include <bits/stdc++.h>
#include <windows.h>
#define qdo 262
#define qre 294
#define qmi 330     //q前缀为低音，1后缀为高音，s前缀为半音阶
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define doo 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
using namespace std;

int main() {
    int pai = 400 , ban = 200 , spai = 100;
    Sleep( 3 * pai );
    Beep( mi , ban );
    Beep( so , ban );

    Beep( la , ban );
     Sleep( 2 * ban );
     Beep( so , ban );
    Beep( la , ban );
    Sleep( 2 * ban );
    Beep( so , ban );

    Beep( la , ban );
    Beep( do1 , ban );
    Beep( so , ban );
    Beep( la , ban );
    Beep( mi , ban );
    Sleep( ban );
    Beep( mi , ban );
    Beep( so , ban );

    Beep( la , ban );
    Sleep( 2 * ban );
    Beep( so , ban );
    Beep( la , ban );
    Sleep( 2 * ban );
    Beep( so , ban );

    Beep( la , ban );
    Beep( mi1 , ban );
    Beep( do1 , ban );
    Beep( re1 , ban );
    Beep( la , ban );
    Sleep( ban );
    Beep( mi , ban );
    Beep( so , ban );

    Beep( la , ban );
     Sleep( 2 * ban );
     Beep( so , ban );
    Beep( la , ban );
    Sleep( 2 * ban );
    Beep( so , ban );

    Beep( la , ban );
    Beep( do1 , ban );
    Beep( so , ban );
    Beep( la , ban );
    Beep( mi , ban );
    Beep( so , ban );
    Beep( doo , ban );
    Beep( re , ban );

    Beep( mi , pai );
    Beep( do1 , pai );
    Beep( la , pai );
    Beep( mi1 , pai );

    Beep( re1 , ban );
    Beep( mi1 , spai );
    Beep( re1 , spai );
    Beep( do1 , ban );
    Beep( re1 , ban );
    Beep( la , pai );
    Sleep( pai );

    for( int i = 1 ; i <= 2 ; i ++ )
    {
        Beep( la , pai );
        Beep( la , pai );
        Beep( la , pai );
        Beep( la , spai );
        Beep( do1 , spai );
        Beep( re1 , spai );
        Beep( mi1 , spai );

        Beep( la , pai );
        Beep( la , pai );
        Beep( la , ban );
        Beep( so , ban );
        Beep( so , ban );
        Beep( la , ban );

        Beep( la , pai );
        Beep( la , pai );
        Beep( la , pai );
        Beep( la , spai );
        Beep( do1 , spai );
        Beep( re1 , spai );
        Beep( mi1 , spai );

        Beep( la , pai );
        Beep( la , pai );
        Beep( la , ban );
        Beep( fa1 , ban );
        Beep( fa1 , ban );
        Beep( mi1 , ban );

        Beep( la , pai );
        Beep( la , pai );
        Beep( la , pai );
        Beep( la , spai );
        Beep( do1 , spai );
        Beep( re1 , spai );
        Beep( mi1 , spai );

        Beep( la , pai );
        Beep( la , pai );
        Beep( la , ban );
        Beep( so , ban );
        Beep( so , ban );
        Beep( la , ban );

        Beep( la , pai );
        Beep( la , pai );
        Beep( la , pai );
        Beep( la , spai );
        Beep( do1 , spai );
        Beep( re1 , spai );
        Beep( mi1 , spai );

        Beep( la1 , pai + ban );
        Beep( so , ban );
        Beep( so , ban );
        Beep( la , ban );
        Beep( la , pai );

        Sleep( pai + ban );
        Beep( la , ban );
        Beep( la , ban );
        Beep( so , spai );
        Beep( so , spai );
        Beep( so , ban );
        Beep( la , ban );

        Beep( so , ban );
        Beep( mi , ban );
        Beep( mi , ban );
        Beep( so , spai );
        Beep( mi , spai );
        Beep( mi , pai );
        Sleep( ban );

        Sleep( ban + pai );
        Beep( la , ban );
        Beep( la , ban );
        Beep( so , ban );
        Beep( la , ban );
        Beep( si , ban );

        Beep( do1 , pai );
        Beep( si , pai );
        Beep( la , ban );
        Beep( si , spai );
        Beep( la , spai );
        Beep( so , pai );

        Sleep( pai + ban );
        Beep( la , ban );
        Beep( la , ban );
        Beep( so , ban );
        Beep( so , ban );
        Beep( la , spai );
        Beep( so , spai );

        Beep( so , ban );
        Beep( mi , ban );
        Beep( mi , ban );
        Beep( so , spai );
        Beep( mi , spai );
        Beep( mi , pai );
        Sleep( ban );
        Beep( so , ban );

        Beep( so , ban );
        Beep( la , ban );
        Sleep( ban );
        Beep( so , ban );
        Beep( so , ban );
        Beep( la , ban );
        Sleep( ban );
        Beep( la , spai );
        Beep( si , spai );

        Beep( do1 , pai );
        Beep( re1 , pai );
        Beep( la , ban );
        Beep( mi , ban );
        Beep( mi , ban );
        Beep( so , ban );

        Beep( so , ban );
        Beep( la , ban );
        Sleep( ban );
        Beep( mi1 , ban );
        Beep( re1 , pai );
        Sleep( ban );
        Beep( la , ban );

        Sleep( ban );
        Beep( la , ban );
        Beep( la , ban );
        Beep( mi1 , ban );
        Beep( re1 , pai );
        Sleep( pai );

        Sleep( ban );
        Beep( re1 , ban );
        Beep( re1 , ban );
        Beep( sdo1 , ban );
        Beep( re1 , ban );
        Beep( do1 , spai );
        Beep( la , spai );
        Beep( la , ban );
        Beep( so , ban );

        Beep( so , ban );
        Beep( so , ban );
        Beep( so , ban );
        Beep( la , ban );
        Beep( la , ban );
        Beep( mi , ban );
        Beep( mi , ban );
        Beep( so , ban );

        Beep( so , ban );
        Beep( la , ban );
        Sleep( ban );
        Beep( mi1 , ban );
        Beep( re1 , pai );
        Sleep( ban );
        Beep( la , ban );

        Sleep( ban );
        Beep( la , ban );
        Beep( la , ban );
        Beep( mi1 , ban );
        Beep( re1 , pai );
        Sleep( pai );

        Sleep( ban );
        Beep( re1 , ban );
        Beep( re1 , ban );
        Beep( sdo1 , ban );
        Beep( re1 , ban );
        Beep( do1 , spai );
        Beep( la , spai );
        Beep( la , spai );
        Beep( mi , spai );
        Beep( so , ban );

        Beep( so , ban );
        Beep( la , ban );
        Beep( la , ban );
        Beep( so , ban );
        Beep( la , pai );
        Sleep( ban );
        Beep( mi , spai );
        Beep( so , spai );

        Beep( la , ban );
        Beep( la , ban );
        Beep( la , ban );
        Beep( mi1 , ban );
        Beep( mi1 , pai );
        Sleep( ban );
        Beep( si , spai );
        Beep( do1 , spai );

        Beep( re1 , ban );
        Beep( do1 , spai );
        Beep( re1 , spai );
        Beep( re1 , ban );
        Beep( mi1 , ban );
        Beep( la , pai );
        Sleep( ban );
        Beep( so , spai );
        Beep( so , spai );

        Beep( la , pai );
        Beep( mi1 , ban + spai );
        Beep( mi1 , spai );
        Beep( re1 , ban );
        Beep( do1 , ban );
        Beep( la , ban );
        Beep( so , ban );

        Beep( la , ban + spai );
        Beep( la , spai );
        Beep( la , ban );
        Beep( do1 , ban );
        Beep( re1 , pai );
        Sleep( pai );

        Beep( la , ban );
        Beep( la , spai );
        Beep( la , spai );
        Beep( la , ban );
        Beep( so , spai );
        Beep( so , spai );
        Beep( la , ban );
        Beep( mi1 , ban );
        Sleep( ban );
        Beep( do1 , ban );

        Beep( re1 , ban );
        Beep( do1 , spai );
        Beep( re1 , spai );
        Beep( re1 , ban );
        Beep( mi1 , ban );
        Beep( mi1 , pai );
        Sleep( ban );
        Beep( so , ban );

        Beep( la , ban );
        Beep( do1 , ban );
        Sleep( ban );
        Beep( so , ban );
        Beep( la , ban );
        Beep( mi1 , ban );
        Sleep( ban );
        Beep( mi1 , spai );
        Beep( re1 , spai );

        Beep( do1 , ban );
        Beep( si , ban );
        Beep( la , ban );
        Beep( so , ban );
        Beep( so , ban );
        Beep( la , pai );
        Sleep( ban );
    }
    Sleep( ban );
    Beep( la , ban );
    Beep( so , ban );
    Beep( mi , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( qso , ban );

    Beep( qla , ban );
    Beep( qso , ban );
    Beep( qla , ban );
    Sleep( ban );
    Beep( qla , pai );
    Sleep( pai );

    Beep( qla , pai );
    Sleep( pai );
    Beep( qsi , pai );
    Sleep( pai );

    Beep( qla , spai );
    Beep( qsi , spai );
    Beep( qla , ban );
    Beep( qla , spai );
    Beep( qsi , spai );
    Beep( qla , ban );
    Beep( doo , pai );
    Sleep( pai );

    Beep( qsi , ban );
    Beep( la , ban );
    Beep( so , ban );
    Beep( mi , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( qso , ban );

    Beep( qla , ban );
    Beep( qso , ban );
    Beep( qla , ban );
    Sleep( ban );
    Beep( qla , pai );
    Sleep( pai );

    Beep( qla , pai );
    Sleep( pai );
    Beep( qsi , pai );
    Sleep( pai );

    Beep( qla , spai );
    Beep( qsi , spai );
    Beep( qla , ban );
    Beep( qla , spai );
    Beep( qsi , spai );
    Beep( qla , ban );
    Beep( doo , pai );
    Sleep( pai );

    Beep( qsi , pai );
    Beep( qso , pai );
    Beep( la , spai );
    Beep( so , spai );
    Beep( mi , spai );
    Beep( re , spai );
    Beep( doo , spai );
    Beep( qla , spai );
    Beep( re , spai );
    Beep( doo , spai );

    Beep( la , ban );
    Beep( so , ban );
    Beep( la , ban );
    Beep( so , ban );
    Beep( do1 , ban );
    Beep( si , ban );
    Beep( la , ban );
    Beep( so , ban );

    Beep( so , ban );
    Beep( mi , ban );
    Beep( re , ban );
    Beep( doo , ban );
    Beep( mi , ban );
    Beep( re , ban );
    Beep( doo , spai );
    Beep( qla , spai );
    Beep( qso , spai );
    Beep( qla , spai );

    Beep( qso , pai + ban );
    Beep( qmi , spai );
    Beep( qre , spai );
    Beep( qmi , pai + pai );

    Beep( qre , spai );
    Beep( qmi , spai );
    Beep( qfa , spai );
    Beep( qso , spai );
    Beep( qla , spai );
    Beep( qsi , spai );
    Beep( doo , spai );
    Beep( re , spai );
    Beep( re , spai );
    Beep( mi , spai );
    Beep( fa , spai );
    Beep( so , spai );
    Beep( la , spai );
    Beep( si , spai );
    Beep( do1 , spai );
    Beep( re1 , spai );

    Beep( mi1 , ban );
    Beep( mi1 , pai + ban );
    Beep( mi1 , pai );
    Beep( re1 , ban );
    Beep( do1 , ban );

    Beep( si , ban );
    Beep( do1 , pai );
    Beep( re1 , ban );
    Beep( si , ban );
    Beep( so , pai );
    Beep( re , ban );

    Beep( re1 , pai + ban );
    Beep( do1 , ban );
    Beep( si , pai );
    Beep( so , pai );

    Beep( si , pai + pai );
    Beep( la , ban );
    Beep( mi , ban );
    Beep( mi , ban );
    Beep( so , ban );

    Beep( so , ban );
    Beep( la , ban );
    Sleep( ban );
    Beep( mi1 , ban );
    Beep( re1 , pai );
    Sleep( ban );
    Beep( la , ban );

    Sleep( ban );
    Beep( la , ban );
    Beep( la , ban );
    Beep( mi1 , ban );
    Beep( re1 , pai );
    Sleep( pai );

    Sleep( ban );
    Beep( re1 , ban );
    Beep( re1 , ban );
    Beep( sdo1 , ban );
    Beep( re1 , ban );
    Beep( do1 , spai );
    Beep( la , spai );
    Beep( la , ban );
    Beep( mi , spai );
    Beep( so , spai );

    Beep( so , ban );
    Beep( la , ban );
    Beep( la , ban );
    Beep( so , ban );
    Beep( la , pai );
    Sleep( ban );
    Beep( mi , spai );
    Beep( so , spai );

    Beep( la , ban );
    Beep( la , ban );
    Beep( la , ban );
    Beep( mi1 , ban );
    Beep( mi1 , pai );
    Sleep( ban );
    Beep( si , spai );
    Beep( do1 , spai );

    Beep( re1 , ban );
    Beep( do1 , spai );
    Beep( re1 , spai );
    Beep( re1 , ban );
    Beep( mi1 , ban );
    Beep( la , pai );
    Sleep( ban );
    Beep( so , spai );
    Beep( so , spai );

    Beep( la , pai );
    Beep( mi1 , ban + spai );
    Beep( mi1 , spai );
    Beep( re1 , ban );
    Beep( do1 , ban );
    Beep( la , ban );
    Beep( so , ban );

    Beep( la , ban + spai );
    Beep( la , spai );
    Beep( la , ban );
    Beep( do1 , ban );
    Beep( re1 , pai );
    Sleep( pai );

    Beep( la , ban );
    Beep( la , spai );
    Beep( la , spai );
    Beep( la , ban );
    Beep( so , spai );
    Beep( so , spai );
    Beep( la , ban );
    Beep( mi1 , ban );
    Sleep( ban );
    Beep( do1 , ban );

    Beep( re1 , ban );
    Beep( do1 , spai );
    Beep( re1 , spai );
    Beep( re1 , ban );
    Beep( mi1 , ban );
    Beep( mi1 , pai );
    Sleep( ban );
    Beep( mi1 , ban );

    Beep( re1 , ban );
    Beep( re1 , ban );
    Sleep( ban );
    Beep( do1 , ban );
    Beep( re1 , ban );
    Beep( re1 , ban );
    Sleep( ban );
    Beep( mi1 , spai );
    Beep( re1 , spai );

    Beep( do1 , ban );
    Beep( si , ban );
    Beep( la , ban );
    Beep( so , ban );
    Beep( so , ban );
    Beep( la , ban );
    Sleep( ban );
    Beep( so , ban );

    Beep( la , ban );
    Beep( do1 , ban );
    Sleep( ban );
    Beep( so , ban );
    Beep( la , ban );
    Beep( so1 , ban );
    Sleep( ban );
    Beep( mi1 , spai );
    Beep( re1 , spai );

    Beep( re1 , ban );
    Beep( re1 , ban );
    Beep( mi1 , ban );
    Beep( so1 , ban );
    Beep( so1 , pai );
    Beep( la1 , pai );

    Beep( la , pai );
    Beep( la , pai );
    Beep( la , pai );
    Beep( la , spai );
    Beep( do1 , spai );
    Beep( re1 , spai );
    Beep( mi1 , spai );

    Beep( la , pai );
    Beep( la , pai );
    Beep( la , ban );
    Beep( so , ban );
    Beep( so , ban );
    Beep( la , ban );

    Beep( la , pai );
    Beep( la , pai );
    Beep( la , pai );
    Beep( la , spai );
    Beep( do1 , spai );
    Beep( re1 , spai );
    Beep( mi1 , spai );

    Beep( la , pai );
    Beep( la , pai );
    Beep( la , ban );
    Beep( fa1 , ban );
    Beep( fa1 , ban );
    Beep( mi1 , ban );

    Beep( la , pai );
    Beep( la , pai );
    Beep( la , pai );
    Beep( la , spai );
    Beep( do1 , spai );
    Beep( re1 , spai );
    Beep( mi1 , spai );

    Beep( la , pai );
    Beep( la , pai );
    Beep( la , ban );
    Beep( so , ban );
    Beep( so , ban );
    Beep( la , ban );

    Beep( la , pai );
    Beep( la , pai );
    Beep( la , pai );
    Beep( la , spai );
    Beep( do1 , spai );
    Beep( re1 , spai );
    Beep( mi1 , spai );

    Beep( la1 , pai + ban );
    Beep( so , ban );
    Beep( so , ban );
    Beep( la , ban );
    Beep( la , pai );

    Sleep( 4 * pai );
    return 0;
}