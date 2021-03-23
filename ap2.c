#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[5]; //크기가 5인 배열 list 선언
    int *plist[5]; //정수형 포인터 5개 선언

    list[0]=10; /*배열 list의 0번째 값에 10 할당*/
    list[1]=11; /*배열 lsit의 1번째 값에 11 할당*/

    plist[0]=(int *)malloc(sizeof(int)); /*plist[0]에 int형 사이즈 만큼 메모리 할당*/

    printf("2020039071 JoJunHwa\n");
    printf("list[0] \t=%d\n",list[0]); /*list[0]의 값 출력*/
    printf("address of list \t= %p\n",list); /*list의 값 즉 list의 시작 주소 출력*/
    printf("address of list[0] \t= %p\n",&list[0]); /*list[0]의 주소 즉 list의 시작 주소 출력*/
    printf("address of list + 0 \t= %p\n",list+0); /*list+0의 값 즉 list에서 오프셋이 0인 부분의 주소 출력*/
    printf("address of list + 1 \t= %p\n",list+1); /*list+1의 값 즉 list에서 오프셋이 1인 부분의 주소 출력*/
    printf("address of list + 2 \t= %p\n",list+2); /*list+2의 값 즉 list에서 오프셋이 2인 부분의 주소 출력*/
    printf("address of list + 3 \t= %p\n",list+3); /*list+3의 값 즉 list에서 오프셋이 3인 부분의 주소 출력*/
    printf("address of list + 4 \t= %p\n",list+4); /*list+4의 값 즉 list에서 오프셋이 4인 부분의 주소 출력*/
    printf("address of list[4] \t= %p\n",&list[4]); /*list[4]의 주소 출력*/

    free(plist[0]); /*plist[0]의 메모리 할당 해제*/

}