#include <stdio.h>
#include <string.h>


int main()
{
    char name[11];//array is called name
    printf("enter your name: ");
    scanf("%10s", &name);//limiting the number of characters
    printf("your name is %s\n", name);
    
    int i, length = strlen(name);
    for (i=(length-1);i>=0;i--);
    {
        printf("%c",name[i]);
    

    }
    printf("here is the reverse:%s", strrev((name)));//the reverse of the name
    return 0;
}

