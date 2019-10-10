#include <stdio.h>

// update the add function definition to:
//     1) Have the correct return type
//     2) Have the correct input(s) (and types)
int add(int a, int b){
    // 3) Add two values in it together and save that in a variable
    int c = a + b;
    // 4) return the resulting value
    return c;
}

int main()
{
    printf("Hello Welcome to My Calculator!\n");

    // 5) set up two values which we want to add
    int value1 = 3;
    int value2 = 4;
    
    // 6) then call the add function to add them together
    int result = add(value1,value2);
    
    // then printf the result to display it
    printf("I am adding: %d with %d\n",value1,value2);
    printf("My result is: %d",result);
    
    // that's it we are done with no errors (hopefully)
    return 0;
}
