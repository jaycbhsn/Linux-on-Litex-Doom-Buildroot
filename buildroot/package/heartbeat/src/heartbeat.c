#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[]) {
    short SLEEP_LENGTH = -1;
    time_t t = time(NULL);
    struct tm tm;
    char ch;   
     
    FILE *fs;
    fs = fopen("/root/sleeplength.txt", "r");
    ch = fgetc(fs); 
    SLEEP_LENGTH = atoi(&ch);
       
    if (SLEEP_LENGTH < 1) {
     	SLEEP_LENGTH = 2;
    }
           
    //while(1) {
    for(int i = 0; i < 4; i++) {
        t = time(NULL);
        tm = *localtime(&t);
        printf("[Heartbeat] - Still Breathing at time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
        sleep(SLEEP_LENGTH);
    }
    return 0;
}
