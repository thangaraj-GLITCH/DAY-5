#include<iostream>
using namespace std;
int count_Ways(int n)
{
   if(n<0)
   {
      return 0;
   }
   else if(n==0)
   {
      return 1;
   }
   else
   {
      return count_Ways(n-1) +count_Ways(n-2) + count_Ways(n-3);
   }
}
int main()
{
   int n;
   cout<<"Enter number of stairs: ";
   cin>>n;
   cout<<"There are "<< count_Ways(n)<<"  possible ways the child can run up thestairs."<<endl;
   return 0;
}
