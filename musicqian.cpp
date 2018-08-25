#include <bits/stdc++.h>
#include <windows.h>
#include <cstdlib>
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

int main()
 {
    SetConsoleTitle("前前前世 Windos系统音 Made By 2Js_Island");
    cout << " 前前前世 Windos系统音 感谢欣赏！ QAQ Made By 2Js_Island Team ：TDsoc " << endl;  
    int pai = 400 , ban = 250 , spai = 100 , spai1 = 50, t =0 ;
    int longpai = 1200 ;//so1 3times
    int ban1 = 200;
    int pai1 = 450;
    int pai2 = 800;
    Beep( doo , spai );
    Beep( re , spai );
    Beep( mi , ban );
    Beep( do1 , ban );
    Beep( so , ban );
    Beep( re1 , pai );
    Beep( mi1 , ban );
    Beep( so1 , ban );

    Beep( so1 , ban );
    Beep( do1 , ban );
    Beep( mi1 , ban );
    Beep( do1 , ban );
    Beep( fa1 , ban );
    Beep( mi1 , ban );
    Beep( do1 , pai );

    Beep( doo , spai );
    Beep( re , spai );
    Beep( mi , ban );
    Beep( do1 , ban );
    Beep( so , ban );
    Beep( re1 , pai );
    Beep( mi1 , ban );
    Beep( so1 , ban );
    Beep( so1 , ban );
    Beep( do1 , ban );
    Beep( mi1 , ban );
    Beep( do1 , ban );
    Beep( fa1 , ban );
    Beep( mi1 , ban );
    Beep( do1 , pai );

    
    do{
    //1
    Beep( doo , spai );
    Beep( re , spai );
    Beep( mi , ban );
    Beep( do1 , ban );
    Beep( so , ban );
    Beep( re1 , pai );
    Beep( mi1 , pai );
    //2
    Beep( fa1 , pai );
    Beep( mi1 , pai );
    Beep( so1 , pai );
    Beep( do1 , pai );
    //3
    Beep( doo , spai );
    Beep( re , spai );
    Beep( mi , ban );
    Beep( do1 , ban );
    Beep( so , ban );
    Beep( re1 , pai );
    Beep( mi1 , pai );
    //4
    Beep( fa1 , pai );
    Beep( mi1 , pai );
    Beep( re1 , pai );
    Beep( mi1 , pai );
    //5
    Beep( doo , spai );
    Beep( re , spai );
    Beep( mi , ban );
    Beep( do1 , ban );
    Beep( so , ban );
    Beep( re1 , pai );
    Beep( mi1 , pai );
    //6
    Beep( fa1 , pai );
    Beep( mi1 , pai );
    Beep( so1 , pai );
    Beep( do1 , pai );
    //7
    Beep( so1 , pai );
    Beep( mi1 , pai );
    Beep( fa1 , pai );
    Beep( mi1 , pai );
    Beep( re1 , pai );
    Beep( do1 , pai );
    Beep( re1 , pai );
    Beep( fa , pai );
    Beep( do1 , pai );
    Beep( so1 , pai );
    //8
    Beep( so1 , longpai );
    Beep( qso , ban1 );
    Sleep( 2 * ban );
    //9
    Beep( doo , pai1 );
    Beep( re , ban );
    Beep( doo , pai2 );
    //10
    Beep( qso , ban );
    Beep( fa , ban1 );
    Beep( mi , spai1 );
    Beep( mi , spai );
    Beep( re , ban );
    Beep( doo , pai2 );
    //11
    Sleep( 2 * ban );
    Sleep( 2 * ban );    
    //12
    Beep( doo , pai );
    Beep( re , pai );
    //13
    Beep( mi , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( fa , ban );
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( doo , ban );
    Beep( re , ban );
    //14
    Beep( mi , ban );
    Beep( mi , ban );
    Beep( mi , ban );
    Beep( fa , ban );
    Beep( mi , ban );
    Beep( re , pai );
    Beep( doo , pai1 );
    //15
    Sleep( 2 * ban );
    Sleep( 2 * ban );
    Sleep( 2 * ban );
    Sleep( 2 * ban );
    //16
    Beep( doo , pai1 );
    Beep( qso , spai1 );
    Beep( qso , pai2 );
    //17
    Sleep( 2 * pai );
    Sleep( 2 * ban );
    Beep( qso , ban );
    Beep( fa , ban1 );
    Beep( mi , spai1 );
    Beep( mi , spai );
    Beep( re , ban );
    //18
    Beep( doo , pai2 );
    Sleep( 2 * ban );
    Sleep( 2 * ban );
    //19
    Beep( doo , pai );
    Beep( re , pai );
    //20
    Beep( mi , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( fa , ban );
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( doo , ban );
    Beep( re , ban );
    //21
    Beep( mi , ban );
    Beep( mi , spai );
    Beep( mi , ban );
    Beep( fa , ban );
    Beep( mi , pai );
    Beep( re , ban );
    Beep( doo , pai1 );
    //22
    Beep( doo , pai );
    Beep( re , pai );
    //23
    Beep( mi , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( fa , ban );
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( doo , ban );
    Beep( re , ban );
    //24
    Beep( mi , ban );
    Beep( mi , spai );
    Beep( mi , ban );
    Beep( fa , ban );
    Beep( mi , pai );
    Beep( re , ban );
    Beep( doo , longpai );
    //25
    Sleep( 2 * pai );
    Sleep( 2 * ban );
    Sleep( 2 * pai );
    //26
    Beep( doo , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( re , ban );
    //27
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( doo , ban );
    Beep( re , ban );
    Beep( mi , ban );
    Beep( mi , ban );
    //28
    Beep( so , longpai );
    Beep( re , ban );
    Beep( re , ban );
    //28-29
    Beep( re , pai2 );
    Sleep( 2 * pai );
    //第一页end

        cout <<"次数:"<< t<< endl;
        t++;
    }while(t<=1);
    cout << "Thanks" << endl;
    system("pause");
    return 0;
}