#include <stdio.h>

//
//struct �������
//{
//	int ����[3];
//	char ��[32];
//	char ��[32];
//};
//
//int main(void)
//{
//
//	/*
//	C����� �ڷ���?  -> ���� ������ �޸𸮿� ����� ������ �ؼ� �ϴ� ���
//			�迭? -> ���� ����(�ڷ���)�� ���ӵ� '����ü'
//			����ü -> ���� ���ų� �ٸ� ���ĵ��� ���ӵ� ����ü (ex) ����)
//			����ü -> �� ����(����ũ��)�� �����ؼ������ �ο��ϴ� ����
//
//
//			�ڷ��� = ������ �׸� = 1. ���׸�, 2. �ҹ��, 3. ���� 
//
//			�̿Ͱ��� �׸��� �뵵�� ���� ������ �ٲ��.
//
//			���� �׸� + �ҹ�� + ���� �� '��Ʈ'�� �̷���ٸ�
//			�� ��Ʈ�� ��, ����ü�� �ȴ�. 
//
//
//
//	\*/
//	struct ������� ö����;
//
//	return 0;

	//����ü = ���ο� ���ĵ��� ��Ƽ� ���ο� �ڷ����� ź��
	// ��, ����� ���� �ڷ���  
//}


/*
<<����ü �����Ҵ�>>
����ü ������� �������� ���� �ǿ����ڰ� �������̸�, ���� �������� '.'�� ����� �� ����
 ��� '->'�����ڸ� ����ؾ� �Ѵ�.'

 ����, ����ü �޸𸮸� �����Ҵ� �� ���� �ݵ��! sizeof�����ڸ� ����ض�
 > ����ü�� ����ڰ� �����ϴ� �ڷ���, ��������� ����� ���� ���ο���� �߰��ǰų�
 ������ ���� �����Ǵ� ��찡 �߻��� ���ɼ��� ���� ����.
*/



//typedef struct USERDATA
//{
//	int nAge;
//	char szName[32];
//	char szPhone[32];
//}USERDATA;
//
//int main(void)
//{
//	USERDATA* pUser = NULL; //USERDATA �ڷ����� ���� ������ �ּҰ�
//	pUser = (USERDATA*)malloc(sizeof(USERDATA));//USERDATA������ �����Ҵ� USERDATA��ŭ
//	//��, pUser�� ���� �Ҵ���� ���� �ּ�
//
//	//pUser�� �������̹Ƿ� ->�����ڸ� Ȱ���Ѵ�.
//
//	pUser->nAge = 10;
//	strcpy(pUser->szName, "BongKi");
//	strcpy(pUser->szPhone, "2442");
//
//	printf("%d�� \t%s \t%s\t", pUser->nAge, pUser->szName, pUser->szPhone);
//	return 0;
//}
//
//
//
//
//
//
	/*

	����, pUser ->szName �� �ٸ��� ǥ���Ѵٸ�?
	(*pUser).szName���� ǥ�Ⱑ���ϴ�.

	*pUser.szName���� ǥ���ϸ� ���� ���� �����ں��� ������� �����ڰ� �켱������ ����ǹǷ�
	* ��� = 'char�� l-value'�� �ȴ�.

	//����ü�� (), �迭 �����ڿ� ���Ҿ� 1���� �������̴�
	/



	return 0;




}*/



//typedef = 

//typedef struct _Person {
//	char name[20];
//	int age;
//	char address[100];
//}Person; //typedef�� ����Ͽ� ����ü ��Ī�� Person���� ����
//
//int main(void)
//{
//
//	Person p1; //����ü ��Ī Person���� ���� ����
//
//	strcpy(p1.name, "ȫ�浿");
//	p1.age = 30;
//	strcpy(p1.address, "����� ��걸 �ѳ���");
//
//	//������ ����ü ����� �����Ͽ� �� ���
//	printf("�̸� : %s\n", p1.name);
//	printf("���� : %d\n", p1.age);
//	printf("�ּ� : %s\n", p1.address);
//
//	return 0;
//
//	//���� ��Ī�� ������� �ʰ� ����ü�� ����Ϸ���?
//	// struct _Person p1;���� ���� �ϸ�ȴ�.
//
//	typedef int MYINT;	//int�� ��Ī MYINT�� ����
//	typedef int* PMYINT; //int�����͸� PMYINT�� ����
//
//	MYINT num1;
//	PMYINT numPtr1;
//
//	numPtr1 = &num1;
//
//}



/*ex*/
typedef struct USERDATA
{
	unsigned int nHeight;
	char szName[12];
	char szPhone[12];
	unsigned char sex;
}USERDATA;

int main(void)
{


	//1.�⺻
	USERDATA a;
	a.nHeight = 180;
	strcpy_s(a.szName, sizeof(a.szName), "Bong-Ki");
	strcpy_s(a.szPhone, sizeof(a.szPhone), "123-1234");
	a.sex = 'M';
	


	//2. ����
	char buffer[sizeof(USERDATA)];
	USERDATA* pData = (USERDATA*)buffer;
	pData->nHeight = 180;
	strcpy_s(pData->szName, sizeof(pData->szName), "Bong-Ki");
	strcpy_s(pData->szPhone, sizeof(pData->szPhone), "123-1234");
	pData->sex = 'M';

	//1, 2�� ��� �Ȱ��� ���̴�. 
	//������ 2��ó�� ������ �� �ִٸ� ���ڴ�. 
	//�����ʹ� ���� �Ƿ��̱� ����.

	//���� ����ü�� �Ű������� �ѱ涧���� �ݵ�� �ּҷ� �Ѱܶ�
	//����, ��ġū ����ü�� �״�� ���ÿ� ����Ǿ
	//�������� �þ��.

	//25�� 20��.

	return 0;
}