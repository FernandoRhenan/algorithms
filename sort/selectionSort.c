#include <stdio.h>

int main()
{
    int array[] = {64, 25, 12, 22, 11, -255, 10, 543, 11, 0, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j;

    // n - 1 == o loop percorre até o penúltimo elemento.
    for (i = 0; i < n - 1; i++)
    {
        int smallest_index = i;
        for (j = i + 1; j < n; j++)
        {
            // Procura o menor número de todo o array e atribui o seu index a smallest_index
            if (array[j] < array[smallest_index])
            {
                smallest_index = j;
            }
        }

        // Se o menor número ja não estiver na posição correta, ele o põe.
        if (smallest_index != i)
        {
            int aux = array[i];
            array[i] = array[smallest_index];
            array[smallest_index] = aux;
        }
    }

    for (int x = 0; x < n; x++)
    {
        printf("%d, ", array[x]);
    }

    return 0;
}
