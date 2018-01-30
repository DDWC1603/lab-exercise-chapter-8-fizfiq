#include<iostream>

using namespace std;

class log
{	
	private:

		int m_loglevel; //= loglevelinfo;	

	public:

	const int loglevelerror = 0;
	const int loglevelwarning = 1;
	const int loglevelinfo = 2;
		
		void setlevel(int level)
		{
			m_loglevel = level;
		}
		
		void warn(const char* message)
		{
			if(m_loglevel>=loglevelwarning)
			cout<<"[warning]: "<<message<<endl;	
		}
		void error(const char* message)
		{
			if(m_loglevel>=loglevelerror)
			cout<<"[error]: "<<message<<endl;	
		}
		void info(const char* message)
		{
			if(m_loglevel>=loglevelinfo)
			cout<<"[info]: "<<message<<endl;	
		}
};
int main()
{
	log log1;
	log1.warn("hello!!");
	log1.info("hantu");
	log1.error("hehehe"); 
	std::cin.get();
}
