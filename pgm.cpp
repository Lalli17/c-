#include<iostream>
using namespace std;
int main()
{ 
   int n,c=0,i;
   cout<<"enter a number"<<endl;
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	if(n%i==0)
   	{ 
	   c++;
	}
   	
   }
   if(c==2)
   cout<<"number "<<n<<" is prime "<<endl;
   else
   cout<<"number "<<n<<" is not prime "<<endl;
   return 0;
   
   
}
