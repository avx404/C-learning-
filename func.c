#include <stdio.h>

// function prototype 
int avg_3(int a , int b ,  int c);

int avg_3(int a , int b  , int c ){
    return (a + b + c)/ 3 ;


}

// the function to convert the celcius to feranite 
// function prototype 
int tep(int temp);

// function discription
int tep(int temp){
    int val = (temp * 1.8) + 32 ;
    return val ; 
}


// star pattern 
int star(int number);

int star(int number){
    

}



int main()
{
    // here we are going to make the functions
    int x = 4 , y = 34 , z = 3 ;
    int answer = avg_3(x, y , z);
    printf("the average of the three numbers are %d\n" , answer);

    int cel = 100;
    printf("the answer is %d" , tep(cel));
    return 0;
}