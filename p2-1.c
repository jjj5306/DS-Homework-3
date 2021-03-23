#include <stdio.h>

#define MAX_SIZE 100 //MAX_SIZE 선언

float sum(float [], int n); //sum 함수 선언
float input[MAX_SIZE], answer; // 전역변수 선언
int i;

int main()
{
    
    for(i=0;i<MAX_SIZE;i++)
        input[i]=i; /*input[i] 에 [i]를 MAX_SIZE까지 할당*/
    
    printf("2020039071 JoJunHwa\n");
    /* for checking call by reference */
    printf("address of input = %p\n",input); /*input의 주소 출력*/
    
    answer = sum(input,MAX_SIZE); /*answer에 sum함수의 리턴 값 할당*/
    printf("The sum is : %f\n",answer); /*answer의 값 출력*/

}

float sum(float list[],int n)
{
    printf("value of list = %p\n",list); /*list의 값, 즉 input의 주소 출력*/
    printf("address of list = %p\n\n",&list); /*list의 주소 출력*/

    int i;
    float tempsum = 0;
    for(i=0;i<n;i++)
        tempsum += list[i];
    return tempsum;


}