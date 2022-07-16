#include<iostream>
using namespace std;

int main(){
    int data[10];
    int datarec[10],c,c1,c2,c3;
    cout<<"Enter data bits to be transmitted"<<endl;
    cin>>data[2];
    cin>>data[4];
    cin>>data[5];
    cin>>data[6];

    data[0]=data[2]^data[4]^data[6];
    data[1]=data[2]^data[5]^data[6];
    data[3]=data[4]^data[5]^data[6];


    for(int i=0;i<7;i++){
        cout<<data[i];
    }

    cout<<endl;
    cout<<"Enter received data bits one by one"<<endl;
    for(int i=0;i<7;i++){
        cin>>datarec[i];
    }

    c1=datarec[0]^datarec[2]^datarec[4]^datarec[6];
    c2=datarec[1]^datarec[2]^datarec[5]^datarec[6];
    c3=datarec[3]^datarec[4]^datarec[5]^datarec[6];

    c=c3*4+c2*2+c1;
    
    if(c==0){
        cout<<"No Error !";

    }else{
        cout<<" Error at position -> "<<c;

    }
    
}