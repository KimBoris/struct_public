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









//int main(void)
//{
//
//
//	//1.�⺻
//	USERDATA a;
//	a.nHeight = 180;
//	strcpy_s(a.szName, sizeof(a.szName), "Bong-Ki");
//	strcpy_s(a.szPhone, sizeof(a.szPhone), "123-1234");
//	a.sex = 'M';
//	
//
//
//	//2. ����..cxz
//	char buffer[sizeof(USERDATA)];
//	 
//	USERDATA* pData = (USERDATA*)buffer;
//	pData->nHeight = 180;
//	strcpy_s(pData->szName, sizeof(pData->szName), "Bong-Ki");
//	strcpy_s(pData->szPhone, sizeof(pData->szPhone), "123-1234");
//	pData->sex = 'M';
//
//	//1, 2�� ��� �Ȱ��� ���̴�. 
//	//������ 2��ó�� ������ �� �ִٸ� ���ڴ�. 
//	//�����ʹ� ���� �Ƿ��̱� ����.
//
//	//���� ����ü�� �Ű������� �ѱ涧���� �ݵ�� �ּҷ� �Ѱܶ�
//	//����, ��ġū ����ü�� �״�� ���ÿ� ����Ǿ
//	//�������� �þ��.
//
//	//25�� 20��.
//
//	return 0;
//
//
//
//
//
// }
//int main(void)
//{
//	//USERDATA ������ ���� ������ ���� ���� �� ����
//	USERDATA* pUser = NULL;
//
//	//USERDATA ����ü�� ����� �� ���� �� �ִ� ũ���� �޸� ���� �Ҵ�
//	pUser = (USERDATA*)malloc(sizeof(USERDATA));
//
//	//������ �̹Ƿ� '.' �� �ƴ� '-'�� �����ڿ� �����Ѵ�.
//	pUser->nAge = 10;
//	strcpy(pUser->szName, "Bong-Ki");
//	strcpy(pUser->szPhone, "010-1234-1234");
//	printf("%d��\t%s\t%s\n", pUser->nAge, pUser->szName, pUser->szPhone);
//	free(pUser);
//	
//
//		return 0;
//
//}




//////////
//1-1. ��ȯ�ڷ� �Ű����� ����ü
//////////
//typedef struct USERDATA
//{
//	unsigned int nHeight;
//	int nAge;
//	char szName[32];
//	char szPhone[32];
//	unsigned char sex;
//}USERDATA;
//USERDATA GetUserData(void)
//{
//	USERDATA user = { 0 };
//	//%*c �� '\n'�� �����ϱ� ���� ���̴�.
//	scanf_s("%d%*c", &user.nAge);
//	gets_s(user.szName, sizeof(user.szName));
//	gets_s(user.szPhone, sizeof(user.szPhone));
//	return user;
//}
//




//////////
//1-2. 1-1���� �Ʒ��� ���� �ۼ��Ѵٸ� ������ ���� �� �ִ�.
//////////

//why���̴°�?
//USERDATA GetUserData(void), user = GetUserData() �� �ٽ�
//user = GetUserData() = �Լ��� ��ȯ�� ������ ȣ������ ���������� �ܼ� ����
//�⺻ �ڷ����� ����ϴ� ���� ���� ���̰� ����.
//�׷���, �̿Ͱ��� ����ü ������ �Ű������� ��ȯ�ڷ��������� ����ϴ� ���� ��ȿ�����̴�.
//�����ؾ� �� ������ ���� �⺻ �ڷ����� ���� ũ�⶧��.
//�׷��� ������ ����ü�� �Ű������� ��ȯ���� �� ���� Call byreferne�������� ó���ϴ°��� ����.



////1-2 
////����ü �ν��Ͻ��� �ƴ϶� 
////�������� ���� '������'�� �Ű������� �޴´�.
//void GetUserData2(USERDATA* pUser)
//{
//	scanf_s("%d%*c", &pUser->nAge);
//	gets_s(pUser->szName, sizeof(pUser->szName));
//	gets_s(pUser->szPhone, sizeof(pUser->szPhone));
//}
//
//int main(void)
//{
//	USERDATA user = { 0 };
//
//	//�Լ��� ��ȯ�� ����ü�� �����ϰ� ���
//	
//	//1-1��� �ܼ� ����
//	//user = GetUserData();
//	//printf("%d��\t%s\t%s\t", user.nAge, user.szName, user.szPhone);
//	
//	//1-2��� ������
//	GetUserData2(&user);
//	printf("%d��\t%s\t%s\n", user.nAge, user.szName, user.szPhone);
//
//	return 0;
//	//����ü ������ ��ȯ�ϴ� �Լ� ���� �� ����
//}


////MYBODY����ü ����
//typedef struct MYBODY
//{
//	int nHeight;
//	int nWeight;
//}MYBODY;
//
////MYBODY����ü�� ����� ������ USERDATA ����ü ����
//typedef struct USERDATA
//{
//	char szName[32];
//	char szPhone[32];
//	MYBODY body;
//}USERDATA;
//
//int main(void)
//{
//	USERDATA user = {
//		"bongki",
//		"1234",
//		{175, 70}//MyBODY����ü ��� �ʱ�ȭ
//	};
//	printf("%s\t%s\t%d\t%d\n", user.szName, user.szPhone, user.body.nHeight, user.body.nWeight);
//	//�̷������� ����ü�� ����� ����ϴ� ����ü�� Ȱ���� �� �ִ�.
//}


//*****************�ڱ� ���� ����ü ( ���� ���� ����Ʈ ) *********************************
//����ü�� ����� ����ü�� ���� ������ ������ ���� �� ���� �ִ�.
//�ܼ��� ������ �����ϳ��� ����� �����ϻ� �װ��� �׸� ����� ���� �ƴϴ�.
//������, �� �����Ͱ� ����Ű�� ����� �ٷ� �ڱ��ڽ��̸� '�ڱ� ���� ����ü'��� �θ���.

//�ſ� ������ ���� ���� ����Ʈ

//structddanzi03.c

//USERDATA ����ü ���� �� �� �缱��
//typedef struct USERDATA
//{
//	char szName[32];
//	char szPhone[32];
//	//USERDATA����ü�� ����ų �� �ִ� �����͸� ����� ����!
//	struct USERDATA* pNext;
//}USERDATA;
//
//int main(void)
//{
//
//	//�� ���� USERDATA ����ü �ν��Ͻ� ���� �� ����
//	USERDATA user = { "�����", "1234",NULL };
//	USERDATA newUser = { "������", "2345", NULL };
//
//	//pNext ����� �̿��� �� �ν��Ͻ��� �����Ѵ�!
//	user.pNext = &newUser;
//	printf("%s, %s\n", user.szName, user.szPhone);
//
//	//pNext����� �̿��� ������ ���� �ν��Ͻ��� �����Ѵ�
//	printf("%s, %s\n", user.pNext->szName, user.pNext->szPhone);
//	return 0;
//
//	
//}







////////////////////////////////////////////////////////////////////////////
//							���� ��ũ�� ����Ʈ							  //
////////////////////////////////////////////////////////////////////////////
//
//typedef struct USERDATA
//{
//	char szName[32];
//	char szPhone[32];
//	struct USERDATA* pNext;
//}USERDATA;
//
//int main(void)
//{
//	//�迭�� USERDATA ����ü �ν��Ͻ� ���� ���� �� ����
//	USERDATA userList[4] =
//	{
//		{ "�����", "1234", NULL },
//		{ "������", "2345", NULL },
//		{ "������", "3456", NULL },
//		{ "����", "4567", NULL }
//	};
//
//	//���Ḯ��Ʈ�� ù��°�� �ν��Ͻ��� �ּҸ� ������ ������
//	USERDATA* pUser = NULL;
//
//	//pNext����� �迭�� ������ ���� ����ü �ν��Ͻ��� �ּҷ� �����Ѵ�.
//	userList[0].pNext = &userList[1];
//	userList[1].pNext = &userList[2];
//	userList[2].pNext = &userList[3];
//	//������ �ν��Ͻ��� �ƹ��͵� �����Ƿ� NULL�� �����Ѵ�
//	userList[3].pNext = NULL;
//
//	//����� ����Ʈ�� ù���� �ν��Ͻ��� ����Ű���� �����͸� �����Ѵ�.
//	pUser = &userList[0];
//	while (pUser != NULL)
//	{
//		//�����Ͱ� ����Ű�� �ν��Ͻ��� ����� ���
//		printf("%s, %s\n", pUser->szName, pUser->szPhone);
//
//		//���� ����Ű�� �ִ� �ν��Ͻ��� ���� �ν��Ͻ��� ����Ű����
//		//�����͸� '�̵�' ��Ų��.
//		pUser = pUser->pNext;
//	}
//}
//
//typedef struct USERDATA
//{
//	unsigned int nHeight;
//	char szName[32];
//	char szPhone[32];
//	unsigned char sex;
//
//	struct USERDATA* pNext;
//}USERDATA;
//
//int main(void)
//{
//	USERDATA a;
//	a.nHeight = 180;
//	strcpy_s(a.szName, sizeof(a.szName), "Bongki");
//	strcpy_s(a.szPhone, sizeof(a.szPhone), "123-1234");
//	a.sex = 'M';
//
//	char buffer[sizeof(USERDATA)];
//	USERDATA* pData = (USERDATA*)buffer;
//	pData->nHeight = 180;
//	strcpy_s(pData->szName, sizeof(pData->szName), "David");
//	strcpy_s(pData->szPhone, sizeof(pData->szPhone), "123-1234");
//	pData->sex = 'M';
//
//	a.pNext = pData;
//
//
//	printf("%s", a.pNext->szName);
//
//
//	return 0;
//}






////����ü ��� ����
//
//typedef struct USERDATA
//{
//	char ch;
//	int nData;
//}USERDATA;
//
//int main(void)
//{
//	USERDATA a;
//	a.ch = 'A';
//	a.nData = 300;
//	printf("%d", sizeof(USERDATA));
//	//8�� ������ ���� = ����ü�� �޸𸮸� �̷� ������� ����ϱ� ����
//	// ����ü ��� ����
//	//�̰��� ���� �� �ִ� �����  '�Ʒ��� ��'�� ��������
//
//	return 0;
//	
//}
////


//#pragma pack(push, 1) //�̷����ϸ� ����� 1����Ʈ ������ ����Ѵ�.
////��� IO�ӵ��� ��������.
// 
//
//typedef struct USERDATA
//{
//	char ch;
//	int nAge;
//}USERDATA;
//
//typedef struct MYDATA
//{
//	char ch;
//	int nAge; 
//	double dData;
//}MYDATA;
//
//int main(void)
//{
//	printf("%d\n", sizeof(USERDATA));
//	printf("%d\n", sizeof(MYDATA));
//	return 0;
//}





// ��Ʈ �ʵ�

/* ����ü ����� ����Ʈ ������ �ƴ� ��Ʈ ���� �����͸� �ٷ�� ���
	- 8��Ʈ ������ ���� ���ϴ� ũ�⸸ŭ �߶� ����� �� �ִ�.
	- ��Ʈ�ʵ带 �̿����� �ʰ� ������Ʈ�� �߶󳻷��� ����ũ ������ �����
	���� ��Ʈ ������ �����ؾ� �Ѵ�.
*/









/////////////////////�ϳ��� ���ظ���///////////////////

//���� �����ؾ��Ѵ�.

//structbitfield01.c
// 8��Ʈ�� �����ʺ��� 1,2,3,2 ��Ʈ�� �߶� ����� ������ ����

//typedef struct _DATAFLAG
//{
//	unsigned char main : 1;//8��Ʈ �� ������ 1��Ʈ 
//	unsigned char left : 2;//������ 2~3��° ��Ʈ
//	unsigned char right : 3;//������ 4~6��° ��Ʈ
//	unsigned char top : 2;//������ 7~8��° ��Ʈ(���� �� ��Ʈ)
//
//}DATAFLAG;
//
//int main(void)
//{
//	//1��Ʈ ǥ������ : 0~1
//	//2��Ʈ ǥ�� ���� : 0~3 (4�� ������ ��� ���̴�)
//	//3��Ʈ ǥ�� ���� : 0~7
//	DATAFLAG flagSwitch = { 0,3,7,4 };
//
//	printf("%d\n", flagSwitch.main);
//	printf("%d\n", flagSwitch.left);
//	printf("%d\n", flagSwitch.right);
//	//4�� 2��Ʈ ǥ�������� �Ѿ ���̹Ƿ� ����� �� ����(0���)
//	printf("%d\n", flagSwitch.top);
//
//	printf("%x\n", *((unsigned char*)&flagSwitch));
//	printf("%d\n", sizeof(flagSwitch));
//	return 0;
//
//	//��Ʈ�ʵ� ����� ���� ������ �� 16������ ����� �ʿ䰡 ���� 
//	//�ش� ��Ʈ�� ǥ���� �� �ִ� ���ڹ����� 10������ ����ϸ� �ȴ�.
//	//�ݵ�� 'ǥ�� ����'�� �� ���������Ѵ�.
//	//���� ǥ���� ������ �Ѿ�� �Ѿ ��ŭ�� ������ ��� �߸���.
//
//	//2��Ʈ�� ǥ���� �� �ִ� ���ڴ� 0~3�̹Ƿ� 4�� ���� �� ����.
//}




///////////////////////////////////////////
////////////////////����ü/////////////////
//////////////////////////////////////////


//typedef union _IP_ADDR
//{
//	int nAddress; //�ؼ�1
//	short awData[2]; //�ؼ� 2
//	unsigned char addr[4];//�ؼ� 3
//}IP_ADDR;
//
//int main(void)
//{
//	IP_ADDR addr;
//	addr.addr[0] = 192;
//	addr.addr[1] = 168;
//	addr.addr[2] = 0;
//	addr.addr[3] = 10;
//
//	printf("%d\n", addr.nAddress);
//	return 0;
//}


//IP_ADDR '����ü' ����
//4����Ʈ�� �� ���� �������� �޸� �ؼ��� �� �ֵ��� ����
//
//typedef union _IP_ADDR
//{
//	int nAddress;		//�ؼ� 1
//	short awData[2];	//�ؼ� 2
//	unsigned char addr[4];//�ؼ� 3
//}IP_ADDR;
//
//int main(void)
//{
//	IP_ADDR Data = { 0 };
//	Data.nAddress = 0x41424344;
//	//0x41424344�� 8��Ʈ�� 0x41, 0x42, 0x43, 0x44 ������ �߶�
//	//�����ڷ� ����Ѵ�.
//	printf("%c%c%c%c\n", Data.addr[0], Data.addr[1], Data.addr[2], Data.addr[3]);
//
//
//	//16��Ʈ�� �ѷ� �߶� ���
//	printf("%X, %d\n", Data.awData[0], Data.awData[0]);
//	printf("%X, %d\n", Data.awData[1], Data.awData[1]);
//
//	return 0;
//
//}


//typedef struct MYDATA
//{
//	char ch;
//	int nData;
//}MYDATA;
//
//int main(void)
//{
//	MYDATA data;
//	data.ch = 'A';
//	data.nData = 300;
//
//	char ch = 'B';
//	int nData = 300;
//	//�޸𸮸� ���� ����ü���� 'Ȯ��'�ϱ�� ��������
//	//������ �� �� �ִ�.
//
//	return 0;
//}




typedef union MYDATA
{
	char ch;
	int nData;
	double dData; //�Ǽ�����

}MYDATA;

int main(void)
{

	MYDATA data;
	data.ch = 'A';
	data.nData = 300;
	//����ü
	// �������̵尡 �Ͼ�� 
	//���� ū ������ũ�⸸ŭ ����ü�� ũ�Ⱑ �����ȴ�.


	//���� �Ǽ��������� ��µ� ������������ ����Ѵٸ� �����Ѱ�?( ����ü�� ���)
	// �ȵȴ�.!
	//�Ǽ��� ���������� ������ü�� �ٸ���.
	data.dData = 3.141414;
	printf("%d\n", data.dData);
	//���� ����ȯ�� �����ϴ�
	printf("%d\n", (int)data.dData);


	return 0;
}