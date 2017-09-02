/*
Prints all prime factors up to an integer.
*/
#include <cstdio>;
#include <cstdlib>;
#include <iostream>;
using namespace std;

vector<int> factors(unsigned int num){
    vector<int> factors;
    for (int i=1;i<=num;++i){
        if (num%i==0){
            factors.push_back(i);
        }
    }
    return factors;
}

bool isPrime(unsigned int num) {
	if (num < 2) {
		return false;
	} else if (num % 2 == 0) {
		return false;
	} else if (num == 2) {
		return true;
	} else {
		for (int i = 3; i * i <= num; i+= 2) {
			if (num % i == 0) {
				return false;
			}
		}
	}
	return true;
}

void findPrimeFactors(unsigned int num) {
	vector<int> factors = factors(num);
	for (unsigned int i = 0; i < factors.size(); i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
}

int main() {
	unsigned int num;
	cout << "Enter a positive integer: ";
	cin >> num;
	cout << "The prime factors of " << num << " are: ";
	findPrimeFactors(num);
	return 0;
}
