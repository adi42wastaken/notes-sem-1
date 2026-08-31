#include <stdio.h>

#define MAX_DIGITS 200

typedef struct {
	int digits[MAX_DIGITS];
	int length;
} BigInteger;

void factorial(BigInteger *result, int number)
{
	int carry = 0;

	result->length = 1;
	result->digits[0] = 1;

	for (int multiplier = 2; multiplier <= number; multiplier++) {
		carry = 0;

		for (int digit = 0; digit < result->length; digit++) {
			int product = result->digits[digit] * multiplier + carry;
			result->digits[digit] = product % 10;
			carry = product / 10;
		}

		while (carry > 0) {
			result->digits[result->length] = carry % 10;
			result->length++;
			carry /= 10;
		}
	}
}

int factorialRemainder(const BigInteger *number, int divisor)
{
	int result = 0;

	for (int digit = number->length - 1; digit >= 0; digit--) {
		result = (result * 10 + number->digits[digit]) % divisor;
	}

	return result;
}

int main(void)
{
	BigInteger factorialValue;

	for (int k = 1; k <= 50; k++) {
		factorial(&factorialValue, k);

		int factorialModulo = factorialRemainder(&factorialValue, k + 1);
		if ((15 * factorialModulo * factorialModulo + 1) % (2*k - 3) != 0) {
			printf((("%d\n", 15 * factorialModulo * factorialModulo + 1) % (2*k - 3)));
        }
	}

	return 0;
}