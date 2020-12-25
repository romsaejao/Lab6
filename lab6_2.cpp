#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n,mv,d,w;
	long int id;
	
	
	cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<"\n";
	cout<<"?????: ";
	getline(cin,n);
	cout<<"Fahsai: Wow!!! "<<n << " is a really cool name."<< "\n";
	cout<<"Fahsai: I think you are an Engineering student. What is your student ID?"<< "\n";
	cout<< n << ": ";
	cin>>id;
	cin.ignore();
	id = id/10000000;
	id = id - 12;
	
	cout<<"Fahsai: I think you may be GEAR "<< id <<". I have a free movie ticket for you."<< "\n";
	cout<<"Fahsai: Let's go to the cinema together!!!"<<"\n";
	cout<<"Fahsai: What movie do you want to watch?"<<"\n";
	cout<< n <<": ";
	getline(cin,mv);
	cout<<"Fahsai: So....which day are you free to go with me?"<<"\n";
	cout<< n <<": ";
	getline(cin,d);
	cout<<"Fahsai: "<< d <<"....that is OK!!! I'm looking forward to watching " << mv << " with you."<<"\n";
	cout<< n <<": ";
	getline(cin,w);
	cout<<"Fahsai: 555+ see you "<< d << ". Bye Bye "<<"\\(^ ^)/";
	
	
	
}





























 