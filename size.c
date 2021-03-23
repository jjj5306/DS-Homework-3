#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **x;
    
    printf("2020039071 JoJunHwa\n");
    printf("sizof(x) = %lu\n", sizeof(x)); /* x의 사이즈 출력, x는 주소를 담고 있고 32비트 운영 체제를 사용하므로 4 출력*/
    printf("sizof(*x) = %lu\n", sizeof(*x)); /* *x의 사이즈 출력, *x는 주소를 담고 있고 32비트 운영 체제를 사용하므로 4 출력*/
    printf("sizof(**x) = %lu\n", sizeof(**x));/* **x의 사이즈 출력, x는 정수를 담고 있으므로 4 출력*/

}