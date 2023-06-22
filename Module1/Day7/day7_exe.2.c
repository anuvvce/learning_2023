#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 1024

void changecase(char* str, char option) 
{
    switch (option) 
    {
        case 'u':
            for (int i = 0; i < strlen(str); i++) 
            {
                str[i] = toupper(str[i]);
            }
            break;
        case 'l': 
            for (int i = 0; i < strlen(str); i++) 
            {
                str[i] = tolower(str[i]);
            }
            break;
        case 's': 
            str[0] = toupper(str[0]);
            for (int i = 1; i < strlen(str); i++) 
            {
                if (isspace(str[i-1])) 
                {
                    str[i] = toupper(str[i]);
                } else 
                {
                    str[i] = tolower(str[i]);
                }
            }
            break;
        default: 
            break;
    }
}

int main(int argc, char* argv[]) 
{
    if (argc < 3) 
    {
        printf("Insufficient arguments. Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    char* option = argv[1];
    char* sourcepath = argv[2];
    char* destinationpath = argv[3];

    FILE* sourcefile = fopen(sourcepath, "r");
    if (sourcefile == NULL) 
    {
        printf("Failed to open the source file.\n");
        return 1;
    }

    FILE* destinationfile = fopen(destinationpath, "w");
    if (destinationfile == NULL) 
    {
        printf("Failed to create the destination file.\n");
        fclose(sourcefile);
        return 1;
    }

    char buffer[BUFFER_SIZE];

    while (fgets(buffer, BUFFER_SIZE, sourcefile) != NULL) 
    {
        changecase(buffer, option[0]);
        fputs(buffer, destinationfile);
    }

    printf("File copied successfully with case handling.\n");

    fclose(sourcefile);
    fclose(destinationfile);

    return 0;
}
