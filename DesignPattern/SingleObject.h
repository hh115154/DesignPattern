#pragma once
#include<iostream>
using namespace std;
class SingleObject
{
private:
	SingleObject() {};//构造函数私有
public:
	static SingleObject& getInstance() {
		static SingleObject instance;//局部静态私有实例，只在第一次调用getInstance时才构造
		return instance;
	};

	//some public attributes and methonds
	void print() {
		cout << "this is a singleton methond" << endl;
	}
};


