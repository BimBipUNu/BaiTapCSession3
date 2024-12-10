#include <stdio.h>
int main()
{
    char name;
    printf("Nhập tên của bạn ");
    scanf("%s",&name);
    printf("Xin chào %s", &name);
}