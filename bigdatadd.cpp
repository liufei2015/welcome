#include <iostream>
#include <string>

using namespace std;

unsigned short ch_table[9][9];
string res;
void ch_table_init(void)
{
	int i,j;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			ch_table[i][j]=i+j;	
		}
	}
}

char v_add(char a,char b)
{
	unsigned short i,j;
	i=a-'0';
	j=b-'0';
	return ch_table[i][j]+'0';
}

string& add(string& add1,string& add2)
{
	int len_add1,len_add2;
	int s_len;
	int i;
	ch_table_init();
	len_add1=string::length(add1);
	len_add2=string::length(add2);
	s_len=len_add1>=len_add2?len_add1++:len_add2++;
	char s[s_len];
	char temp[s_len];                            //too heavy ,too ugly!!!
	char add1[len_add1];
	char add2[len_add2];

	for(i=0;i<len_add1;i++){add1[i]=(char)len_add1[i];}
	for(i=0;i<len_add2;i++){add2[i]=(char)len_add2[i];}
	
	for(i=0;i<s_len;i++)s[i]=v_add(add1[i],add2[i]);
	return res.string(s);
}

