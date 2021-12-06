#include <stdio.h>;


int insert(int key, char value, BD BD),
    remove(int key, BD BD),
    search(int key, BD BD),
    update(int key, char value, BD BD);

int main(void) {

    BD myBD;
    myBD.newRow.id = 1;
    myBD.newRow.type = 'a';
    myBD.newRow.data = 'b';

    printf("%d", &myBD.newRow.id);

    return 1;

};

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
