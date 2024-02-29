#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>


struct Options {
    char isDirectory;
    char isLink;
    char isFile;
    char sort;
    char* dir;
};

struct Options parse(int argc, char **argv) {
    struct Options options = {0, 0, 0, 0, NULL};

    for(int i = 1; i < argc; i++) {
        if(argv[i][0] == "-") {
            for(int j = 1; argv[i][j] != '\0'; j++) {
                switch (argv[i][j])
                {
                case 'd':
                    options.isDirectory = 1;
                    break;
                case 'f':
                    options.isFile = 1;
                    break;
                case 'l':
                    options.isLink = 1;
                    break;
                case 's':
                    options.sort = 1;
                    break;
                default:
                    printf("Option only: -l, -d, -f, -s. Your option %c", argv[i][j]);
                    exit(-1);
                }
            }
        } else if (!options.dir) {
            options.dir = argv[i];
        } else(printf("Something wrong"));
    }
    
    if(options.dir == 0) {
        options.dir = "./";
    }

    if((options.isDirectory || options.isFile || options.isLink) == 0) {
        options.isDirectory, options.isFile, options.isLink = 1;
    }

    return options;
}


int main(int argc, char **argv) {
    
    
    return;
}