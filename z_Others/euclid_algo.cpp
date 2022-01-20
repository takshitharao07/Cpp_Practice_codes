// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to stores the values of x and y
// and find the value of gcd(a, b)
long long ExtendedEuclidAlgo(
	long long a, long long b,
	long long& x, long long& y)
{
	// Base Case
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	else {

		// Store the result of recursive call
		long long x1, y1;
		long long gcd
			= ExtendedEuclidAlgo(b, a % b, x1, y1);

		// Update x and y using results of
		// recursive call
		x = y1;
		y = x1 - floor(a / b) * y1;

		return gcd;
	}
}

// Function to give the distinct
// solutions of ax = b (mod n)
void linearCongruence(long long A,
					long long B,
					long long N)
{
	A = A % N;
	B = B % N;

	long long u = 0, v = 0;

	// Function Call to find
	// the value of d and u
	long long d = ExtendedEuclidAlgo(A, N, u, v);

	// No solution exists
	if (B % d != 0) {
		cout << -1 << endl;
		return;
	}

	// Else, initialize the value of x0
	long long x0 = (u * (B / d)) % N;
	if (x0 < 0)
		x0 += N;

	// Print all the answers
    cout<< "\nValues of X: ";
	for (long long i = 0; i <= d - 1; i++)
		cout<<(x0 + i * (N / d)) % N << " ";
}

// Driver Code
int main()
{
	// Input
	long long A,B,N;
    cout<<"\nEnter the value of A,B and N of [AX=B (mod N)]: ";
    cin>>A>>B>>N;

	// Function Call
	linearCongruence(A, B, N);

	return 0;
}
