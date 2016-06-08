 ///
 /// @file    point.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-08 14:42:35
 ///
 
#include <iostream>
 
using namespace std;

class Point
{
	public:
		Point()                   //构造函数进行重载
		{
			cout << "Point()" << endl;
		}
		Point(int x, int y)
		{
			cout << "point(int,int)" << endl;
			_ix = x;
			_iy = y;
		}
		void print()
		{
			cout << "(" << _ix
				 << "," << _iy
				 << ")" << endl;
		}
	private:
		int _ix;
		int _iy;
};

int main()
{
	Point p;
	p.print();
	
	Point p1(3,4);
	p1.print();
	
	return 0;
}
