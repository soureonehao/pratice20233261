#include<stdio.h>
void main() {
	char arr[40];		//定义字符数组
	int j = 0, l = 0, k = 0, m = 0, i;		//定义累加器并赋值
	printf("请输入不大于40个字符的文章：");
	gets(arr);	//输入字符
	printf("\n您输入的字符是：");
	puts(arr); //输出字符
	for (i = 0; i < 40; i++) {		//循环遍历数组
		if (arr[i] > 47 && arr[i] < 58) {		//判断是否为数字 用ascll码表
			j++;
		}
		else if (arr[i] > 64 && arr[i] < 91) {		//判断是否为大写字母
			l++;
		}
		else if (arr[i] > 96 && arr[i] < 123) {	//判断是否为小写字母
			k++;
		}
		else {
			if (arr[i] != '\0') //除结束符外的其他字符
				m++;
			else
				break;
		}
	}
	printf("这段文字中，大写字母有%d个，数字有%d个，小写字母有%d个，其他字符有%d个", l, j, k, m);
}