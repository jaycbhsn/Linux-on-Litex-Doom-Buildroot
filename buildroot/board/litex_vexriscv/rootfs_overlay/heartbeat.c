#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm tm;
    
    while(1) {
        t = time(NULL);
        tm = *localtime(&t);
        printf("[Heartbeat] - Still Breathing at time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
        sleep(5);
    }
    return 0;
}