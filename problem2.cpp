#include <iostream>
using namespace std;

// Prints Fibonacci sequence up to 'limit' and returns the sum of all shown even valued terms
int fib_even_sum(int limit)
{
	int n = 1;
	int n_1 = 1;
	int n_2 = 0;

	int sum = 0;
	int tmp;

	cout << "Fibonacci sequence up to " << limit << endl;

	while(n < limit)
	{
		cout << n << endl;

		if(n > 1 && n%2 == 0)
			sum += n;

		tmp = n;
		n += n_1;
		n_1 = tmp;

	}

	return sum;
}

int main()
{
	int answer = fib_even_sum(4000000);
	cout << "The sum of all even Fibonacci numbers up to 4,000,000 is " << answer << endl;
}