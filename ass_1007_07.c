#include <stdio.h>
int main() {
int num, temp, digit, sum = 0;
printf("Enter a number: ");
scanf("%d", &num);
if (num < 0) {
num = -num;
}
temp = num;
int count = 0;
for (int n = temp; n > 0; n /= 10) {
count++;
}
for (int i = 0; i < count; i++) {
digit = temp % 10;
sum += digit;
temp /= 10;
}
printf("Sum of digits = %d\n", sum);
return 0;
}
