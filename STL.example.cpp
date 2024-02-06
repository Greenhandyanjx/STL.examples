#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
class Person {
public:
	int score;
	string name;
	Person(string name,int score)
	{
		this->name = name;
		this->score = score;
	}
};
int main()
{
	//创建五个选手的容器
	vector<Person>v;
	string back = "ABCDEFGHIJKLMN";
	for (int i = 0; i < 5; i++)
	{
		string str = "competitor";
		str += back[i];
		int score = 0;
		Person p(str, score);
		v.push_back(p);
	}
	//在使用时别直接用未初始化的容器用数组的方式进行初始化,会违法访问
	//将评委的分数放入deque计算
	for (vector<Person>::iterator it=v.begin();it!=v.end();it++)
	{
		int sum = 0;
		deque<int>d;
		for (int m = 0; m< 10; m++)
		{
			int ran = rand() % 41 + 60;
			d.push_back(ran);
			cout << m + 1 << ":" << ran<<" ";
		}
		
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		for (int m = 0; m < 8; m++)
		{
			sum += d[m];
		}
		it->score = sum / d.size();
		cout << "name: " << it->name << "score: " << it->score << endl;;
	}
	//
	return 0;
}