#include <stdio.h>

// Ideia do quickSort:
// A primeira coisa a se fazer é verificar se o array tem pelo menos 3 elementos.
// Caso não tenha, deverão ter condicionais verificando se tem 2, 1 ou 0 elementos.
// No caso de ter 2 elementos, o elemento [0] deve ser menor que o elemento [1].
// Caso tenha 1 elemento, apenas retorna o elemento.
// Por último se tiver vazio, apenas retorna uma mensagem ou -1.

// O segundo passo é escolher um elemento que será o pivô.
// ??? Como encontrar um pivô ???
// O pivô será o número de comparação base.
// Haverá 2 sub-arrays, em um serão guardados os números menores que o pivô,
// e em outro serão guardados os números que são maiores que o pivô. (Isso se chama particionamento.)

// Partition by pivot
int partition(int *array, int start, int end)
{
    int pivot = array[end];
    int i = start - 1;
    int temp = 0;
    for (int j = start; j < end; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    temp = array[i + 1];
    array[i + 1] = array[end];
    array[end] = temp;

    return i + 1;
}

void quickSort(int *array, int start, int end)
{
    if (start < end)
    {
        int q = partition(array, start, end);
        quickSort(array, start, q - 1);
        quickSort(array, q + 1, end);
    }
}

int main()
{

    int array[] = {64, 25, 12, 22, 11, -255, 10, 543, 11, 0, 10};
    int n = sizeof(array) / sizeof(int);

    quickSort(array, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
