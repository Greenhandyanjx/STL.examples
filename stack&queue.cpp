#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
#include<queue>//先进先出
#include<stack>//先进后出
using namespace std;
class Person {
public:
	int age;
	string name;
	Person(string name,int age)
	{
		this->age = age;
		this->name = name;
	}
};
int main()
{
	stack<Person>s;
	queue<Person>q;
	Person p1("aaa", 111);
	Person p2("bbb", 222);
	Person p3("ccc", 333);
	Person p4("ddd", 444);
	s.push(p1);
	s.push(p2);
	s.push(p3);
	s.push(p4);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	for (int i = 0; i < 4; i++)
	{
		cout << "name : " << s.top().name << "age :" << s.top().age << endl;
		cout << "name : " << q.front().name << "age :" << q.front().age << endl;
		s.pop();
		q.pop();
	}
	return 0;
}