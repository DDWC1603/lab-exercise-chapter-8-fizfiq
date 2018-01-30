#include<iostream>
#include<string>

using namespace std;

class triangle
{
	private:
		int x,y;
		
		public:
			void set_value(int , int);
			
			int area()
			{
				return (x*y)/2;
			}
			
};

void triangle::set_value(int a,int b)
{
	x=a;
	y=b;
}

int main()
{
	triangle saya;
	saya.set_value(7,2);
	//saya.area();
	cout<<"triangle area = "<<saya.area();
}
