#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	//Pratice stack and queue
	stack<char> tonyStack;
	string input = "hello world";

	for (int i = 0; i < input.length(); i++)
	{
		tonyStack.push(input.at(i));
	}
	//They will print out backward ~~~~~~~~ Magical ~~~~~~~ See marvel to get an explaination
	while (!tonyStack.empty())
	{
		cout << tonyStack.top();
		tonyStack.pop();
	}

	cout << endl;

	queue<char> fairness;
	for (int i = 0; i < input.length(); i++)
	{
		fairness.push(input.at(i));
	}
	//They will print out in order ~~~~~~~ That is fair enough
	while (!fairness.empty())
	{
		cout << fairness.front();
		fairness.pop();
	}
	getchar();
	return 0;
}