#include<iostream>s
using namespace std;

class RBI{
	
	public:
		float rate;
		void getROI(){
			
			cout<<"Rate of Interest:"<<rate<<"%"<<endl;
					}
};
class SBI : public RBI{
	
	public:
		 SBI(){
			rate=5.5;
			}
};

class BOB : public RBI{
	
	public:
		BOB(){
			rate=5.0;
		}
};

class ICICI : public RBI{
	
	public:
		ICICI(){
			rate=6.5;
					}
};

int main(){
	
	SBI obj1;
	BOB obj2;
	ICICI obj3;
	
	obj1.getROI();
	obj2.getROI();
	obj3.getROI();
	
}
