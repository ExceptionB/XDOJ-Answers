//标题	
//累加和校验
//
//类别	
//流程控制
//
//时间限制	
//1S
//
//内存限制	
//256Kb
//
//问题描述	
//数据传输中一种常见的校验方式是累加和校验。其实现方式是在一次通讯数据包的最后加入一个字节的校验数据。
//这个校验字节内容为前面数据包中所有数据按字节累加所得结果的最后一个字节。例如：
//要传输的信息为： TEST（ASCII码为0x54,0x45,0x53,0x54）
//四个字节的累加和为：0x54+0x45+0x53+0x54=0x140
//校验和为累加和的最后一个字节，即0x40，也就是十进制的64
//现在请设计一个程序计算给出的待传输信息的累加校验和
//
//输入说明	
//输入为一个字符串，字符串长度不超过100个字符
//
//输出说明	
//输出一个十进制整数，表示输入字符串的累加校验和。
//
//输入样例	
//TEST
//输出样例	
//64
//
#include<stdio.h>

int main(){
	char a[233];
	int hash=0;
	scanf("%[^\n]",a);
	for(int i = 0; a[i] != '\0'; i++){
		hash+=a[i];
	}
	printf("%d",hash&0b11111111);
	//please view on github( if encoding is incorrect)这里使用了位运算 
	//在位运算中，一位一位比较两个二进制数字， &是按位与，即仅当两位均为1的时候返回1
	//否则返回否，用这种方法使hash与二进制数1111 1111（正好一个字节）进行位运算
	//这样可以直接返回hash的后八位 
	return 0;
} 
