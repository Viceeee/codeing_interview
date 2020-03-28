/***********************************************************************
    > File Name: example.cpp
    > Author: Viceeee
    > Mail: Viceeee@qq.com	
    > Created Time: Sat 28 Mar 2020 12:02:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
private:
	int value;

public:
	A(int n)
	{
		value = n;
	}
	A(A other)
	{
		value = other.value;
	}
}
int_tmain(int argc, CHAR*argv[])
{
	A a =10;
	A b = a;
	b.Print();
	return 0;
}


