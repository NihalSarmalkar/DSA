#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int n,r;
struct frame{
    char ack;
    int data;
}frm[10];



int main()
{
    int ch;
    do{
        cout<<" 1.Selective Repeate"<<endl;
        cout<<" 2.Go back N"<<endl;
        cout<<" 3.Exit"<<endl;
        cout<<"Select your choice - ";
        cin>>ch;
        switch(ch){
            case 1:
             selectiveRepeate();
             break;
            case 2:
             goBackn();
             break;
            case 3:
             exit(0);
             break;
        }
        
    }
    while(ch>=4);


    return 0;
}


int sender(){
    int i;
    cout<<"Enter the number of packets";
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"enter data for"<<n;
        cin>>frm[i].data;
        frm[i].ack="y";

    }
    return 0;

}

void recAck(){
    int i;
    rand();
    r=rand()%n;
    frm[r].ack='n';
    for(i=1;i<=n;i++)
    {
        if(frm[i].ack=='n'){
            cout<<"packet"<< i <<"Not received";

        }
    }

}

void resend(){
    cout<<"Resending packet "<< r ;
    sleep(2);
    frm[r].ack='y';

    cout<<"received packet is "<<frm[r].data ;
}

void resend1(){
    cout<<"sending Packet from"<<r;
    
    for(i=r;i<=n;i++){
        sleep(2);
        frm[r].ack='y';
        cout<< "received data from"<<i<<" is "<< frm[i].data;

    }

}

void selectiveRepeate(){
    sender();
    recAck();
    resend();
    cout<<"All packets sent successfully";

}
void goBackn(){
    sender();
    recAck();
    resend1();
    cout<<"All packets sent successfully";



}