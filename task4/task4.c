int reverse_number(int n) {
    int reverse=0;
    int digit=0;
    if (n==0) {
        return 0;
    }
    do {
        digit = n % 10;
        reverse= reverse * 10 + digit;
        n = n / 10;
} while (n != 0);
    return reverse;
}