#include <stdio.h>
#include <string.h>
int main() {
char str1[100], str2[100];
int len1, len2;
printf("Enter the first string: ");
fgets(str1, sizeof(str1), stdin);
printf("Enter the second string: ");
fgets(str2, sizeof(str2), stdin);
str1[strcspn(str1, "\n")] = 0;
str2[strcspn(str2, "\n")] = 0;
len1 = strlen(str1);
len2 = strlen(str2);
if (len1 > len2) {
printf("The first string is longer (%d > %d).\n", len1, len2);
} else if (len1 < len2) {
printf("The second string is longer (%d < %d).\n", len1, len2);
} else {
printf("Both strings are of equal length (%d).\n", len1);
}
return 0;
}
