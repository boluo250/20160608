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
		Point(int x, int y)
		:_ix(x)
		,_iy(y)
		{
			cout << "point(int,int)" << endl;
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
	
	Point p1(3,4);
	p1.print();
	
	return 0;
}
