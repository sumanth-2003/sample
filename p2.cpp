#include<iostream>
using namespace std;
void productdisplay(int r1,int c1,int r2,int c2,int arr1[][100],int arr2[][100]){

if(c1!=r2){
    cout<<"product is not possible"<<endl;
}
else{
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        int sum=0;
        for(int k=0;k<c1;k++ ){

            sum=sum+arr1[i][k]*arr2[k][j];

        }
        cout<<sum<<" ";

    }
    cout<<endl;

}


}

}

int main(){
int r1,c1,r2,c2;
int arr1[100][100],arr2[100][100];
cout<<"enter the dimensions"<<endl;
cin>>r1>>c1>>r2>>c2;
cout<<"enter the first array:"<<endl;
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>arr1[i][j];

    }
}
cout<<"enter the second array:"<<endl;
for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){

        cin>>arr2[i][j];
    }
}
cout<<"the product is:"<<endl;
productdisplay(r1,c1,r2,c2,arr1,arr2);

}