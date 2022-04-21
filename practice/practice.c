#include <stdio.h>
void Print(char* q)
{
	printf("%s\n",q);
}
int main()
{
	void (*w)(char*) = Print;
	(*w)("哈哈哈哈哈哈哈哈");//括号里的内容是传到自定义函数的参数
	return 0;
}