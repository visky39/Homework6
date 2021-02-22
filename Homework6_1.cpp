#include<iostream>
#include<string>
using namespace std;
int main()
{
	int per;
	float w,h,bmi,h_m;
	string name,bmi1;
	
	cout<<"Enter number of Person :";
	cin>>per;
	cout<<"-------------------------------------"<<endl;
	for(int i=1;i<=per;i++){
		cout<<"Enter name "<<i<<" : ";
		cin>>name;
		cout<<"Enter weight "<<i<<" : ";
		cin>>w;
		cout<<"Enter height "<<i<<" : ";
		cin>>h;
		h_m = (float)h/100;
		bmi = w/(h_m*h_m);
		if(bmi<16)
		{
			bmi1="Severe Thinness";
		}
		else if(bmi>=16||bmi<17)
		{
			bmi1="Moderdate Thinness";
		}
		else if(bmi>=17||bmi<18.5)
		{
			bmi1="Mild Thinness";
		}
		else if(bmi>=18.5||bmi<25)
		{
			bmi1="Normal";
		}
		else if(bmi>=25||bmi<30)
		{
			bmi1="Overweight";
		}
		else if(bmi>=30||bmi<35)
		{
			bmi1="Over Class |";
		}
		else if(bmi>=35||bmi<40)
		{
			bmi1="Over Class ||";
		}
		else if(bmi>=40)
		{
			bmi1="Over Class |||";
		}
		cout<<"BMI"<<i<<"="<<bmi<<endl;
		cout<<"Your Category of BMI is "<<bmi1<<endl;
		
	}
	


	return(0);
}