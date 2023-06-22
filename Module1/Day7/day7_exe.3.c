#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct logentry 
{
    int entry_no;
    char sensor_no[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
};
typedef struct logentry Logentry;

void extractlogentries(char* filename, Logentry logentries[], int* count) 
{
    FILE* file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("Failed to open the file.\n");
        return;
    }

    char header[100];
    fscanf(file, "%[^\n]%*c", header); 

    *count = 0;
    while (fscanf(file, "%d,%9[^,],%f,%d,%d,%8[^,\n]%*c", &logentries[*count].entry_no, logentries[*count].sensor_no,
                  &logentries[*count].temperature, &logentries[*count].humidity, &logentries[*count].light,
                  logentries[*count].timestamp) != EOF && *count < MAX_ENTRIES) 
    {
        (*count)++;
    }

    fclose(file);
}

void displaylogentries(Logentry logentries[], int count) 
{
    printf("Log Entries:\n");
    for (int i = 0; i < count; i++) 
    {
        printf("Entry No: %d\n", logentries[i].entry_no);
        printf("Sensor No: %s\n", logentries[i].sensor_no);
        printf("Temperature: %.1f\n", logentries[i].temperature);
        printf("Humidity: %d\n", logentries[i].humidity);
        printf("Light: %d\n", logentries[i].light);
        printf("Timestamp: %s\n", logentries[i].timestamp);
    }
}

int main() 
{
    Logentry logentries[MAX_ENTRIES];
    int count;

    extractlogentries("data.csv", logentries, &count);
    displaylogentries(logentries, count);
    
    return 0;
}

