#include<iostream>
#include<cstring>
using namespace std;

class HDFC;
class ICICI
{
	char acc_name[20];
	int acc_id;
	float bal;

	public:
		void setdata()
		{	
			strcpy(acc_name,"abc");
			acc_id=1;
			bal=1000;
		}
		void print()
		{
			cout<<"ICICI BANK\n";
			cout<<"acc name"<<acc_name<<endl;
			cout<<"acc bal"<<bal<<endl;
		}
	friend void tran(ICICI &IC,HDFC &HD);
};
class HDFC
{
	
	char acc_name[20];
	int acc_id;
	float bal;

	public:
		void setdata()
		{
			strcpy(acc_name,"ABC");
			acc_id=2;
			bal=1500;
		}
		void print()
		{
			
			cout<<"HDFC BANK\n";
			cout<<"acc name"<<acc_name<<endl;
			cout<<"acc bal"<<bal<<endl;

		}
	friend	void tran(ICICI &IC,HDFC &HD);
};
void tran(ICICI &IC,HDFC &HD)
{
	float amount;
	cout<<"enter the amount"<<endl;
	cin>>amount;
	if(IC.bal>=amount)
	{
		IC.bal-=amount;
		HD.bal+=amount;
	}
	else
	{
		cout<<"insaficient bal"<<endl;
	}
}
int main()
{
	ICICI ic;
	HDFC hd;

	ic.setdata();
	hd.setdata();
	
	ic.print();
	hd.print();

	cout<<"after tran"<<endl;
	tran(ic,hd);

	ic.print();
	hd.print();
}
