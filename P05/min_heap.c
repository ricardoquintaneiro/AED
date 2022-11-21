#include <stdio.h>
#include <stdlib.h>

#define parent(i) (i/2)
#define child1(i) (2*i)
#define child2(i) (2*i+1)

int check(int *heap, int n) {
    for(int i = 2;i <= n;i++)
        assert(heap[parent(i)] <= heap[i]);
    return 0;
}

int main() {
    return 0;
}