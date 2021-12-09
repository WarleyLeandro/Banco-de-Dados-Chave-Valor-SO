#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

//TODO: transformar data em um array de string

    typedef struct
    {
        int id;
        char sortKey;
        char data;
        
    } Row;
    
    typedef struct
    {
        Row newRow;

    } BD;
    
    
int insert(int key, char value, BD BD);
int removeValue(int key, BD BD);
int  search(int key, BD BD);
int  update(int key, char value, BD BD);
int list(int key, int fun, int searchParam, BD BD);

int main(){


    BD myBD;
    myBD.newRow.id = 1;
    myBD.newRow.sortKey = 'a';
    myBD.newRow.data = 'b';

    printf("%ls", &myBD.newRow.id);

    
    // time_t inicio = time(0);
    // time_t fim = time(0);
    // time_t total;

    int opcao=1;
    while(opcao!=0)
    {
        printf("**********OPCOES**********");
        printf("\nEscolha uma das opcoes abaixo: ");
        printf("\n1-Inserir\n2-Remover\n3-Buscar\n4-Atualizar\n5-Listar\n0-Sair\nOpcao: ");
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

        case 5:

            system("cls");
            printf("Opcao Listar\n");
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

   // time ( &inicio );
    // time ( &final );
    // time (&total = &final - &inicio );
int insert(int key, char value, BD BD) {
    BD.newRow[key].data = value;
    BD.newRow[key].id = key;
}


int removeValue(int key, BD BD) {
    
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            BD.newRow.id = 0;
            return 1;
        }        
    } 
    return 0;
}

int search(int key, BD BD) {
    
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            return BD.newRow.data;
        }        
    }       
    return 0;
};

int update(int key, char value, BD BD) {
    
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            BD.newRow.data = value;
        }        
    }          
    return 0;
}


//fun == 0 list
//fun == 1 reverse-list
//searchParam: valor passado pelo user para comparação >=1

int list(int key, int fun, int searchParam, BD BD) {
    // int size =10;

    // if(key > searchParam) {
    //     for (int i = key; i < size; i++) {
    //         printf("%ls", BD.newRow[i + 1].id);
    //     }
    // }

    // if(fun == 0) {

    // } else if(fun ==1) {

    // } else {
    //     return -1;
    // }

    return 0;
}