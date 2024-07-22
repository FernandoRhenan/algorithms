#include <stdio.h>

int main(int argc, char *argv[])
{
    int list[100000], lowV = 0, highV = (sizeof(list) / sizeof(int)) - 1;
    int midV, attempt, wanted = 50085;

    // Preenche o array com valores (para exemplo)
    for (int i = 0; i < 100000; i++)
    {
        list[i] = i + 1;
    }

    while (lowV <= highV)
    {
        midV = (lowV + highV) / 2;
        attempt = list[midV];

        if (attempt == wanted)
        {
            printf("%d", midV);
            return 0;
        }
        if (attempt > wanted)
        {
            highV = midV - 1;
        }
        else
        {
            lowV = midV + 1;
        }
    }
    return -1;
}
