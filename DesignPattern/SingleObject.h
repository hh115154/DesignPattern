#pragma once
#include<iostream>
using namespace std;
class SingleObject
{
private:
	SingleObject() {};//���캯��˽��
public:
	static SingleObject& getInstance() {
		static SingleObject instance;//�ֲ���̬˽��ʵ����ֻ�ڵ�һ�ε���getInstanceʱ�Ź���
		return instance;
	};

	//some public attributes and methonds
	void print() {
		cout << "this is a singleton methond" << endl;
	}
};


