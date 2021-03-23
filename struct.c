#include <stdio.h>

struct student1 /*student1 형식의 구조체 선언*/
{
    char lastName;
    int studnetId;
    char grade;
};

typedef struct /*typedef를 이용하여 student2 형식의 구조체 선언*/
{
    char lastName;
    int studnetId;
    char grade;
}student2;

int main()
{
    printf("2020039071 JoJunHwa\n");
    
    struct student1 st1 = {'A',100,'A'}; //student1 형식의 변수 st1 선언

    printf("st1.lastName = %c\n", st1.lastName); //st1의 lastName 출력
    printf("st1.studentId = %d\n", st1.studnetId); //st1의 studentId 출력
    printf("st1.grade = %c\n", st1.grade); //st1의 grade 출력

    student2 st2 = {'B',200,'B'}; //student2 형식의 변수 st2 선언
    
    printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastName 출력
    printf("st2.studentId = %d\n", st2.studnetId); //st2의 studentId 출력
    printf("st2.grade = %c\n", st2.grade); //st2의 grade 출력

    student2 st3; //student2 형식의 변수 st3 선언

    st3 = st2; //st3에 st2에 해당하는 값 할당

    printf("\nst3.lastName = %c\n", st3.lastName); //st3의 lastName 출력
    printf("st3.studentId = %d\n", st3.studnetId); //st3의 studentId 출력
    printf("st3.grade = %c\n", st3.grade); //st3의 grade 출력

    /* equality test */
    /*
    if(st3 == st2)
        printf("equal\n");
    else
        printf("not equal \n");
    */
   /* 위의 eqaulity test는 st3 == st2 가 불가능 하다는 것을 보여주기 위한 예시 */

}