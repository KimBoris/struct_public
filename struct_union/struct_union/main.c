#include <stdio.h>

//
//struct 군용식판
//{
//	int 반찬[3];
//	char 국[32];
//	char 밥[32];
//};
//
//int main(void)
//{
//
//	/*
//	C언어의 자료형?  -> 일정 길이의 메모리에 저장된 정보를 해석 하는 방법
//			배열? -> 같은 형식(자료형)의 연속된 '집합체'
//			구조체 -> 서로 같거나 다른 형식들의 연속된 집합체 (ex) 식판)
//			공용체 -> 한 형식(같은크기)에 여러해석방법을 부여하는 문법
//
//
//			자료형 = 본질은 그릇 = 1. 국그릇, 2. 뚝배기, 3. 찻잔 
//
//			이와같이 그릇은 용도에 따라 목적이 바뀐다.
//
//			만약 그릇 + 뚝배기 + 찻잔 을 '세트'로 이루었다면
//			이 세트는 즉, 구조체가 된다. 
//
//
//
//	\*/
//	struct 군용식판 철수꺼;
//
//	return 0;

	//구조체 = 새로운 형식들을 모아서 새로운 자료형을 탄생
	// 즉, 사용자 정의 자료형  
//}


/*
<<구조체 동적할당>>
구조체 멤버접근 연산자의 왼쪽 피연산자가 포인터이면, 기존 연산자인 '.'를 사용할 수 없고
 대신 '->'연산자를 사용해야 한다.'

 또한, 구조체 메모리를 동적할당 할 때는 반드시! sizeof연산자를 사용해라
 > 구조체는 사용자가 정의하는 자료형, 구성요소인 멤버는 향후 새로운것이 추가되거나
 기존의 것이 삭제되는 경우가 발생할 가능성이 높기 때문.
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
//	USERDATA* pUser = NULL; //USERDATA 자료형의 값이 담긴곳의 주소값
//	pUser = (USERDATA*)malloc(sizeof(USERDATA));//USERDATA형식의 동적할당 USERDATA만큼
//	//즉, pUser의 값은 할당받은 곳의 주소
//
//	//pUser는 포인터이므로 ->연산자를 활용한다.
//
//	pUser->nAge = 10;
//	strcpy(pUser->szName, "BongKi");
//	strcpy(pUser->szPhone, "2442");
//
//	printf("%d살 \t%s \t%s\t", pUser->nAge, pUser->szName, pUser->szPhone);
//	return 0;
//}
//
//
//
//
//
//
	/*

	만약, pUser ->szName 을 다르게 표현한다면?
	(*pUser).szName으로 표기가능하다.

	*pUser.szName으로 표기하면 간접 지정 연산자보다 구조멤버 연산자가 우선적으로 연산되므로
	* 결과 = 'char형 l-value'가 된다.

	//구조체는 (), 배열 연산자와 더불어 1순위 연산자이다
	/



	return 0;




}*/



//typedef = 

//typedef struct _Person {
//	char name[20];
//	int age;
//	char address[100];
//}Person; //typedef를 사용하여 구조체 별칭을 Person으로 정의
//
//int main(void)
//{
//
//	Person p1; //구조체 별칭 Person으로 변수 선언
//
//	strcpy(p1.name, "홍길동");
//	p1.age = 30;
//	strcpy(p1.address, "서울시 용산구 한남동");
//
//	//점으로 구조체 멤버에 접근하여 값 출력
//	printf("이름 : %s\n", p1.name);
//	printf("나이 : %d\n", p1.age);
//	printf("주소 : %s\n", p1.address);
//
//	return 0;
//
//	//만약 별칭을 사용하지 않고 구조체를 사용하려면?
//	// struct _Person p1;으로 선언 하면된다.
//
//	typedef int MYINT;	//int를 별칭 MYINT로 정의
//	typedef int* PMYINT; //int포인터를 PMYINT로 정의
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
//	//1.기본
//	USERDATA a;
//	a.nHeight = 180;
//	strcpy_s(a.szName, sizeof(a.szName), "Bong-Ki");
//	strcpy_s(a.szPhone, sizeof(a.szPhone), "123-1234");
//	a.sex = 'M';
//	
//
//
//	//2. 응용..cxz
//	char buffer[sizeof(USERDATA)];
//	 
//	USERDATA* pData = (USERDATA*)buffer;
//	pData->nHeight = 180;
//	strcpy_s(pData->szName, sizeof(pData->szName), "Bong-Ki");
//	strcpy_s(pData->szPhone, sizeof(pData->szPhone), "123-1234");
//	pData->sex = 'M';
//
//	//1, 2번 모두 똑같은 말이다. 
//	//하지만 2번처럼 응용할 수 있다면 좋겠다. 
//	//포인터는 절대 권력이기 때문.
//
//	//또한 구조체를 매개변수로 넘길때에는 반드시 주소로 넘겨라
//	//만약, 덩치큰 구조체가 그대로 스택에 복사되어서
//	//프레임이 늘어난다.
//
//	//25장 20분.
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
//	//USERDATA 구조에 대한 포인터 변수 선언 및 정의
//	USERDATA* pUser = NULL;
//
//	//USERDATA 구조체가 저장될 수 있을 수 있는 크기의 메모리 동적 할당
//	pUser = (USERDATA*)malloc(sizeof(USERDATA));
//
//	//포인터 이므로 '.' 이 아닌 '-'로 연산자에 접근한다.
//	pUser->nAge = 10;
//	strcpy(pUser->szName, "Bong-Ki");
//	strcpy(pUser->szPhone, "010-1234-1234");
//	printf("%d살\t%s\t%s\n", pUser->nAge, pUser->szName, pUser->szPhone);
//	free(pUser);
//	
//
//		return 0;
//
//}




//////////
//1-1. 반환자료 매개변수 구조체
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
//	//%*c 는 '\n'을 제거하기 위한 것이다.
//	scanf_s("%d%*c", &user.nAge);
//	gets_s(user.szName, sizeof(user.szName));
//	gets_s(user.szPhone, sizeof(user.szPhone));
//	return user;
//}
//




//////////
//1-2. 1-1식을 아래와 같이 작성한다면 한줄을 줄일 수 있다.
//////////

//why줄이는가?
//USERDATA GetUserData(void), user = GetUserData() 가 핵심
//user = GetUserData() = 함수가 반환한 정보를 호출자의 지역변수에 단순 대입
//기본 자료형을 사용하는 경우와 전혀 차이가 없다.
//그런데, 이와같이 구조체 변수를 매개변수나 반환자료형식으로 사용하는 것은 비효율적이다.
//복사해야 할 정보의 양이 기본 자료형에 비해 크기때문.
//그렇기 때문에 구조체가 매개변수나 반환형이 될 떄는 Call byreferne형식으로 처리하는것이 좋다.



////1-2 
////구조체 인스턴스가 아니라 
////구조차에 대한 '포인터'를 매개변수로 받는다.
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
//	//함수가 반환한 구조체를 저장하고 출력
//	
//	//1-1방식 단순 대입
//	//user = GetUserData();
//	//printf("%d살\t%s\t%s\t", user.nAge, user.szName, user.szPhone);
//	
//	//1-2방식 포인터
//	GetUserData2(&user);
//	printf("%d살\t%s\t%s\n", user.nAge, user.szName, user.szPhone);
//
//	return 0;
//	//구조체 형식을 반환하는 함수 선언 및 정의
//}


////MYBODY구조체 선언
//typedef struct MYBODY
//{
//	int nHeight;
//	int nWeight;
//}MYBODY;
//
////MYBODY구조체를 멤버로 가지는 USERDATA 구조체 선언
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
//		{175, 70}//MyBODY구조체 멤버 초기화
//	};
//	printf("%s\t%s\t%d\t%d\n", user.szName, user.szPhone, user.body.nHeight, user.body.nWeight);
//	//이런식으로 구조체를 멤버로 사용하는 구조체를 활용할 수 있다.
//}


//*****************자기 참조 구조체 ( 단일 연결 리스트 ) *********************************
//구조체의 멤버로 구조체에 대한 포인터 변수를 선언 할 수도 있다.
//단순히 포인터 변수하나가 멤버로 들어간것일뿐 그것이 그리 대단한 것은 아니다.
//하지만, 그 포인터가 가리키는 대상이 바로 자기자신이면 '자기 참조 구조체'라고 부른다.

//매우 간단한 단일 연결 리스트

//structddanzi03.c

//USERDATA 구조체 선언 및 형 재선언
//typedef struct USERDATA
//{
//	char szName[32];
//	char szPhone[32];
//	//USERDATA구조체를 가리킬 수 있는 포인터를 멤버로 선언!
//	struct USERDATA* pNext;
//}USERDATA;
//
//int main(void)
//{
//
//	//두 개의 USERDATA 구조체 인스턴스 선언 및 정의
//	USERDATA user = { "김어준", "1234",NULL };
//	USERDATA newUser = { "정봉주", "2345", NULL };
//
//	//pNext 멤버를 이용해 두 인스턴스를 연결한다!
//	user.pNext = &newUser;
//	printf("%s, %s\n", user.szName, user.szPhone);
//
//	//pNext멤버를 이용해 구조상 다음 인스턴스에 접근한다
//	printf("%s, %s\n", user.pNext->szName, user.pNext->szPhone);
//	return 0;
//
//	
//}







////////////////////////////////////////////////////////////////////////////
//							단일 링크드 리스트							  //
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
//	//배열로 USERDATA 구조체 인스턴스 넷을 선언 및 정의
//	USERDATA userList[4] =
//	{
//		{ "김어준", "1234", NULL },
//		{ "정봉주", "2345", NULL },
//		{ "주진우", "3456", NULL },
//		{ "김용민", "4567", NULL }
//	};
//
//	//연결리스트의 첫번째를 인스턴스의 주소를 저장할 포인터
//	USERDATA* pUser = NULL;
//
//	//pNext멤버를 배열의 순서상 다음 구조체 인스턴스의 주소로 정의한다.
//	userList[0].pNext = &userList[1];
//	userList[1].pNext = &userList[2];
//	userList[2].pNext = &userList[3];
//	//마지막 인스턴스는 아무것도 없으므로 NULL로 정의한다
//	userList[3].pNext = NULL;
//
//	//연결된 리스트의 첫번쨰 인스턴스를 가리키도록 포인터를 정의한다.
//	pUser = &userList[0];
//	while (pUser != NULL)
//	{
//		//포인터가 가리키는 인스턴스의 멤버를 출력
//		printf("%s, %s\n", pUser->szName, pUser->szPhone);
//
//		//현재 가리키고 있는 인스턴스의 다음 인스턴스를 가리키도록
//		//포인터를 '이동' 시킨다.
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






////구조체 멤버 맞춤
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
//	//8이 나오는 이유 = 구조체는 메모리를 이런 방식으로 사용하기 때문
//	// 구조체 멤버 맞춤
//	//이것을 피할 수 있는 방법은  '아래의 식'을 참고하자
//
//	return 0;
//	
//}
////


//#pragma pack(push, 1) //이렇게하면 멤버를 1바이트 단위로 사용한다.
////대신 IO속도는 떨어진다.
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





// 비트 필드

/* 구조체 멤버가 바이트 단위가 아닌 비트 단위 데이터를 다루는 멤버
	- 8비트 정보를 쉽게 원하는 크기만큼 잘라서 사용할 수 있다.
	- 비트필드를 이용하지 않고도 일정비트를 잘라내려면 마스크 연산을 비롯한
	각종 비트 연산을 수행해야 한다.
*/









/////////////////////하나도 이해못함///////////////////

//따로 공부해야한다.

//structbitfield01.c
// 8비트를 오른쪽부터 1,2,3,2 비트씩 잘라 멤버로 선언한 예제

//typedef struct _DATAFLAG
//{
//	unsigned char main : 1;//8비트 중 오른쪽 1비트 
//	unsigned char left : 2;//오른쪽 2~3번째 비트
//	unsigned char right : 3;//오른쪽 4~6번째 비트
//	unsigned char top : 2;//오른쪽 7~8번째 비트(왼쪽 두 비트)
//
//}DATAFLAG;
//
//int main(void)
//{
//	//1비트 표현범위 : 0~1
//	//2비트 표현 범위 : 0~3 (4는 범위를 벗어난 값이다)
//	//3비트 표현 범위 : 0~7
//	DATAFLAG flagSwitch = { 0,3,7,4 };
//
//	printf("%d\n", flagSwitch.main);
//	printf("%d\n", flagSwitch.left);
//	printf("%d\n", flagSwitch.right);
//	//4는 2비트 표현범위를 넘어선 값이므로 출력할 수 없다(0출력)
//	printf("%d\n", flagSwitch.top);
//
//	printf("%x\n", *((unsigned char*)&flagSwitch));
//	printf("%d\n", sizeof(flagSwitch));
//	return 0;
//
//	//비트필드 멤버에 값을 대입할 때 16진수로 기술할 필요가 없고 
//	//해당 비트로 표현할 수 있는 숫자범위의 10진수를 사용하면 된다.
//	//반드시 '표현 범위'를 잘 따져봐야한다.
//	//만일 표현의 범위를 넘어가면 넘어간 만큼의 정보는 모두 잘린다.
//
//	//2비트로 표현할 수 있는 숫자는 0~3이므로 4를 담을 수 없다.
//}




///////////////////////////////////////////
////////////////////공용체/////////////////
//////////////////////////////////////////


//typedef union _IP_ADDR
//{
//	int nAddress; //해석1
//	short awData[2]; //해석 2
//	unsigned char addr[4];//해석 3
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


//IP_ADDR '공용체' 선언
//4바이트를 세 가지 형식으로 달리 해석할 수 있도록 선언
//
//typedef union _IP_ADDR
//{
//	int nAddress;		//해석 1
//	short awData[2];	//해석 2
//	unsigned char addr[4];//해석 3
//}IP_ADDR;
//
//int main(void)
//{
//	IP_ADDR Data = { 0 };
//	Data.nAddress = 0x41424344;
//	//0x41424344를 8비트씩 0x41, 0x42, 0x43, 0x44 넷으로 잘라
//	//영문자로 출력한다.
//	printf("%c%c%c%c\n", Data.addr[0], Data.addr[1], Data.addr[2], Data.addr[3]);
//
//
//	//16비트씩 둘로 잘라 출력
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
//	//메모리만 보고 구조체인지 '확정'하기는 힘들지만
//	//추정은 할 수 있다.
//
//	return 0;
//}




typedef union MYDATA
{
	char ch;
	int nData;
	double dData; //실수형식

}MYDATA;

int main(void)
{

	MYDATA data;
	data.ch = 'A';
	data.nData = 300;
	//공용체
	// 오버라이드가 일어난다 
	//가장 큰 데이터크기만큼 공용체의 크기가 결정된다.


	//만약 실수형식으로 썼는데 정수형식으토 출력한다면 가능한가?( 공용체일 경우)
	// 안된다.!
	//실수와 정수형식은 구조자체가 다르다.
	data.dData = 3.141414;
	printf("%d\n", data.dData);
	//강제 형변환은 가능하다
	printf("%d\n", (int)data.dData);


	return 0;
}