//problem 4-6 �������
//
//ʱ�����ƣ�1S
//
//��������	
//����һ������20��������p�������������Χ�ڵ�p������(������������1��ֻ�ܱ�1���Լ�������������,)����p+10������֮�͡����У���1������Ϊ2����2������Ϊ3����3������Ϊ5����4������Ϊ7���������ơ�
//
//����˵��	
//һ������1������p��20< p <150��
//
//���˵��	
//��p����������p+10������֮�͡�
//
//
//����������
//21
//���������
//1081
//
#include<stdio.h>
#include<math.h>

int primes[200];

int IsPrime(int n){
	for(int i = 2; i <= sqrt(n*1.0); i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	int countprime=0;//Ԥ������160������Ȼ���ٶ�ȡ //please view on github( if encoding is incorrect)
	for(int i = 2; countprime < 160; i++){
		if(IsPrime(i)){
			primes[countprime] = i;
			countprime++;
		}
	}
	scanf("%d",&n);
	
	int result = 0;
	for(int i = n-1; i < n+10; i++){
		result += primes[i];
	}
	printf("%d", result);
	return 0;
}
