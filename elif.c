#include <stdio.h>

int main() {
    int p, h, r;
    scanf("%d", &p);
    scanf("%d", &h);
    scanf("%d", &r);

    if (p * h > r) {
        printf("YES\n");
    } else if (p * h < r) {
        printf("NO\n");
    } else if (p * h == r) {
        printf("BARELY\n");
    }

    return 0;
}
