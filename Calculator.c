#include <stdio.h>
#include <string.h>

//? adding function for integers
int integerAddFunc(int a, int b){
    return a + b;
}

//? adding function for floats
float floatAddFunc(float a, float b){
    return a + b;
}


//! subtrucing function for integers
int integerSubFunc(int a, int b){
    return a - b;
}

//! subtructing function for floats
float floatSubFunc(float a, float b){
    return a - b;
}


//* multiplying function for integers
int integerMultiFunc(int a, int b){
    return a * b;
}

//* multiplying function for floats
float floatMultiFunc(float a, float b){
    return a * b;
}

//? subdividing function for floats & integers
float floatDividFunc(float a, float b){
    return a / b;
}


int main(){
    int an = 1, i1, i2, ir;
    float f1, f2, fr;
    char type, op;

    while(an == 1){
    //!Asking for the numbers to calculate 
        printf("What types of numbers you want to calculate (integers : i / floats: f)\n");
        scanf(" %c", &type);
        if(type == 'f'){
            printf("Give me the floats a and b yo want to calculate: \n ");
            scanf("%f %f", &f1, &f2);
        }
        else{
            printf("Give me the integers a and b yo want to calculate: \n ");
            scanf("%d %d", &i1, &i2);
        }
    //!operation
        printf("Give the operation to execute : ('+' or '-' or '/' or '*') : \n");
        scanf(" %c", &op);

    //! operate depending of the operation
        switch(op){
            case '+': 
                if(type == 'f'){
                    fr = floatAddFunc(f1, f2);
                    printf("%f + %f = %f\n",f1, f2, fr);
                    break;
                }
                else{
                    ir = integerAddFunc(i1, i2);
                    printf("%d + %d = %d\n",i1, i2, ir);                    
                    break;
                }
            case '-': 
                if(type == 'f'){
                    fr = floatSubFunc(f1, f2);
                    printf("%f - %f = %f\n",f1, f2, fr);
                    break;
                }
                else{
                    ir = integerSubFunc(i1, i2);
                    printf("%d - %d = %d\n",i1, i2, ir);
                    break;
                }
            case '*': 
                if(type == 'f'){
                    fr = floatMultiFunc(f1, f2);
                    printf("%f * %f = %f\n",f1, f2, fr);
                    break;
                }
                else{
                    ir = integerMultiFunc(i1, i2);
                    printf("%d * %d = %d\n",i1, i2, ir);
                    break;
                }
            case '/':
        //! for the division since we need to get an exact number either it integer or float we'll use just floats variables
                if(f2 != 0){     
                    fr = floatDividFunc(f1, f2);
                    printf("%f / %f = %f\n",f1, f2, fr);
                }
                else{
                    printf("Impossible to divide by Zero !!\n");
                }
                break;

            default:
                printf("Invalid operation symbol!!\n");
                break;
        }
        //!updating the loop
                printf("Do you want to continue ? (Yes: 1/ No: 0): \n");
                scanf("%d", &an);
    }
    return 0;
}