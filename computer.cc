 ///
 /// @file    computer.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-08 11:08:32
 ///
 
#include <iostream>
#include <string.h> 
using namespace std;

class Computer         //类的声明,头文件里面声明
{
	public:
		Computer(const char *initbrand,float initfprice)
		: _fprice(initfprice)
		{
			strcpy(_brand, initbrand);//字符串数组初始化,要用cpy
			cout << "computer" <<endl;
		}
		void setBrand(const char *brand);
		void setPrice(float fprice);
		void print();
	private:
		char _brand[10];
		float _fprice;
};
void Computer::setBrand(const char *brand) //.c文件里面实现
{

	strcpy(_brand,brand);
}
void Computer::setPrice(float fprice)
{
	_fprice = fprice;
}
void Computer::print()
{
	cout << "brand:" << _brand << endl;
	cout << "price:" << _fprice << endl;
}
int main()
{
	int a;
	Computer com("mac",1000);
	com.print();
	com.setBrand("lenovo");
	com.setPrice(888);
	com.print();
	return 0;
}

