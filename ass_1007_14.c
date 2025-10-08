#include <stdio.h>
int main() {
int numbers[3];
int i, smallest;
printf("Enter three numbers:\n");
for (i = 0; i < 3; i++) {
scanf("%d", &numbers[i]);
}
smallest = numbers[0];
for (i = 1; i < 3; i++) {
if (numbers[i] < smallest) {
smallest = numbers[i];
}
}
printf("Smallest number is %d\n", smallest);
return 0;
}
