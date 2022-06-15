#include <math.h>
bool is_prime(unsigned);
// Start counting at 0: nth_prime(0) == 2
unsigned nth_prime(unsigned n)
{
	if (n == 0)
		return 2;
	unsigned prime = 3;
	n--;
	while (n > 0) 
	{
		prime += 2;
		if (is_prime(prime))
		{
			n--;
		}
	}
	return prime;
}

bool is_prime(unsigned n)
{
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	for (unsigned i = 2; i < n/2; i++)
		if (n % i == 0)
			return false;
	return true;
}