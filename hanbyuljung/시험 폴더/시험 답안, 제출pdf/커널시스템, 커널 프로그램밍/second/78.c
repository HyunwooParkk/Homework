#include <signal.h>
#include <unistd.h>

int main(void)
{
    signal(SIGINT, SIG_IGN);
    for(;;)
        pause();
    return 0;
}
