#include <stdio.h>

int Eins(int l, int b, int h);

int main() {
    int l, b, h;
    scanf("%d%d%d", &l, &b, &h);
    printf("%d", Eins(l, b, h));
    return 0;
}

int Eins(int l, int b, int h) {
    int v;
    v = l * b * h ;
    return v;
}
