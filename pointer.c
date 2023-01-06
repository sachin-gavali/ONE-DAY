// Pointer in c 
#include<stdio.h>
// recursion 
int fact (int num){
    // base case 
    if(num == 0 || num == 1){
        return 1;
    }
    return num * fact(num-1);// 5 * 4 * 3  * 2 * 1 = 120 
}

// example of structure 
void structure(){
    struct student {
        char student_name[20];
        int student_id ;
        int student_phoneNo;
        int student_rollNo;
    }s1;

    
}

int main(){
    int num = 5;
    int *ptr = &num;
    printf("\n Value of Num = %d",num);// print value using varible 
    printf("\n Value of Num = %d",*ptr);// print value using pointer
    printf("\n Address of Num = %d",&num );// address of Number 
    printf("\n Address of Num = %d",ptr );// address of Number using pointer 

    // factorial of n number 

    int ans = fact(num);// return value of function store in ans variable and then print it
    printf(" \n Factorial  of  %d = %d",num,ans);

    /*  Use of Stracture  */

    return 0; 
    
}