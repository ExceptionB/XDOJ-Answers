标题
矩阵相乘

描述
输入2×3矩阵A和3×2矩阵B各元素值，计算2×2矩阵C并输出其结果，矩阵相乘公式如下：Cmn=Amp*Bpn， C_ij=∑_(k=1)^p▒〖A_ik×B_kj 〗
 
时间限制
1	
内存限制
10000	
类别
1

输入说明
输入整形数据，如矩阵元素A={{1,2,3},{4,5,6}}，B={{1,2},{3,4},{5,6}}。

输出说明
格式输出：输出矩阵A、B和A*B的结果，矩阵形式，分行分列输出，矩阵之间空一行。

输入样例
1 2 3 4 5 6
1 2 3 4 5 6

输出样例
1 2 3
4 5 6

1 2
3 4
5 6

22  28
49  64

提示
采用三重循环结构实现计算过程，数据输出格式%5d。
