#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include "bootchart.h"

int finish = 0;

void handler(int signo)
{
    finish = 1;
}

int main(int argc, char *argv[])
{
    bootchart_init();
    signal(SIGINT, handler);

    while(1) {
        if (bootchart_step() < 0 || finish) {
            bootchart_finish();
            return 0;
        }
        usleep(BOOTCHART_POLLING_MS * 1000);
    }

    return 0;
}
