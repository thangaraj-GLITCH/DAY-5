#include<iostream>
using namespace std;
int main()
{
	int qty,dis=0;
	float Total,rate ;
	cout<<"\n Quantity of item = ";
	cin>>qty;	
	cout<<"\n Rate of item =";
	cin>>rate;
	if(qty>1000)
	dis=10;
	Total=(qty*rate)-(qty*rate*dis/100);
	cout<<"Total expenses=Rs. "<<Total;
}
