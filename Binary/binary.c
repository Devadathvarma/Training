#include <stdio.h>

int countOne(int num){
    int count=0;
    while(num>0){
        if(num%2==1){  // If the remainder when divided by 2 is 1
            count++;   // Increment the count
        }
        num=num/2;     // Divide the number by 2 to shift bits
    }
    return count;
}

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int result=countOne(num);
    printf("Number of 1's in the binary representation of %d is: %d\n", num, result);
    return 0;
}