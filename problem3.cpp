#include <iostream>
using namespace std;

int find_prime(int limit)
{
	int index = 0; // amount of prime numbers found
	int num = 1; // first number to check for primality (1 is not a prime number)
	int check; // number which 'num' will be divided by during check, 2 for first check
	int stop; // indicator which, if algorithm reaches without an even division, shows primality
	bool prime = true; // true if number is determined to be prime

	while(index < limit)
	{
		num += 1;
		stop = num / 2;
		check = 2;

		// check if current number is prime
		while(check <= stop)
		{
			if( !(num % check) )
			{
				prime = false;
				break;
			}
			prime = true;
			check += 1;
		}

		if(prime)
			index += 1;
	}

	return num;
}

int main()
{
	cout << "The 10,001st prime number is: " << find_prime(10001) << endl;
	return EXIT_SUCCESS;
}