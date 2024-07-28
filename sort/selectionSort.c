#include <stdio.h>

int main()
{
    int array[] = {64, 25, 12, 22, 11, -255, 10, 543, 11, 0, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        int smallest_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[smallest_index])
            {
                smallest_index = j;
            }
        }

        if (smallest_index != i)
        {
            int aux = array[i];
            array[i] = array[smallest_index];
            array[smallest_index] = aux;
        }
    }

    // Just prints, this is not part of selection sort
    for (int x = 0; x < n; x++)
    {
        printf("%d, ", array[x]);
    }

    return 0;
}
