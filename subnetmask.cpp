#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
string findoctet(string &str)
{
	string s="";
	int i;
	for(i=0;i<str.length()&&str[i]!='.';i++)
	{
		s+=str[i];
	}
	str=str.substr(i+1);
	return s;
	
}
int main()
{
	string str,second,third,fourth,class1;
	int first;
	cout<<"Enter ip:";
	cin>>str;
	first=stoi(findoctet(str));
	second=findoctet(str);
	third=findoctet(str);
	fourth=str;

	if(first>=0 && first<=127)
	{
		cout<<"A"<<endl;
		cout<<first<<".0.0.1"<<endl;
		cout<<first<<".255.255.255"<<endl;
	}
	else if(first>=128 && first<=191)
	{
		cout<<"B"<<endl;
		cout<<first<<"."<<second<<".0.1"<<endl;
		cout<<first<<"."<<second<<".255.255"<<endl;
	}
	else if(first>=191 && first<=223)
	{
		cout<<"C"<<endl;
		cout<<first<<"."<<second<<"."<<third<<".1"<<endl;
		cout<<first<<"."<<second<<"."<<third<<".255"<<endl;
	}
	else if(first>=224 && first<=239)
	{
		cout<<"D"<<endl;
//		cout<<first<<".0.0.1"<<endl;
//		cout<<first<<".255.255.255"<<endl;
	}
	else if(first>=239 && first<=225)
	{
		cout<<"E"<<endl;
//		cout<<first<<".0.0.1"<<endl;
//		cout<<first<<".255.255.255"<<endl;
	}
//	cout<<class1<<endl;
	return 0;
}