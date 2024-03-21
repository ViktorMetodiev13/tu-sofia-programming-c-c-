#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char name1[20], name2[20], name3[20];
    long fnum;

    printf("Molia vuvedete vuzrast: ");
    scanf("%d", &age);

    printf("Molia vuvedete tri imena: ");
    scanf("%s %s %s", name1, name2, name3);

    printf("Molia vuvedete faculteten nomer: ");
    scanf("%ld", &fnum);
    
    printf("Trite imena sa %s %s %s\n", name1, name2, name3);
    printf("vashata vazrast e %d\n", age);
    printf("facultetniqt nomer e %ld\n", fnum);

    return 0;
}