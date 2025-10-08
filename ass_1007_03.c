#include <stdio.h>
int main() {
int arr[100], n, i, pos, value, found = 0;
printf("Enter number of elements in array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter the value to delete: ");
scanf("%d", &value);
for(i = 0; i < n; i++) {
if(arr[i] == value) {
pos = i;
found = 1;
break;
}
}
if(found) {
for(i = pos; i < n - 1; i++) {
arr[i] = arr[i + 1];
}
n--;
printf("Array after deleting %d:\n", value);
for(i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
} else {
printf("Element %d not found in the array.\n", value);
}
return 0;
}
