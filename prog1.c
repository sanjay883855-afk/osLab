#include<stdio.h>
#include<stdlib.h>
int main()
{
    print("Current Directory\n");
    system("pwd");
    print("\nfiles\n");
    system("ls");
    print("\nCreating Directory\n");
    system("mkdir Demo");
    printf("\nListing Files Again\n");
    system("ls");
    printf("\nReamving Directory\n");
    system("rmdir Demo");
    return 0;
}