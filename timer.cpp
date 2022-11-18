#include<bits/stdc++.h>
#include<windows.h>
#include<time.h>  
#define key_down(key_name) ((GetAsyncKeyState(key_name))?1:0)
using namespace std;
typedef long long ll;
char againanswer='y';
ll timerstart,timerend;  
bool timerstatus=false;


struct Time{
    ll h;
    int m;
    int s;
}timertime;


void timeprint(){
    string temps,tempm,temph;
    if(timertime.s>=60){
        timertime.m++;
        timertime.s=0;
    }
    if(timertime.m>=60){
        timertime.h++;
        timertime.m=0;
    }
    if(timertime.s<10){
        temps="0"+ to_string(timertime.s);
    }else{
        temps=to_string(timertime.s);
    }
    if(timertime.m<10){
        tempm="0"+ to_string(timertime.m);
    }else{
        tempm=to_string(timertime.m);
    }
    if(timertime.h<10){
        temph="0"+ to_string(timertime.h);
    }else{
        temph=to_string(timertime.h);
    }
    cout<<temph<<":";
    cout<<tempm<<":";
    cout<<temps<<endl;
}


void timer(){
    cout<<"1 开始计时"<<endl<<"2 停止计时"<<endl<<"3 计次"<<endl<<"4 复位"<<endl<<"5 退出"<<endl;
    Sleep(500);
    long long sum;
    int cnt=0;
    bool timerfirstflag=true;
    while(true){
        while(timerstatus){
            //timerend=clock();
            
            timeprint();
            timertime.s++;
            Sleep(1000);
            if(key_down(50)){
                timerstatus=0;
                cout<<"停止计时！"<<endl;
            }
        }
        if(key_down(49)){
            // if(timerfirstflag){
            //     timerstart=clock();
            //     timerfirstflag=false;
            // }
            timerstatus=1;
            cout<<"开始计时！"<<endl;
        }
        if(key_down(53)){
            cout<<"退出！"<<endl;
            break;
        }
    }
}


int main(){
    timer();
    return 0;
}