#include <stdio.h>

void copyfile( char* sourcepath, char* destinationpath) 
{
    FILE* sourcefile = fopen(sourcepath, "rb");
    if (sourcefile == NULL) 
    {
        printf("Failed to open the source file.\n");
        return;
    }

    FILE* destinationfile = fopen(destinationpath, "wb");
    if (destinationfile == NULL) 
    {
        printf("Failed to create the destination file.\n");
        fclose(sourcefile);
        return;
    }

    char buffer[1024];
    size_t bytesread;

    while ((bytesread = fread(buffer, 1, sizeof(buffer), sourcefile)) > 0) 
    {
        fwrite(buffer, 1, bytesread, destinationfile);
    }

    printf("File copied successfully.\n");

    fclose(sourcefile);
    fclose(destinationfile);
}

int main() 
{
    char sourcepath[100];
    char destinationpath[100];

    printf("Enter the path of the source file: ");
    scanf("%s", sourcepath);

    printf("Enter the path of the destination file: ");
    scanf("%s", destinationpath);

    copyfile(sourcepath, destinationpath);

    return 0;
}
