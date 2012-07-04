#include <iostream>
using namespace std;

// Returns sum of all multiples of two integers 'a' and 'b' under the value
// given by 'limit'
int sum_multiples(int a, int b, int limit)
{
	// determine number of multiples under 'limit' for input integers
	int a_items = (limit - 1) / a;
	int b_items = (limit - 1) / b;

	int sum = 0;

	for(int k = 1; k <= a_items; k++)
		sum += a*k;

	for(int k = 1; k <= b_items; k++)
	{
		if( (b*k)%a ) // avoid re-adding multiples that were already calculated for the first integer
			sum += b*k;
	}

	return sum;
}

int main()
{
	int answer = sum_multiples(3, 5, 1000);
	cout << "The sum of all multiples of 3 or 5 below 1000 is: " <<  answer << endl;
}