#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long secondscalc(const char* funtime) {
    char* token;
    unsigned long totalseconds1 = 0;
    char* hours=strtok((char*)funtime, ":");
    char* minutes=strtok(NULL, ":");
    char* seconds=strtok(NULL, ":");
    unsigned long hours1=strtoul(hours, NULL, 10);
    unsigned long minutes1=strtoul(minutes, NULL, 10);
    unsigned long seconds1=strtoul(seconds, NULL, 10);
    totalseconds1 = hours1*3600 + minutes1*60 + seconds1;
    return totalseconds1;
}

int main() {
    char maintime[100];
    printf("Enter time in the format hh:mm:ss\n");
    scanf("%99s", maintime);
    unsigned long totalseconds = secondscalc(maintime);
    printf("Total seconds: %lu\n", totalseconds);

    return 0;
}
