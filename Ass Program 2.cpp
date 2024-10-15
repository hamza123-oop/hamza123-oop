#include <iostream>
using namespace std;
class student
{
	private:
		char name [15];
		float age;
		public:
			void input ()
{
	cout<<"Enter Name of Student:"<<endl;
	cin>>name;
	cout<<"Enter Age of Student:"<<endl;
	cin>>age;
}
void print ()
{
	cout<<"Student's Name:"<<name<<endl;
	cout<<"Student's Age:"<<age<<endl;
}
int main ()
{
	student student;
	student.input();
	student.print();
	return 0;
}
