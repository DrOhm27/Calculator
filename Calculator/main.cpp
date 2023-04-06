#include <iostream>

using namespace std;

int main()
{
    //decicion
    int dec1,dec2;
    //variables
    float x,s=0,d=0,m=1,div,divans;
    //ch 1,2,3,4,5

    cout<<"WELCOME TO THE CALCULATOR APP 1.0"<<endl;
    cout<<"Made by: Muhamed Mujanovic "<<endl;

    cout<<endl;

    ch4:cout<<"Pick an operation:"<<endl;
    ch2:cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.End"<<endl;
    cin>>dec1;
    if(dec1>5 || dec1<0){cout<<"Invalid option try again!"<<endl;goto ch2;}

    switch(dec1){
case 1:
//addition
    do{
    cout<<"Enter a number:";cin>>x;
    s=s+x;
    cout<<"ANS:"<<s<<endl;

    cout<<endl;

    cout<<"1"<<endl;
    cout<<"0";

    cout<<endl;

    ch1:cin>>dec2;
    if(dec2>1 || dec2<0){goto ch1;}
    }
    while(dec2!=0);

    cout<<endl;

    cout<<"Final answer:"<<s<<endl;

    cout<<endl;

    x=0;
    dec2=0;
    goto ch4;

case 2:
//subtraction
    do{
    cout<<"Enter a number:";cin>>x;
    d=d-x;
    cout<<"ANS:"<<d<<endl;

    cout<<endl;

    cout<<"1"<<endl;
    cout<<"0";

    cout<<endl;

    ch3:cin>>dec2;
    if(dec2>1 || dec2<0){goto ch3;}
    }
    while(dec2!=0);

    cout<<endl;

    cout<<"Final answer:"<<d<<endl;

    cout<<endl;

    x=0;
    dec2=0;
    goto ch4;

case 3:
//multiplication
    do{
    cout<<"Enter a number:";cin>>x;
    m=m*x;
    cout<<"ANS:"<<m<<endl;

    cout<<endl;

    cout<<"1"<<endl;
    cout<<"0";

    cout<<endl;

    ch5:cin>>dec2;
    if(dec2>1 || dec2<0){goto ch5;}
    }
    while(dec2!=0);

    cout<<endl;

    cout<<"Final answer:"<<m<<endl;

    cout<<endl;

    x=0;
    dec2=0;
    goto ch4;

case 4:
//division
    cout<<"Enter the number:";cin>>x;

    ch6:cout<<"Enter the divisor:";cin>>div;

    divans=x/div;

    cout<<"ANS:"<<divans<<endl;

    do{

    cout<<"Enter the divisor:";cin>>div;

    divans=divans/div;

    cout<<"ANS:"<<divans<<endl;

    cout<<endl;

    cout<<"1"<<endl;
    cout<<"0";

    cout<<endl;

    ch7:cin>>dec2;
    if(dec2>1 || dec2<0){goto ch7;}
    }
    while(dec2!=0);

    cout<<endl;

    cout<<"Final answer:"<<divans<<endl;

    cout<<endl;

    x=0;
    dec2=0;
    goto ch4;

case 5:
//exit app
    return 0;

    return 0;
}
}
