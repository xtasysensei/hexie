#include <stdio.h>
#include <stdlib.h>

// struct BytesBuffer {
//     char bytes[];
// };

int main(int args, char** argv){

    char* file_name = argv[1];
    // size_t length = sizeof(argv) / sizeof(argv[0]);

    // if (length > 1 || length == 0) {
    //     printf("too many arguments");
    // }
    if (args > 2) {
        printf("Too many arguments");
        exit(1);

    } else if(args < 2) {
        printf("Not enough arguments");
        exit(1);
    }

    FILE *ptr = fopen(file_name, "rb");
    if (ptr == NULL){
        printf("read failed");
        exit(1);
    }
    printf("read successful");
    // struct BytesBuffer buffer;
    // int buffer_count = 0;
    // while (fread(&buffer, sizeof(struct BytesBuffer),1,ptr)){
    //     printf("%08x", buffer.bytes);
    //     buffer_count++;
    // }
    return 0;
}
