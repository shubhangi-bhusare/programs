#include<iostream>
using namespace std;
class student 
{   
  private:
	int rollno;
	double m1, m2, m3;
	double total=0;
	char grade;
	double percentage=0;
	
	void calTotal()
	{
	total= m1+m2+m3;
	}
	void calPercentage()
	{
		percentage= (( m1 + m2 + m3)/300)*100;
	}
	void calGrade()
	{
		if(percentage>=90)
		{
			grade= 'A';
		}
		else if(percentage<90 || percentage>=80)
		{
			grade= 'B';
		}
		else if(percentage<80 || percentage>=70)
		{
			grade='C';
		}
		else
		{
			grade='D';
		}
	}
	
public:
	void accept(int rollno,double m1, double m2, double m3)
	{
		this->rollno=rollno;
		this->m1=m1;
		this->m2=m2;
		this->m3=m3;
	}
	
	void display()
	{   calTotal();
	    calPercentage();
	    calGrade();
		cout<<"Rollno:"<<rollno<<"  M1="<<m1<<"  M2="<<m2<<"  M3="<<m3<<" Total="<<total<<
		" Percentage="<<percentage<<" Grade="<<grade<<endl;
	}
	student(int rollno,double m1, double m2, double m3)
	{
		
		this->rollno=rollno;
		this->m1=m1;
		this->m2=m2;
		this->m3=m3;
	}
	
};
int main55()
{ 
    int rollno;
	double m1, m2, m3;
	student std1(rollno,m1,m2,m3);
	cout<<"Enter student details"<<endl;
	cin>>rollno>>m1>>m2>>m3;
	cout<<"Display student information"<<endl;
	std1.accept(rollno,m1,m2,m3);
	std1.display();
	 
	
}
