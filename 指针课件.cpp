#include<stdio.h>
int main(){
	//一、1.定位，2.按照指定类型访问数据
	//二、一维数组，数组名指向其成员类型的常量指针;同时是一种数据类型
	//三、二维数组，数组名指向其成员类型(一维数组 int [4])的常量指针    a[0]  a[1]  a[2]
	//四、间接访问 *  对什么类型间接访问，就得到什么类型数据
	//五、取地址 &   对什么类型取地址，就得到什么类型指针

	//+++++++++++++a[i]==================*(a+i)++++++++++++++++++//
	int i=3;
	int *pi;
	
	int b[4]={1,2,3,4};  //(int *）  b+1   4      *b类型  int
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};   //(int [4] *)  a+1  16   *a（一维数组,a[0]） *(a+1)=a[1]  *(b+1)=====b[1]  *(a+1)=a[1]
	
	int (*pia)[4];  //定义一个变量还是一个数组
	pi=b;
	pia=a;
	printf("%d\n",sizeof(pia));
	//*(*(pia+row)+col)

	//+++++++++a+1    行列变换 *(a+1) +++++++++++++//

	printf("%x\n",&b);  //b数据类型
	printf("%x\n",b+1);
	printf("%x\n",&b+1);//16
	printf("%x\n",&a);  //a数据类型
	printf("%x\n",a+1);  //16
	printf("%x\n",&a+1);//48
	printf("%d",sizeof(a));
    system("pause");
}
//int *pi;  简单指针
//int (*pia)[4] 指向一维数组的指针（一个指针）
//指针数组，定义（多个指针）
//指向指针的指针：指针数组名

