#include <stdio.h>
#include <cmath>

using namespace std;

void update(int *a,int *b) 
{
    int pa = *a + *b;
    int pb = abs(*b - *a);
    *a = pa;
    *b = pb;
}

int main() {
    int a, b;
    
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", pa, pb);

    return 0;
}
