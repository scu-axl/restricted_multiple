#include <iostream>
#include <stdlib.h>
using namespace std;

int restricted_multiple(int a,int b)
{
	int result = 0;
	int abs_b = abs(b);
	for (auto i = 0; i < abs_b; i++)
	{
		result += a;
	}
	
	if (b < 0)
	{
		result *= -1;
	}

	cout << a << " * " << b << " equal " << result << endl;
	return result;
}

int main()
{
	restricted_multiple(1,1);
	return 0;
}
