#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n)
{
	// Greedy Algorithm
	vector<int> summands;
	int l = 1;
	if ( n <= 2 * l)
	{
		summands.push_back(n);
	}
	else
	{
		while (n > 2 * l)
		{
			summands.push_back(l);
			n -= l;
			l++;
		}
		summands.push_back(n);
	}

	return summands;
}

int main() {
	int n;
	std::cin >> n;  // Input the target number
	vector<int> summands = optimal_summands(n);
	std::cout << summands.size() << '\n';
	for (size_t i = 0; i < summands.size(); ++i) {
		std::cout << summands[i] << ' ';  // Output the summands
	}
}
