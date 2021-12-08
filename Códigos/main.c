#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

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
    
    
int insert(int key, char value, BD BD);
int removeValue(int key, BD BD);
int  search(int key, BD BD);
int  update(int key, char value, BD BD);

int main(){

    printf("aaaaaaaaaaaaaa");

    BD myBD;
    myBD.newRow.id = 1;
    myBD.newRow.type = 'a';
    myBD.newRow.data = 'b';

    printf("%ls", &myBD.newRow.id);

    int opcao=1;
    time_t inicio = time(0);
    time_t fim = time(0);
    time_t total;

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

   

int removeValue(int key, BD BD) {
    time ( &inicio );
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            BD.newRow.id = 0;
            return 1;
        }        
    } 
    time ( &final );
    time (&total = &final - &inicio );
    printf("\n Tempo demorado : %s",ctime(&total));
    return 0;
}

int search(int key, BD BD) {
    time ( &inicio );
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            return BD.newRow.data;
        }        
    }     
    time ( &final );
    time (&total = &final - &inicio );
    printf("\n Tempo demorado : %s",ctime(&total));   
    return 0;
};

int update(int key, char value, BD BD) {
    time ( &inicio );
    for (int i = key; i < BD.newRow.id; i++)
    {
        if (key == BD.newRow.id)
        {
            BD.newRow.data = value;
        }        
    }       
    time ( &final );
    time (&total = &final - &inicio );
    printf("\n Tempo demorado : %s",ctime(&total));    
    return 0;
}