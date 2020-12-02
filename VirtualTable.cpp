// VirtualTable.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
class A {
public:
	virtual void vfunc1();
	virtual void vfunc2();
	void func1();
	void func2();
private:
	int m_data1, m_data2;
};

class B : public A {
public:
	virtual void vfunc1();
	void func1();
private:
	int m_data3;
};

class C : public B {
public:
	virtual void vfunc2();
	void func2();
private:
	int m_data1, m_data4;
};

void A::vfunc1()
{
	cout << "A类v1" << endl;
}

void A::vfunc2()
{
	cout << "A类v2" << endl;
}

void B::vfunc1()
{
	cout << "B类v1" << endl;
}

int main()
{
	B bObject;
	A *p = &bObject;
	p->vfunc1();
	
	
}

