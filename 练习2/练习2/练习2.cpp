/*************************************************************
ϰ��2. ���û�����һ�����֣�0-9����Ȼ�������Ӧ�Ĵ�д���֡�
ע���� Ҽ �� �� �� �� ½ �� �� ��
*************************************************************/
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


int main (void){
	int m;
	string str[10] ={"��","Ҽ", "��", "��", "��", "��", "½", "��", "��" ,"��"};
	cout << "��������������0-9:" <<endl;
	cin >> m ;
	if(m<0||m>9){
		cout << "�������" <<str[m]<<endl;
		cin >> m ;
	}
	else
	cout << "��Ӧ�Ĵ�д������:" <<str[m]<<endl;
	system("pause");
}