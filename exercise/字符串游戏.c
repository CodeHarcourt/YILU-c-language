#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *A = "I LOVE YOU";
    char *B = NULL;
    int length = strlen(A);
    
    B= (char*)malloc(length);/*这是第一错误，使用malloc函数时要调用malloc.h或者stdlib.h的头文件*/
    char* dest=B; 

    char* src=A+(length-1);
    /*这是第二个错误A作为一个字符串的首地址*
	*可以等同于一个字符数组的数组名（数组名就是该数组的首地址）*
	*但是在这里出现了越界的情况，字符数组的索引值是从0开始的 *
	*所以最后一个元素的索引值应为length-1*/
	/*这里也存在着第三个错误，A[length-1]是一个值，不能赋值给地址*/
    while(length--!=0)
       	*dest++=*src--;
       	/*这时我发现的第四个错误，要进行字符串的反转时
		   *要将src最后一个元素的值赋给dest第一个元素的值*/
    printf("%s" ,B);
    return 0;
}