/*************************************************************
习题2. 让用户输入一个数字（0-9），然后输出对应的大写汉字。
注：零 壹 贰 叁 肆 伍 陆 柒 捌 玖
*************************************************************/
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


int main (void){
	int m;
	string str[10] ={"零","壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌" ,"玖"};
	cout << "请输入任意数字0-9:" <<endl;
	cin >> m ;
	if(m<0||m>9){
		cout << "输入错误" <<str[m]<<endl;
		cin >> m ;
	}
	else
	cout << "对应的大写汉字是:" <<str[m]<<endl;
	system("pause");
}