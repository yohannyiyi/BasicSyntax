
#include <iostream>

    int main()
{
    std::cout << "Hello World Plus Plus\n";
    std::cout << "Hello World Plus Plus" << std::endl; //endl endline 뜻
    std::cout << "Hello World!\n"; // 마지막에 endl 빈줄 생김



    /* 들여쓰기 tab 키
    정수형 타입 : int(integer) - 4btye
    실수형 타입 : float (부동소수점) , double -4btye
    문자형 타입 : char (character) - 문자 1개
    bool 형 타입 : bool 데이터 - true / false 연산하는 것
    text 라고 언리얼에서 쓰는것이 있음
    */


    int Number1;
    Number1 = 10; // =: 대압 연산자 값을 변수애 대입

    int Number2 = 20; // 변수 초가화
    int Number3 = 0;
    float PointNumber = 1.234f; //f 붙이는걸로
    char Word = 'A'; //문자열은 언리얼에서
    bool Condition = true; false;

    std::cout << Number1 + 10 << std::endl;
    Number3 = Number1 + 10;
    Number1 = Number1 + 10;
    Number1 = Number1 + 10;
    Number1 += 10; //증가식
    Number1 -= 10; //감소식

    Number2 += 1; // 카운트
    Number2 -= 1;
    Number2++;
    Number2--;

    // 일반적으로는 > (크다) , >= , < (작다), <=

    /*논리 연산 : bool 타입 데이터 연산
    논리연산자
    && : And (& :Ampersand) = true && true - 연산데이터가 모두 true 이면 결과 true 그 외 나머지는 false
    || : Or  (| :Pipe)  = true || true - 연산데이터가 모두 false 이면 결과 false 그 외 나머지는 true
    !  : Not              !true - false / !false => true
    */
    //std::cout << (true && false) << std::endl;
    // 비트 연산자 >> ,<<, ~ ,^, | ,&
    //++중요 대입연산 증감연산 비교,논리 연산 중요!!++

    /*
    if ()속 연산식의 결과값이 true 면 실행
    if (비교식, 논리연산, 산술연산, 데이터 , 컨디션)
        {
            실행코드
        }
    */
    // true => 0을 제외한 정수
    // false => 0 
    int Number4;
    std::cin >> Number4;

    if (Number4 > 5)
    {
        std::cout << "참일때 실행" << std::endl;
    }
    if (true)
    {
        std::cout << "참일 때 실행2" << std::endl;
    }
    //false => 0 true => 1

    if (3 - 2)
    {
        std::cout << "참일 때 실행3" << std::endl;
    }
    if (1)
    {
        std::cout << "참일 때 실행4" << std::endl;
    }
    if (Number4 > 20)
    {
        std::cout << "참일 때 실행7" << std::endl;
    }
    else if (Number4 > 10)
    {
        std::cout << "참일 때 실행8" << std::endl;
    }
    else
    {
        std::cout << "참일 때 실행9" << std::endl;
    }
    /*  2일차
        if(연산식)  // : 지정횟수만큼 반복 중첩구문 => nested
        {
            if(연산식)
            {
                실행코드
            }
        }
    */
    /*
         switch ~ case

         switch(산술식/ 데이터)
         {
            case 값(value) :
                실행코드
                break;

            case 값2 :
                실행코드
                break;

            case 값3 :
            실행코드
                break;
            default
            실행코드4 (요일별로 무엇을 할때)
         }
     */
    int SwitchNumber = 1;
    switch (SwitchNumber + 1)
    {
    case 1:
        std::cout << "Number case 1 :" << SwitchNumber << std::endl;
        break;
    case 2:
        std::cout << "Number 2 :" << SwitchNumber << std::endl;
        break;
    case 3:
        std::cout << "Number 3 :" << SwitchNumber << std::endl;
        break;
    default:
        std::cout << "defaulf" << std::endl;

    }


    /*
    for() :반복문
     for (구문1/statement;구문2;구문3)
        -독립한 명령문의 형태
     {  for lood 실행될떄 최초 한번실행
        -반복실행을 위한 변수 초기화

        *for lood 실행될떄 최초 한번실행
         구문2
         반복의 실행 여부 판단
         반복 실행될떄 마다 실행
         -코드 해당횟수 코드블럭 실헹 전 판단
         -비교식이 비교값이 반복횟수 표현
         구문3
         -반복이 실행 될 떄마다 실행
         -반복 실행이 스텝 / 카운터
         =해당 회수 코드블럭 실행 이후애 카운트 증가 / 감소
     }*///1분터 10까지의 합
    int sum = 0;
    for (int i = 1; i < 10; i++)
    {
        sum += i;
        std::cout << "sum :" << sum << std::endl;
    }
    std::cout << "sumtotal :" << sum << std::endl;

    //1부터 10까지의 짝수 합
    /*int Even = 0;
    for (int i = 2; i <= 10; i+=2)
    {
        Even += i;
        std::cout << "Even :" << Even << std::endl;
    }
    std::cout << "Eventotal :" << Even << std::endl;
}
    /*while (조건식) * 조건식이 한 줄 일때는 옆에 가능
        {
            실행코드;
        }

    -조건식이 true 일때 반복 실행
    - 먼저 조건식 비교후 코드 블록 실행
    */
    {
        int Total = 0;
        int Count = 1;
        while (Count < 10)
        {
            Total += Count;
            Count++;
            std::cout << "Total :" << Total << std::endl;
        }
    }
    /*while (true) {
        실헹코드

        비교판단 조건
        if(조건식)
        {
            break; // 현재 코드가 포함된 코드 블럭을 빠져나감
        }
    }*/
   
}







    



    // 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
    // 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

    /* 시작을 위한 팁 :
    1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
    2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
    3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
    4. [오류 목록] 창을 사용하여 오류를 봅니다.
    5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
    6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.*/
