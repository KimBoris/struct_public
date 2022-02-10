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
typedef struct USERDATA
{
	unsigned int nHeight;
	char szName[12];
	char szPhone[12];
	unsigned char sex;
}USERDATA;

int main(void)
{


	//1.기본
	USERDATA a;
	a.nHeight = 180;
	strcpy_s(a.szName, sizeof(a.szName), "Bong-Ki");
	strcpy_s(a.szPhone, sizeof(a.szPhone), "123-1234");
	a.sex = 'M';
	


	//2. 응용
	char buffer[sizeof(USERDATA)];
	USERDATA* pData = (USERDATA*)buffer;
	pData->nHeight = 180;
	strcpy_s(pData->szName, sizeof(pData->szName), "Bong-Ki");
	strcpy_s(pData->szPhone, sizeof(pData->szPhone), "123-1234");
	pData->sex = 'M';

	//1, 2번 모두 똑같은 말이다. 
	//하지만 2번처럼 응용할 수 있다면 좋겠다. 
	//포인터는 절대 권력이기 때문.

	//또한 구조체를 매개변수로 넘길때에는 반드시 주소로 넘겨라
	//만약, 덩치큰 구조체가 그대로 스택에 복사되어서
	//프레임이 늘어난다.

	//25장 20분.

	return 0;
}