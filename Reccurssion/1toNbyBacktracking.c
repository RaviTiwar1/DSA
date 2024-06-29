#include <stdio.h>

void fun(int i, int n) {
    if (i > n) {
        return;
    } else {
        printf("%d ", i);  // Use "%d" format specifier to print an integer
        fun(i + 1, n);

    }
}

int main() {
    int n;
    printf("Enter n:");  // Use printf instead of print
    scanf("%d", &n);
    fun(1, n);
    return 0;
}
