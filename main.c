#include <stdio.h>

struct BytesBuffer {
    char bytes[];
}

int main(int args, char *argv[]){

    char file_name = *argv[1];

    FILE *ptr = fopen(file_name, "rb");
    if (ptr == null){
        printf("read failed");
        return 1;
    }

    struct BytesBuffer buffer;
    int buffer_count = 0;
    while (fread(&buffer, sizeof(struct BytesBuffer),1,ptr)){
        printf("%08x", buffer.bytes);
        buffer_count++;
    }
    return 0;
}
