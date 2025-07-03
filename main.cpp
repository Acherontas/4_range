#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc,char** argv)
{
    int prec=0;
    cout<<"enter decimal precision : ";
    cin>>prec;
    cout<<"precision is " << prec<<"\n";
    cout<<"\n";
    long double ar[5];
    long double rst_one=0.0;
    long double rst_two=0.0;
    cout<<"enter first number : " ;
    cin>>ar[0];
    long double tmp;
    tmp=ar[0];
    for(int i=1;i<=3;i++){ar[i]=tmp+1; tmp=ar[i];}
    cout<<"\n";
    for(int i=0;i<=3;i++){
      cout<<"@i "<< i << " value is " <<std::setprecision(prec) << ar[i] <<"\n";
    }
    cout<<"\n";
    rst_one=ar[0]+ar[3];
    rst_two=ar[1]+ar[2];
    cout<<"sum of number @ index 0 + 3 ::== " <<std::setprecision(prec)<< rst_one <<"\n";
    cout<<"sum of number @ index 1 + 4 ::== " <<std::setprecision(prec)<< rst_two <<"\n";
    return 0;
}
