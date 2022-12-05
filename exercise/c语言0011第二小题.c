#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int *mid;
    mid=(int*)malloc(sizeof(int));
   /*这道题是想到程算老师说过，指针在使用之前一定要进行初始化
   *然后就想着再开辟一个内存空间让mid指针指向该空间
   *之后通过间接寻址符进行指针指向空间中的元素通过中间值来实现交换
   *运行结果很完美
   *在调用malloc时引入了一个stdlib.h的头文件
   *该头文件里包含malloc函数*/ 
    *mid =*b;
    *b = *a;
    *a = *mid;
}
int main(){
    int num1, num2;
    printf("please input the two nums:\n");
    scanf("%d %d", &num1, &num2);
    printf("num1 is %d,num2 is %d\n", num1, num2);
    swap(&num1, &num2);
    printf("num1 is %d,num2 is %d\n", num1, num2);
    return 0;
}
