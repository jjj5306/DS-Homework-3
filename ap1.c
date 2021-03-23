#include <stdio.h>
#include <stdlib.h>

int main()
{
int list[5]; /*크기가 5인 배열 선언*/
int *plist[5]={NULL,}; /*정수 포인터 5개 선언*/

plist[0] = (int *)malloc(sizeof(int)); /*plist[0]에 int의 사이즈만큼 할당.*/

list[0]=1; /*배열 list의 0번째 값에 1 할당*/
list[1]=100; /*배열 list의 1번째 값에 100 할당*/

*plist[0]=200; /*포인터 plist[0]이 가리키는 주소에 담겨있는 값에 200을 할당*/

printf("2020039071 JoJunHwa\n");
printf("value of list[0]         = %d\n",list[0]); /*배열 list의 0번째 값 즉 1 출력*/
printf("address of list[0]       = %p\n",&list[0]); /*배열 list의 0번째 값의 주소 출력 */
printf("value of list            = %p\n",list); /*배열의 이름의 값 즉 배열의 시작 주소 출력*/
printf("address of list (&list)  = %p\n",list); /*배열의 주소 출력*/

printf("-------------------------------------------\n");
printf("value of list[1]         = %d\n",list[1]); /*배열 list의 1번째 값 즉 100 출력*/
printf("address of list[1]       = %p\n",&list[1]); /*배열 list의 1번째 값의 주소 출력 */
printf("value of *(list+1)       = %d\n",*(list+1)); /*배열 list의 1번째 값 즉 100 출력*/
printf("address of list list+1   = %p\n",list+1); /*배열 list의 1번째 값의 주소 출력*/

printf("-------------------------------------------\n");
printf("value of *plist[0]       = %d\n",*plist[0]); /*포인터 plist[0]이 가리키는 주소에 담겨있는 값 즉 200출력 */
printf("&plist[0]                = %p\n",&plist[0]); /*plist[0]의 주소 출력*/
printf("&plist                   = %p\n",&plist); /*plist의 주소 출력*/
printf("plist                    = %p\n",plist); /*plist의 값 출력*/
printf("plist[0]                 = %p\n",plist[0]); /*plist[0]이 담고있는 주소 출력, malloc을 통해 할당하였으므로 null이 아님.*/
printf("plist[1]                 = %p\n",plist[1]); /*plist[1]이 담고있는 주소 출력, 처음에 null로 초기화 하였으므로 null*/
printf("plist[2]                 = %p\n",plist[2]); /*plist[2]이 담고있는 주소 출력, 처음에 null로 초기화 하였으므로 null*/
printf("plist[3]                 = %p\n",plist[3]); /*plist[3]이 담고있는 주소 출력, 처음에 null로 초기화 하였으므로 null*/
printf("plist[4]                 = %p\n",plist[4]); /*plist[4]이 담고있는 주소 출력, 처음에 null로 초기화 하였으므로 null*/

free(plist[0]); //메모리 할당 해제



}
