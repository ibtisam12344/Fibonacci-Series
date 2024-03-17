#include<iostream>
using namespace std;
void Fibonacci(int r)
{
	int first = 0;
	int second = 1;
	int third;
	cout << first << " " << second << " ";
	for (int i = 0; i < r; i++)
	{
		third = first + second;
		cout << third << " ";
		first = second;
		second = third;
	}
}
int main()
{
	cout << "Enter the range of the series" << endl;
    int range;
	cin >> range;
	Fibonacci(range);
	return 0;
}