#include <stdio.h>
#include <string.h>

int main()
{

    int age;
    char name [25];//bytes
    char family [50];

    printf("\n What's your name? ");
    fflush(stdout);
    scanf("%s", name);

    printf("\nHow old are you? ");
    fflush(stdout);
    scanf("%d", &age);
    

    printf("What are the names of your family members? ");
    fflush(stdout);
    getchar();
    fgets(family, 50 , stdin);

    printf("Hello %s, hope you're doing good ",name);//zedet #include <string.h> to not make it go down on the next line , the part apres la virgule`
    printf("\nYou are %d years old\n",age);
    printf("You're family members are: %s",family);


    return 0;

}

