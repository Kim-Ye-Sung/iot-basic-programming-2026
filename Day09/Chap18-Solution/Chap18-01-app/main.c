// 파일 입출력 + 프로그램 실행경로

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <direct.h>

int main()
{
	char cwd[256];   // 경로 입력 변수, 윈도우 경로 문자열 최대길이. Python 설치시 확인가능

	char str[80];
	char* res;	

	_getcwd(cwd, sizeof(cwd));
	printf("현재 작업(프로젝트) 폴더 : %s\n", cwd);

	// 여기서부터 텍스트파일 복사
	FILE* fp,  * ofp;  // fp는 파일 입력용 파일포인터, ofp는 출력용 파일포인터

	// 디렉토리, 폴더 구분자로 /를 사용해도 무방
	fp = fopen("./data/sample.txt", "r");

	if (fp == NULL)		// 실패 방지 옵션
	{
		printf("파일 열기 실패\n");

		return 1;	// exit(1)과 동일한 기능
	}
	else
	{
		printf("파일 오픈 성공\n");
	}

	// 파일 복사용 오픈
	ofp = fopen("./data/copy.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일 열기 실패\n");
		return 1;
	}

	while (1)
	{
		res = fgets(str, sizeof(str), fp);   // sample.txt 읽은 파일포인터에서 한줄을 read

		if (res == NULL)
		{
			break;
		}

		printf("한줄 쓰기 -> %s\n", str);

		//str[strlen(str) - 1] = '\0';  // \n -> \0 바꿔줘서
		fputs(str, ofp);
		//fputs(" ", ofp);  // 한줄 끝난뒤 스페이스 추가.	
	}

	printf("텍스트 파일 복사 성공\n");

	fclose(fp);
	fclose(ofp);

	return 0;
}