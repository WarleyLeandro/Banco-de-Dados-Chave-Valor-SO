#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao=1;


    while(opcao!=0)
    {
        printf("**********OPCOES**********");
        printf("\nEscolha uma das opcoes abaixo: ");
        printf("\n1-Inserir\n2-Remover\n3-Buscar\n4-Atualizar\n0-Sair\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:

            system("cls");
            printf("Opcao Inserir\n");
            system("pause");
            system("cls");

            break;

        case 2:

            system("cls");
            printf("Opcao Remover\n");
            system("pause");
            system("cls");

            break;

        case 3:

            system("cls");
            printf("Opcao Buscar\n");
            system("pause");
            system("cls");

            break;

        case 4:

            system("cls");
            printf("Opcao Atualizar\n");
            system("pause");
            system("cls");

            break;

        case 0:

            printf("\nSaindo do programa!\n");
            system("pause");
            system("cls");

            break;

        default:

            system("cls");
            printf("\nDigite uma opcao valida!\n");
            system("pause");
            system("cls");

            break;

        }

    }

    return 0;
}
