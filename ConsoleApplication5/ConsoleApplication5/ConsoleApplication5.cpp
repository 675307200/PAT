#include <cstdio>
#include "stdafx.h"
//B1001 害死人不偿命的（3n+1）猜想
//解决的问题：当输入测试值以后直接跳出没有给出step，解决方法是运行PDB文件
//解决的问题：scanf出错，换用scanf_s
int main()
{
	int n,step=0;
	scanf_s("%d",&n);
	while (n!=1)
	{	if (n%2)n=(3*n+1)/2;
		else n=n/2;
		step++;
	}
	printf("%d\n",step);
    return 0;
}

