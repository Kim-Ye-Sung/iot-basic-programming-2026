#ifndef _ADDRESSBOOK_H_
#define _ADDRESSBOOK_H_

#define _CRT_SECURE_NO_WARNINGS

#pragma region 전처리 영역

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma endregion

#pragma region 매크로 영역
// 사람은 숫자보다 이름에 익숙. 유지보수를 위해서
#define MAX_CONTACTS   100   // 100명 주소록
#define INIT_CAPACITY  12    // 초기값 10 구성
#define NAME_LEN       31	 // 이름 최대길이
#define PHONE_LEN	   21	 // 	
#define EMAIL_LEN	   65    // 
#define ADDR_LEN	   121	 // 
#define MEMO_LEN	   31	 // 

#pragma endregion

typedef struct _contact
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	char address[ADDR_LEN];
	char email[EMAIL_LEN];
	char memo[MEMO_LEN];

} Contact;		// 이후 Contact 이름으로 사용

#endif

// 외부 main.c에서 호출할 함수 리스트
#pragma region 함수 선언 영역
// 함수 선언
// step1
void print_menu();	// 이 소스내에서만 쓰겠다
int read_menu();		// 

// step2
void add_contact();
void list_contacts();

// step3
void search_contact();

// step4
void update_contact();
void delete_contact();

// step5
int save_contacts(const char* filename);		// 파일명이 변경되면 안됨
int load_contacts(const char* filename);

// step6
void sort_by_name(void);		// 이름순 정렬. qsort() 함수 사용, stdlib.h에 포함


// step7
int ab_init(void);	// 주소록 초기화
void ab_free(void);  // 주소록 메모리 해제

#pragma endregion