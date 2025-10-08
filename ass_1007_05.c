#include <stdio.h>
int main() {
int N, i;
printf("Enter the value of N: ");
scanf("%d", &N);
printf("First %d odd numbers are:\n", N);
for(i = 1; i <= 2*N; i += 2) {
printf("%d ", i);
}
printf("\n");
return 0;
}
