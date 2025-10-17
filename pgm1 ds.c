#include <stdio.h>
#include <stdlib.h>

int main()
struct students
{
    char name [10];
    int sem;
    char branch[5];
};
{
    struct students s1;
    printf("/nread name:");
    scanf("%s",s1.name);
    printf("/nread sem:");
    scanf("%s",&s1.sem);
    printf("/nread branch");
    scanf("%s",s1.branch);
    printf("/nname=%s",s1.name);
    printf("/nsem=%d",s1.sem);
    printf("/nbranch=%s",s1.branch);
    return 0;
}





















