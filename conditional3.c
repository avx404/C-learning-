#include <stdio.h>

int main()
{
    //we can also use the if , else if and else for the conditionals in c language
    int a = 5;
    if(a>3){
        printf("you are a better student\n");
    }
    else if(a==3){
        printf("you are not a goof one \n");

    }
    else{
        printf("you are a bad student\n");
    }

    a>3 ? printf("you are a better student\n") : printf("you are a bad student\n");

    return 0;

    // we can write programs like this also 
}