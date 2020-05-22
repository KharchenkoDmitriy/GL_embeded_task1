#include <stdlib.h>
#include <stdio.h>
int steps(int n, int k)
{
    if(n <= 0 || k < 0)
    {
        return 0;
    }
    return 1+(n-1)/(k+1);
}
int main(int argc, char **argv)
{
    int N = atoi(argv[1]);
    int K = atoi(argv[2]);
    printf("%d\n", steps(N,K));
}
