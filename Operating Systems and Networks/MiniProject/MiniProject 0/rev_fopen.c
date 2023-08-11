#include "main.h"

void rev(char *str)
{
    int len = strlen(str);
    for (int i=0, j=len-1; i < j; i++, j--)
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    } 
}

int main(int argc, char *argv[])
{
    FILE *inputFile, *outputFile;
    char line[1000];

    //Check if a file name is provided
    if (argc != 2)
    {
        printf("Usage: %s <input file name>\n", argv[0]);
        return 1;
    }

    // Open the input file for reading
    inputFile = fopen(argv[1], "r");
    if (inputFile == NULL)
    {
        printf("Error: Give proper permissions\n");
        return 1;
    }

    // Create a new filename for the reversed copy
    char *fileName = strrchr(argv[1], '/');
    if (fileName == NULL)
    {
        fileName = argv[1];
    }
    else
    {
        fileName++;
    }
    
    char revFileName[100];
    sprintf(revFileName,"Copies/%s_reversed.txt", fileName);
    //Output file writing
    outputFile = fopen(revFileName, "w");
    if(outputFile == NULL)
    {
        printf("Error: Can't open output file\n");
        fclose(inputFile);
        return 1;
    }

    // Main shit
    while(fgets(line, sizeof(line), inputFile)){
        rev(line);
        fputs(line, outputFile);
    }
    
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}