// DesignPattern.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
  
#include<deque>
#include<vector>
#include<list>
#include<queue>
#include<array>
#include"SingleObject.h"
using namespace std;
class student {
public:
    student(const int& a, const int& n) :age(a), num(n) {}
    int age;
    int num;
    bool operator < (const student& stu)const {
        return this->age > stu.age;
    }

};

int main() {
    vector<int> vect;
    deque<int> dq;
    list<int> lst;
    priority_queue<int> heap;
    priority_queue<student> objHeap;
    list<student> objList;
    array<int, 5> arr = { 33,82,64,302,8 };
    priority_queue<int, vector<int>, greater<int>> smHeap;
  
    
    cout << "vector size is " << vect.size() << endl;
    cout << "deque size is " << dq.size() << endl;
    cout << "list size is " << lst.size() << endl;
    cout << "queue size is " << heap.size() << endl;

    for (size_t i = 0; i < 5; i++)
    {
        /* code */
        vect.push_back(i + 1);
        dq.push_back(vect[i] * 10);
        lst.insert(lst.begin(), vect[i]);
        heap.push(arr[i]);
        smHeap.push(arr[i]);
        objHeap.push(student(arr[i], vect[i]));
        objList.insert(objList.begin(), student(arr[i], vect[i]));


    }

    
    lst.sort();
    objList.sort();


    SingleObject& obj = SingleObject::getInstance();
    obj.print();
    return 0;
}




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
