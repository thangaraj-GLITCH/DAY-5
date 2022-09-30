#include<iostream>
using namespace std;
int main()
{
	int tv17box,tv22box,tv26box,tv32box,tv37box;
	int tv17num,tv22num,tv26num,tv32num,tv37num;
	tv17box=1;
	tv22box=2;
	tv26box=3;
	tv32box=4;
	tv37box=5;
	cout<<" enter number of tv 17 box model :";
	cin>>tv17num;
	cout<<" enter number of tv 22 box model :";
	cin>>tv22num;
	cout<<" enter number of tv 26 box model :";
	cin>>tv26num;
	cout<<" enter number of tv 32 box model :";
	cin>>tv32num;
    cout<<" enter number of tv 37 box model :";
	cin>>tv37num;
	cout<< "\n            requesition note           ";
	cout<<" ============================================ ";
	cout<<" \n TV MODEL     |    BOX TYPE  |   NUMBERS REQUIRED ";
	cout<<"============================================= ";
	cout<<"\n tv model of 17 "<<tv17box<<tv17num;
	cout<<" \n tv model of 22 "<<tv22box<<tv22num;
	cout<<" \n tv model of 26 "<<tv26box<<tv26num;
	cout<<" \n tv model of 32 "<<tv32box<<tv32num;
	cout<<" \n tv model of 37 "<<tv37box<<tv37num;
   return 0;
}
