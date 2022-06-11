#include <iostream>
#include <string>

using namespace std;

unsigned short ch_table[9][9]={0};
string res="";

void ch_table_init(void)
{
	int i,j;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			ch_table[i][j]=(i+j)%10+'0';	
		}
	}
}

char v_add(char a,char b)
{
	unsigned char i,j;
	i=a+'0';
	j=b+'0';
	return ch_table[i][j];
}

string Qadd(string& add1,string& add2)          //too heavy ,too ugly!!!
{
	int len_add1,len_add2;
	int s_len;
	int i;
	ch_table_init();
	len_add1=add1.size();
	len_add2=add2.size();
	s_len=len_add1>=len_add2?len_add1+1:len_add2+1;
                  
	char tadd1[len_add1];
	char tadd2[len_add2];

	for(i=0;i<len_add1;i++)
	{
		tadd1[i]=(char)add1[len_add1-i];
	}

	for(i=0;i<len_add2;i++)
	{
		tadd2[i]=(char)add2[len_add2-i];	
	}
	
	char s[s_len];
	unsigned char temp[s_len];

	for(i=0;i<s_len;i++)
	{
		temp[i+1]=tadd1[i]-'0'+tadd2[i]-'0'>=10?1:0;
		s[i]=v_add(tadd1[i],tadd2[i])+temp[i];
	}

	for(i=0;i<s_len;i++)
	{
		res[i]=s[s_len-i];
	}

	return res;
}

