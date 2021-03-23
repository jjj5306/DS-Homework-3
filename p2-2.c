#include <stdio.h>

void print1(int *ptr, int rows); //함수 선언

int main()
{
    int one[]= {0, 1, 2, 3, 4}; /*0, 1, 2, 3, 4 가 차례로 저장된 배열 one 선언*/

    printf("2020039071 JoJunHwa\n");
    printf("one     = %p\n",one); /* one의 값 즉 배열의 시작 주소 출력*/
    printf("&one    = %p\n",&one); /*one의 주소 즉 배열의 시작 주소 출력*/
    printf("&one[0] = %p\n",&one[0]); /*one[0]의 주소 즉 배열의 시작 주소 출력*/
    printf("\n");

    print1(&one[0],5); /*one의 시작 주소와 5를 인수로 하는 함수 호출*/

    return 0;
}

void print1(int *ptr, int rows)
{
    /* print out a one-dimensional array using a pointer*/

    int i;
    printf("Address \t Contents\n"); 
    for (i=0;i< rows;i++)
        printf("%p \t %5d\n",ptr + i, *(ptr+i)); /*ptr+i의 값과 *(ptr + i)의 값 차례로 출력, 
        즉 ptr이 one의 시작 주소를 가르키고 있으므로 list의 오프셋이 i인 부분의 주소와 해당 값을 출력함*/
    printf("\n");

}