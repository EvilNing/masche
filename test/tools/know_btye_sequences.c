//Compile this program with -O0
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    char *in_data_segment[] = "0xC0xA0xF0xE";

    char in_stack[] = {0xd, 0xe, 0xa, 0xd, 0xb, 0xe, 0xe, 0xf};

    char *in_heap = malloc(7 * sizeof(char));
    in_heap[0] = 0xb;
    in_heap[1] = 0xe;
    in_heap[2] = 0xb;
    in_heap[3] = 0xe;
    in_heap[4] = 0xf;
    in_heap[5] = 0xe;
    in_heap[6] = 0x0;

    for (;;) sleep(1);

    return 0;
}
