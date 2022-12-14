//标题	
//寻找最大整数
//
//类别	
//流程控制
//
//时间限制	
//1S
//
//内存限制	
//1000Kb
//
//问题描述	
//从键盘输入四个整数，找出其中的最大值并将其输出。
//
//输入说明	
//输入4个整数，用空格分隔
//
//输出说明	
//输出值最大的一个整数
//
//输入样例	
//25 99 -46 0
//
//输出样例	
//99
//	使用了qsort 
#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int map[6];
int main(){
	scanf("%d%d%d%d",&map[0],&map[1],&map[2],&map[3]);
	qsort(map, 4, sizeof(int), cmpfunc);
	printf("%d",map[3]);
	return 0;
}
