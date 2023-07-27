#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getHighestBase(int num) {
    int highestBase = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit > highestBase) {
            highestBase = digit;
        }
        num /= 10;
    }
    return highestBase + 1;
}

int main() {
    srand(time(0));

    // Generate a random 10-digit integer with the last place digit at least 5
    int lower_bound =(int) 5000000000;  // 10-digit integer with last place digit at least 5
    int upper_bound =(int) 9999999999;  // 10-digit integer with all digits are 9
    int random_integer = (rand() % (upper_bound - lower_bound + 1)) + lower_bound;

    // Calculate the highest base of the random integer
    int highest_base = getHighestBase(random_integer);

    // Print the random integer and its highest base
    printf("The Highest Base of %d is %d.\n", random_integer, highest_base);

    return 0;
}