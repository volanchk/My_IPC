//
//  main.cpp
//  C++
//
//  Created by Алексей on 06.11.2021.
//

#include <iostream>
#include <stdlib.h>
#include <string.h>

struct person
{

    int id;
    char fname[20];
    char lname[20];

};

int main(int argc, const char * argv[])
{

    FILE *outfile;

    outfile = fopen("hand_shake.txt", "w");

    if (outfile == NULL)
        {
            fprintf(stderr, "\nError opened file\n");
            exit (1);
        }

    struct person input_1 = {1, "Hi Python!"};

    fwrite(&input_1, sizeof(struct person), 1, outfile);

    fclose(outfile);

    return 0;
}
