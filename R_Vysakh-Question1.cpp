#include <iostream>
#include <string.h> //changed stirng to string
#include "stdio.h"
using namespace std; //added
int getFIndex(char string[100],char  c)	//added size of array (Single dimensional string array),Replaced function name from getLIndex to getFIndex
{
	int size = strlen(string),i=0; //changed len to strlen
	while(i<size)
	{
		
		if(string[i]==c){
		    return i;
		   break;
		}	
		i++; 
	}
	
}
int getLIndex(char string[100], char c)		//added return type and single dimensional array-size,Replaced function name from getFIndex to getLIndex
{
	int size = strlen(string);	//changed len to strlen
	int i=size; 
	while(i>=0)	//removed semicolon
{		
		if(string[i]==c){
		    return i;
		    break;
		}	
	i--;
}
		
}
int main()
{
	char str[100];
	char ch; 
	int Lindex,Findex; 
	cin>>str; 
	cin>>ch;
	Lindex =getLIndex(str,ch);
	Findex= getFIndex(str,ch);	//changed FIndex to Findex
	if(Lindex!=-1)
		cout<<Findex<<endl<<Lindex;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;	
}

