#include <string.h>
#include <stdio.h>
#include <malloc.h>
int main()
{
	int i;
    char *p = (char *)malloc(100);
    strcpy(p, "nihao");
    free(p); 
	p=NULL;/*free函数会释放malloc函数获取的内存，
	但是之后有一个操作细节就是调用之后要手动将指针指向NULL，
	free函数的实质只是将内存归还系统，不会将指针指向NULL
	这样一来就不会打印输出if语句中的内容*/         
    if (p != NULL)         
        strcpy(p, "shijie"); 
    p="nihao";
     /*p指针指向空后，为了再次输出nihao，需要重新进行赋值
	 我选择换一种赋值方式，直接将字符串的首地址进行赋值
	 而且首地址就相当于字符数组的数组名
	 所以可以直接进行类似数组名的遍历输出单个字符
	 从而输出字符串*/
    for (i = 0; i < 6; i++)
    printf("%c", *(p + i));
    printf("\n");
    return 0;
}