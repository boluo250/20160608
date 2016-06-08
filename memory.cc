 ///
 /// @file    memory.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-08 10:10:12
 ///
 
#include <iostream>
#include <stdio.h>

using namespace std;

int a = 0;
const int b = 1;


int main()
{
	const int c = 2;
	char *p = "123456";
	
	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);
	printf("&c = %p\n",&c);
	printf("&p = %p\n",&p);
	printf("p = %p\n",p);
	return 0;
}
	

