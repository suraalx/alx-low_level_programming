#include<stdio.h>
#include <unistd.h>
int main(void) {
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const int len = sizeof(msg) - 1;  // don't include the terminating null character
    // write the message to standard error (file descriptor 2)
    if (write(2, msg, len) != len) {
        return 1;  // return 1 to indicate an error
    }
    return 0;  // return 0 to indicate success
}
