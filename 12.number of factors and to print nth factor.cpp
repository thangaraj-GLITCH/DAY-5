#include<iostream>
#include<string.h>
using namespace std;

int main(){
int n,num;
cout<<"Enter Number (between 1 and 100,000,00) : ";
cin>>num;
cout<<"Enter nth Number";
cin>>n;
int count=0,temp=0;
 for(int i=1;i<=num;i++){
 if(num%i==0){
 count++;
 if(count==n){
 temp=i;
 }
 }
 }
 cout<<"Number of factors ="<<count;
 cout<<"nth factor  "<<n,num,temp;
}
