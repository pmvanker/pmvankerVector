/*write a c++ program to calculate simple interest. Define the class called interest and hide the data elements of the class using private keyword. Define the setdata,print member function outside of class

  P-principal N-year of service R-rate
  interest = (p*n*r)  / 100
  total = interest + principal

 */
#include <iostream>
using namespace std;
class interest
{
	private:
		float P;		//principal amount	
		int N;			//YOS
		float R;		//rate of interest
	public:
		void setdata();
		void print();
};
void interest::setdata()
{
	cout<<"Enter principal amount"<<endl;
	cin>>P;
	cout<<"Enter Year of Service"<<endl;
	cin>>N;
	cout<<"Enter Interest Rate"<<endl;
	cin>>R;

}
void interest:: print()
{
cout<<"Principal : "<<P<<endl;
cout<<"YOS : "<<N<<endl;
cout<<"Rate of interest : "<<R<<endl;
cout<<"Interest is :>> "<< (P*R*N)/100<<endl;
cout<<"Total is : "<< P+((P*N*R)/100)<<endl;
}

int main()
{
	interest a;
	a.setdata();
	a.print();
} 











