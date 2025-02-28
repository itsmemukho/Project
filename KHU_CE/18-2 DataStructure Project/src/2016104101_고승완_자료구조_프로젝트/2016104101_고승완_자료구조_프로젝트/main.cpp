/**
*	@mainpage	2018-2 Data Structures Project<br>
*				소프트웨어융합대학 컴퓨터공학과 / 이과대학 지리학과 고승완_2016104101<br>
*				SG WannaBe+ Player<br>
*				★ 저장/불러오기 파일 위치 : C:\\mukho.txt<br>
*				★ 노래 파일 위치 : C:\<br>
*				★ 노래 파일 형식 : 가수-곡명 ( ex-> 'SG워너비-만나자' )<br>
*				★ 불러오기나 노래 재생이 안될경우 관리자 모드로 실행<br>
*				능력에 맞게 실제로 써봄직한, 추후 다른 형태로 변형이 가능한 프로그램을 짜봄.<br>
*				11시간의 기적<br>
*
*				- Doxygen GUI 설정법<br>
*				Step 1: Doxygen 으로 문서화 할 프로젝트 경로 삽입.<br>
*				Step 2: Wizard 탭에서 Project Name 설정.<br>
*				Step 3: Wizard 탭에서 Source code directory 에 문서화 할 소스 경로 지정 후 Scan recursively 를 체크.<br>
*						[Step 1] 의 경로와 같은 경로를 삽입해도 됨.<br>
*				Step 4: Destination directory 에 문서화한 데이터가 저장될 경로 지정.<br>
*				Step 5: Wizard 탭의 Output 에서 LaTeX 체크 해제.<br>
*				Step 6: Run 탭의 Run doxygen 수행 후, "Doxygen has finished" 확인.<br>
*
*				- 한글사용을 위해서는 Doxywizard에서 아래와 같이 설정할 것.<br>
*				Expert 탭 -> Input (Topics 에서 선택) -> INPUT_ENCODING 을 "EUC-KR" 로 설정.
*
*	@date	2018-12-02
*	@author	고승완
*/
#include "Application.h"

/**
*	program main function for data structures course.
*/
int main()
{
	Application app;	// Program application
	app.Run();			// run program

	return 0;
}