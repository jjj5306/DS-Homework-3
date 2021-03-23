#include <stdio.h>

struct student
{
    char lastName[13]; /* 13 bytes 짜리 변수*/
    int studentId;     /* 4 bytes 짜리 변수*/
    short grade;       /* 2 bytes 짜리 변수. padding이 없다면 총 19bytes*/
};

int main()
{

    struct student pst;

    printf("2020039071 JoJunHwa\n");
    printf("size of student = %ld\n",sizeof(struct student)); /* student 자료형의 사이즈 출력 패딩 때문에 24 */
    printf("size of int = %ld\n",sizeof(int)); /* int 자료형의 사이즈 출력 */
    printf("size of short = %ld\n",sizeof(short)); /* short 자료형의 사이즈 출력 */

    return 0;

}