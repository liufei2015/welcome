#include <iostream>
#include <string>

using namespace std;

string Qadd(string&,string&);
string a;
string b;
int main()
{
	string& ap=a;
	string& bp=b;
 	cout<<"starting test..."<<endl;
 	cin>>a>>b;
 	cout<<endl;
 	cout<<Qadd(ap,bp)<<endl;
	cout<<"test end."<<endl;
 	return 0;
}
