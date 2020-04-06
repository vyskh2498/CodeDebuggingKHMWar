#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,d=0,n,r,p=0,a=0; //initialise a to 0
	char choice;
	cin>>num; //changed << to >>
	cin>>choice; //changed << to >>
	switch(choice) //changed swithc to switch
	{
		case 'a' : //added single quotes and colon
		n=num;
		while(n==0)
		{
			n=n/10;
			d++;
			continue;
		}
		
		while(n!=0)
		{
			r=n%10;
			a+=r*r*r; //changed sqr to sqrt
			n=n/10;
			
		}
		
		cout<<a<<"\n";  

		case 'p' ://added colon
		n=num;
		while(n!=0)
		{
			r=n%10;
			p=(p*10)+r;
			n=n/10;
		}
		
		cout<<p<<"\n";
		
	}
}
