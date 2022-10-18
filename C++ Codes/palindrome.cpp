#include <iostream>


bool isPalindrome (int number) {
    int decomposed = number, reversed = 0;
    while (decomposed) {
        reversed = 10 * reversed + (decomposed % 10);
        decomposed /= 10;
    }
    return reversed == number;
}


int nextPalindromicNumber (int number) {
    while (!isPalindrome(++number));
    return number;
}


int main () {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int number;
        std::cin >> number;
        std::cout << nextPalindromicNumber(number) << '\n';
    }
}
