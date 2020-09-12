#include <stdio.h>
#include <string.h>

struct Info {

	// 사람의 정보 - 이름, 나이...
	char name[10];
	int age;
	// struct Info* in;
};

int main(void) {

	// 구조체 변수
	// 구조체 가지고 만든 변수
	// 자료형 변수명;
	// struct Info in;

	// 선언과 동시에 초기화
	// - 중괄호를 통해 데이터의 묶음 처리를 해주어야 한다
	// - 멤버 필드 선언한 순서대로 공간이 할당받기 때문에
	//	 멤버 필드 선언한 순서대로 데이터를 적어주어야 한다
	struct Info in = { "김민준", 20 };

	// 호출
	// - 구조체 공간의 여러개의 데이터를 한번에 불러와서 처리할 방법이 없다
	// - 구조체 각각의 멤버 공간을 불러와야 한다
	// - 멤버 변수명을 통해 구조체 안의 각각의 데이터들을 구분한다

	// - 형식
	// 변수명.멤버 변수명

	// .(멤버 참조 연산자) - 구조체 또는 공용체 공간의 멤버를 참조하는 연산자
	// in.age = 20;
	// strcpy_s(in.name, strlen("김민준") + 1, "김민준");
	printf("나이 : %d\n", in.age);
	printf("이름 : %s\n", in.name);

	// typedef 자료형 별명, 별명, 별명...
	// - 자료형에 별명을 붙여주는 키워드
	// - 같은 형태와 같은 성격의 데이터들을 보다 쉽게 관리하고 구분하기 위해서 사용한다
	// typedef int AGE, SEL, NUM
	// typedef char GRA;
	// int age;
	// Age age;
	// 구조체 자체에도 사용 가능
	//typedef struct Info {

	//	// 사람의 정보 - 이름, 나이...
	//	char name[10];
	//	int age;
	//	// struct Info* in;
	//} in;

	return 0;
}