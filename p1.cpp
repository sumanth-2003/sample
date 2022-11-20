#include<iostream>
using namespace std;
class Max{

private:
int a;
int b;
int c;
public:
Max(int A,int B,int C){

a=A;
b=B;
c=C;
int Tmax=a>b?a:b;
int Rmax=Tmax>c?Tmax:c;

cout<<"the Biggest of the three integer numbers is:"<<Rmax<<endl;

}

};
int main(){

int x,y,z;
cout<<"enter the numbers:"<<endl;
cin>>x;
cin>>y;
cin>>z;
Max m1(x,y,z);

}