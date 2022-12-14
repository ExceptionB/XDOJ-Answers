//标题:
//递归数列
//
//类别
//函数与递归
//
//程序类型：
//代码片段
//
//时间限制:
//2S
//内存限制	
//10000Kb
//
//问题描述	
//一个数列A定义如下
//A(1)=1，
//A(2)=1/(1+A(1))，
//A(3)=1/(1+A(2))，
//……
//A(n)=1/(1+A(n-1))。
//定义一个函数function用来计算数列的第第n项的值，函数声明如下：
//double function(int n);
//
//输入说明：	
//输入为1个正整数n，n<=10。
//
//输出说明	
//函数输出数列A第n项的值，结果小数点后保留6位有效数字，多余部分四舍五入。
//
//输入样例	
//5
//
//输出样例	
//0.625000
//
//提示	
//所有浮点数使用双精度浮点来运算！！！
#include<stdio.h> 

double calculation(double res, int times, int goal){
	//printf("%lf",res);
	if(times == goal)
		return res;
	calculation(1.0/(res+1.0),times+1,goal);
}
	

double function(int n){
	double res = calculation(1.0,1,n);
	return res;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%.6lf",function(n));
	return 0;
}
