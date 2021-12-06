int main() {

    struct data
    {
        char a;
    } myData;
    
    struct row
    {
        int id;
        char type;
        struct data myData;
        
    } newRow;
    
    newRow.id = 5;
    newRow.type = 'a';
    newRow.myData = myData;

    struct BD
    {
        struct row newRow;
        
    } myBD;
    
    printf("%d", myBD.newRow.id);

    return 0;
};

