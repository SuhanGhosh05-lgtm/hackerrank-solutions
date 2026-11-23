#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    char ch;
    double d;
    float f;
    int i;
    long long l;
    scanf("%d %lld %c %f %lf", &i, &l, &ch, &f, &d);

    printf("%d\n", i);
    printf("%lld\n", l);
    printf("%c\n", ch);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);
    return 0;
}
