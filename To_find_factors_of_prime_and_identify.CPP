#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isprime = (num > 1);

    cout << "Factors are: ";

    for (int i = 1; i * i <= num; i++) {

        if (num % i == 0) {
            cout << i << ",";

            // If the factor is neither 1 nor the number itself,
            // then the number is not prime.
            if (i != 1)
                isprime = false;

            if (num / i != i) {
                cout << num / i << ",";

                // Check the paired factor as well.
                if (num / i != num)
                    isprime = false;
            }
        }
    }

    if (isprime)
        cout << " Number is Prime";
    else
        cout << " Number is not Prime";

    return 0;
}