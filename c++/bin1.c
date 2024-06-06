// C Program to illustrates how we can write a struct to a
// binary file
#include <stdio.h>
int main()
{
    int a='গ';
    char c = 'D';
    //a = c;
    // Create an instance of the struct
    //struct Person person = { "John", 35, 6.0 };

    // Open a file in binary write mode
    FILE* file = fopen("person_data.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write the struct data to the file
    fwrite(&a, sizeof(a), 1, file);
    fwrite(&c,sizeof(char),1,file);
    // Close the file
    fclose(file);

    printf("Struct data written to Binary file "
           "successfully.\n");

    return 0;
}
