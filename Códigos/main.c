#include <stdio.h>
#include <stdlib.h>

int insert(int key, char value, BD BD),
    remove(int key, BD BD),
    search(int key, BD BD),
    update(int key, char value, BD BD);

int main()
{

    BD myBD;
    myBD.newRow.id = 1;
    myBD.newRow.type = 'a';
    myBD.newRow.data = 'b';

    printf("%d", &myBD.newRow.id);

    return 1;

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

   //TODO: transformar data em um array de string

    typedef struct
    {
        int id;
        char type;
        char data;
        
    } Row;
    
    typedef struct
    {
        Row newRow;

    } BD;
    
    


int insert(int key, char value, BD BD) {

    return 1;
}

int remove(int key, BD BD) {
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            BD.newRow.id = 0;
            return 1;
        }        
    } 
    return -1;
}

int search(int key, BD BD) {
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            return BD.newRow.data;
        }        
    }    
    return -1;
};

int update(int key, char value, BD BD) {
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            BD.newRow.data = value;
        }        
    }    
    return -1;
}