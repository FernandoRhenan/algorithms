#include <stdio.h>

//
//
//
//
//
//
//  Incluir explicação passo-a-passo
//
//
//
//
//
//
//

int sum(int *arr, int index, int size)
{
    // Se o index bater no tamanho do array, a recursão termina e começa o processo de desmontagem da stack
    // retornando de fato os valores para cada respectiva chamada da função
    if (index == size)
        return 0;
    // Caso o index não bata o tamanho do array, uma chamada a mais é adicionada a stack.
    return arr[index] + sum(arr, index + 1, 4);

    // Na desmontagem da stack o que acontece é o seguinte:
    // Cada retorno de sum é um numero, enquando há recursão, o número será adicionado com o retorno da recursão:
    // Na última execução da recursão, que é o caso base, o que temos é isso:

    // 4º (e ultima) chamada - return arr[index] + sum(arr, index + 1, 4) == return 4 + 0 == (4)
    // 3º            chamada - return arr[index] + sum(arr, index + 1, 4) == return 3 + 4 == (7)
    // 2º            chamada - return arr[index] + sum(arr, index + 1, 4) == return 2 + 7 == (9)
    // 1º            chamada - return arr[index] + sum(arr, index + 1, 4) == return 1 + 9 == (10)

    // array[3] == (4) + array[2] == (3) + array[1] == (2) + array[0] == (1) == 10
    // Simplificando é isso:
    // 4 + 3 + 2 + 1
    // = 10
}

int main(void)
{
    // Define o array
    int arr[4] = {1, 2, 3, 4};
    // Faz a primeira chamada para a função sum e coloca o retorno dela como parametro do printf.
    printf("%d", sum(arr, 0, 4));

    return 0;
}
