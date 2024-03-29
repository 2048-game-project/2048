#include "default_frame.h"

// 시작화면
void starting_screen()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	system("cls");

	coord.X = 0;
	coord.Y = 0;
	SetConsoleCursorPosition(handle, coord);

	// ■ □ → ← ↑ ↓
	// ─ │ ┌ ┐ ┘ └

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 흰색
	for (int i = 0; i < 24; i++)
		printf("□");
	printf("\n");

	// 2048에 색상 넣기
	//printf("□□■■■□□□■■□□■□□□□□■■■□□□\n");
	//printf("□□□□□■□■□□■□■□□□□■□□□■□□\n");
	//printf("□□□□■□□■□□■□■□■□□□■■■□□□\n");
	//printf("□□□■□□□■□□■□■■■■□■□□□■□□\n");
	//printf("□□■■■■□□■■□□□□■□□□■■■□□□\n");

	// 두 번째 줄
	printf("□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); // 2는 옥색
	printf("■■■"); // 2
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 0은 밝은 옥색
	printf("■■"); // 0
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // 4는 밝은 빨강
	printf("■"); // 4
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // 8은 밝은 노랑
	printf("■■■"); // 8
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□\n");
	
	// 세 번째 줄
	printf("□□□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); // 2는 옥색
	printf("■"); // 2
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 0은 밝은 옥색
	printf("■"); // 0
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 0은 밝은 옥색
	printf("■"); // 0
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // 4는 밝은 빨강
	printf("■"); // 4
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // 8은 밝은 노랑
	printf("■"); // 8
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // 8은 밝은 노랑
	printf("■"); // 8
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□\n");

	// 네 번째 줄
	printf("□□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); // 2는 옥색
	printf("■"); // 2
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 0은 밝은 옥색
	printf("■"); // 0
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 0은 밝은 옥색
	printf("■"); // 0
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // 4는 밝은 빨강
	printf("■"); // 4
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // 4는 밝은 빨강
	printf("■"); // 4
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // 8은 밝은 노랑
	printf("■■■"); // 8
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□\n");

	// 다섯 번째 줄
	printf("□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); // 2는 옥색
	printf("■"); // 2
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 0은 밝은 옥색
	printf("■"); // 0
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 0은 밝은 옥색
	printf("■"); // 0
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // 4는 밝은 빨강
	printf("■■■■"); // 4
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // 8은 밝은 노랑
	printf("■"); // 8
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // 8은 밝은 노랑
	printf("■"); // 8
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□\n");
	
	// 여섯 번째 줄
	printf("□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); // 2는 옥색
	printf("■■■■"); // 2
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 0은 밝은 옥색
	printf("■■"); // 0
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // 4는 밝은 빨강
	printf("■"); // 4
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // 8은 밝은 노랑
	printf("■■■"); // 8
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); // 검정
	printf("□□□\n");

	for (int i = 0; i < 24; i++)
		printf("□");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색

	coord.X = 2; //2면 민형 언니꺼 정상 배치, 6이면 수진꺼 정상 배치
	coord.Y = 10;
	SetConsoleCursorPosition(handle, coord);
	printf("→ ← ↑ ↓ : MOVE");

	coord.X = 10;
	coord.Y = 11;
	SetConsoleCursorPosition(handle, coord);
	printf("ESC : QUIT");

	coord.X = 6;
	coord.Y = 12;
	SetConsoleCursorPosition(handle, coord);
	printf("s or S : PAUSE");

	coord.X = 9;
	coord.Y = 13;
	SetConsoleCursorPosition(handle, coord);
	printf("ENTER : RUN");

	coord.X = 37;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("START");

	coord.X = 37;
	coord.Y = 11;
	SetConsoleCursorPosition(handle, coord);
	printf("RULES");

	coord.X = 37;
	coord.Y = 13;
	SetConsoleCursorPosition(handle, coord);
	printf("RANK");
}

// 3x3, 4x4, 5x5 중 선택하는 화면
void mode_screen()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	system("cls");

	coord.X = 4;
	coord.Y = 4;
	SetConsoleCursorPosition(handle, coord);
	printf("3 X 3");

	coord.X = 14;
	coord.Y = 4;
	SetConsoleCursorPosition(handle, coord);
	printf("4 X 4");

	coord.X = 24;
	coord.Y = 4;
	SetConsoleCursorPosition(handle, coord);
	printf("5 X 5");

	coord.X = 40;
	coord.Y = 2;
	SetConsoleCursorPosition(handle, coord);
	printf("→ ← ↑ ↓ : MOVE");

	coord.X = 40;
	coord.Y = 3;
	SetConsoleCursorPosition(handle, coord);
	printf("ESC : QUIT");

	coord.X = 40;
	coord.Y = 4;
	SetConsoleCursorPosition(handle, coord);
	printf("s or S : PAUSE");

	coord.X = 40;
	coord.Y = 5;
	SetConsoleCursorPosition(handle, coord);
	printf("ENTER : PLAY");
}

// 게임의 기본 틀
// x, y : 가장 끝상자의 좌표
// other : 조작키의  x좌표
void play_screen(int x, int y, int other, int score)
{
	// 3x3 (21, 16, 34)
	// 4x4 (30, 21, 43)
	// 5x5 (39, 26, 52)

	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	//system("cls");

	coord.X = 5;
	coord.Y = 1;
	SetConsoleCursorPosition(handle, coord);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색
	printf("2048");

	// 점수(score)가 300의 배수를 넘어갈 때마다 게임 화면 색상 변하게 추가
	switch (score / 300)
	{
	case 1: case 8: case 15:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // 빨
		break;
	case 2: case 9: case 16:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); // 주
		break;
	case 3: case 10: case 17:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // 노
		break;
	case 4: case 11: case 18:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // 초
		break;
	case 5: case 12: case 19:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); // 파
		break;
	case 6: case 13: case 20:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // 남
		break;
	case 7: case 14: case 21:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // 보
		break;
	default:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색
		break;
	}

	for (int i = 3; i <= y; i += 5)
	{
		for (int j = 3; j <= x; j += 8)
		{
			coord.X = j;
			coord.Y = i;
			SetConsoleCursorPosition(handle, coord);
			printf("┌──────┐");
			coord.X = j;
			coord.Y = i + 1;
			SetConsoleCursorPosition(handle, coord);
			printf("│");
			coord.X = j;
			coord.Y = i + 2;
			SetConsoleCursorPosition(handle, coord);
			printf("│");
			coord.X = j + 7;
			coord.Y = i + 1;
			SetConsoleCursorPosition(handle, coord);
			printf("│");
			coord.X = j + 7;
			coord.Y = i + 2;
			SetConsoleCursorPosition(handle, coord);
			printf("│");
			coord.X = j;
			coord.Y = i + 3;
			SetConsoleCursorPosition(handle, coord);
			printf("└──────┘");
		}
	}

	coord.X = other;
	coord.Y = 4;
	SetConsoleCursorPosition(handle, coord);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색
	printf("→ ← ↑ ↓ : MOVE");
	
	coord.X = other;
	coord.Y = 5;
	SetConsoleCursorPosition(handle, coord);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색
	printf("ESC : QUIT");

	coord.X = other;
	coord.Y = 6;
	SetConsoleCursorPosition(handle, coord);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색
	printf("s or S : PAUSE");

	coord.X = other;
	coord.Y = 7;
	SetConsoleCursorPosition(handle, coord);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색
	printf("ENTER : PLAY");

	coord.X = other;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색

	coord.X = other;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색
	printf("SCORE : %d", score);
}

// starting_screen에서 사용되는 네모칸
void vertical_selection_box(int y)
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	coord.X = 34;
	coord.Y = y;
	SetConsoleCursorPosition(handle, coord);
	printf("┌────────┐");
	coord.X = 34;
	coord.Y = y + 1;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = 43;
	coord.Y = y + 1;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = 34;
	coord.Y = y + 2;
	SetConsoleCursorPosition(handle, coord);
	printf("└────────┘");
}

// starting_screen에서 사용되는 네모칸
void horizon_selection_box(int x)
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	coord.X = x;
	coord.Y = 3;
	SetConsoleCursorPosition(handle, coord);
	printf("┌──────┐");

	coord.X = x;
	coord.Y = 4;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = x + 7;
	coord.Y = 4;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = x;
	coord.Y = 5;
	SetConsoleCursorPosition(handle, coord);
	printf("└──────┘");
}

// 게임 설명
void rule()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	system("cls");

	coord.X = 0;
	coord.Y = 0;
	SetConsoleCursorPosition(handle, coord);
	for (int i = 0; i < 20; i++)
	{
		printf("■");
	}

	coord.X = 0;
	coord.Y = 1;
	SetConsoleCursorPosition(handle, coord);
	for (int i = 0; i < 20; i++)
	{
		printf("■");
		coord.Y++;
		SetConsoleCursorPosition(handle, coord);
	}

	coord.X = 38;
	coord.Y = 1;
	SetConsoleCursorPosition(handle, coord);
	for (int i = 0; i < 20; i++)
	{
		printf("■");
		coord.Y++;
		SetConsoleCursorPosition(handle, coord);
	}

	coord.X = 0;
	coord.Y = 21;
	SetConsoleCursorPosition(handle, coord);
	for (int i = 0; i < 20; i++)
	{
		printf("■");
	}

	coord.X = 3;
	coord.Y = 2;
	SetConsoleCursorPosition(handle, coord);
	printf("시작 시 2개의 2(또는 4)가 나타난다.");

	coord.X = 3;
	coord.Y = 3;
	SetConsoleCursorPosition(handle, coord);
	printf("키보드의 방향키를 누르면 블록이");

	coord.X = 3;
	coord.Y = 4;
	SetConsoleCursorPosition(handle, coord);
	printf("전부 그 방향으로 이동하면서 같은");

	coord.X = 3;
	coord.Y = 5;
	SetConsoleCursorPosition(handle, coord);
	printf("숫자가 있을 경우 합쳐지며, 빈자리");

	coord.X = 3;
	coord.Y = 6;
	SetConsoleCursorPosition(handle, coord);
	printf("중 한 칸에 램덤하게 2 또는 4가 나");

	coord.X = 3;
	coord.Y = 7;
	SetConsoleCursorPosition(handle, coord);
	printf("온다. 이를 반복해서 2로부터 2048을");

	coord.X = 3;
	coord.Y = 8;
	SetConsoleCursorPosition(handle, coord);
	printf("만들면 게임 CLEAR");

	coord.X = 3;
	coord.Y = 10;
	SetConsoleCursorPosition(handle, coord);
	printf("2048을 만들기 전 16칸이 꽉 차있");

	coord.X = 3;
	coord.Y = 11;
	SetConsoleCursorPosition(handle, coord);
	printf("으면서 인접한 두 칸이 같이 않을 때,");

	coord.X = 3;
	coord.Y = 12;
	SetConsoleCursorPosition(handle, coord);
	printf("GAME OVER");

	// 출처 위키피디아

	_getch();
}

// 게임안에서 ESC를 눌렀을 때 뜨는 화면
void done_game_screen()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색으로 출력

	coord.X = 10;
	coord.Y = 7;
	SetConsoleCursorPosition(handle, coord);
	printf("게임을 끝내시겠습니까? score는 순위에 반영되지 않습니다.");

	coord.X = 17;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("YES");

	coord.X = 22;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("or");

	coord.X = 26;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("NO");
}

// done_game_screen에서 사용되는 네모칸
void yes_no_box(int x)
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색으로 출력

	coord.X = x;
	coord.Y = 8;
	SetConsoleCursorPosition(handle, coord);
	printf("┌────┐");

	coord.X = x;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = x + 5;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = x;
	coord.Y = 10;
	SetConsoleCursorPosition(handle, coord);
	printf("└────┘");
}

// 's' or 'S'를 눌렀을 때 뜨는 화면
void pause_screen()
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색

	coord.X = 15;
	coord.Y = 5;
	SetConsoleCursorPosition(handle, coord);
	printf("KEEP PLAY");

	coord.X = 16;
	coord.Y = 8;
	SetConsoleCursorPosition(handle, coord);
	printf("REPLAY");

	coord.X = 17;
	coord.Y = 11;
	SetConsoleCursorPosition(handle, coord);
	printf("QUIT");
}

// pause_screen에서 사용되는 네모칸
void pause_box(int y)
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	coord.X = 13;
	coord.Y = y;
	SetConsoleCursorPosition(handle, coord);
	printf("┌──────────┐");

	coord.X = 13;
	coord.Y = y + 1;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = 13 + 11;
	coord.Y = y + 1;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = 13;
	coord.Y = y + 2;
	SetConsoleCursorPosition(handle, coord);
	printf("└──────────┘");
}





// 여기서 부터 수정해야 될 수도

// 시간을 넣을지는 고민 중
// 나중에 로그인 창까지 만들면
// 플레이어 아이디도 매개변수로 넣야함
// 일단은 스코어만


// 9칸, 16칸, 25칸이 다 찼을 때 뜨는 화면
void game_over_screen(int score)
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색으로 출력

	coord.X = 11;
	coord.Y = 6;
	SetConsoleCursorPosition(handle, coord);
	printf("GAME OVER");

	coord.X = 10;
	coord.Y = 7;
	SetConsoleCursorPosition(handle, coord);
	printf("SCORE : %d", score);

	// 6
	coord.X = 8;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("REPLAY");

	coord.X = 16;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("or");

	// 18
	coord.X = 21;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("QUIT");
}

// 2048을 만들었을 때 뜨는 화면
void win_screen(int score)
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 흰색

	coord.X = 11;
	coord.Y = 6;
	SetConsoleCursorPosition(handle, coord);
	printf("YOUR WIN");

	coord.X = 10;
	coord.Y = 7;
	SetConsoleCursorPosition(handle, coord);
	printf("SCORE : %d", score);

	// 6
	coord.X = 8;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("REPLAY");

	coord.X = 16;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("or");

	// 18
	coord.X = 21;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("QUIT");
}

// game_over_screen와 win_screen에서 사용되는 네모칸
void game_over_box(int x)
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	coord.X = x;
	coord.Y = 8;
	SetConsoleCursorPosition(handle, coord);
	printf("┌───────┐");

	coord.X = x;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = x + 8;
	coord.Y = 9;
	SetConsoleCursorPosition(handle, coord);
	printf("│");
	coord.X = x;
	coord.Y = 10;
	SetConsoleCursorPosition(handle, coord);
	printf("└───────┘");
}

void rank_frame() 
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	system("cls");

	coord.X = 0;
	coord.Y = 0;
	SetConsoleCursorPosition(handle, coord);
	for (int i = 0; i < 20; i++)
	{
		printf("■");
	}

	coord.X = 0;
	coord.Y = 1;
	SetConsoleCursorPosition(handle, coord);
	for (int i = 0; i < 24; i++)
	{
		printf("■");
		coord.Y++;
		SetConsoleCursorPosition(handle, coord);
	}

	coord.X = 38;
	coord.Y = 1;
	SetConsoleCursorPosition(handle, coord);
	for (int i = 0; i < 24; i++)
	{
		printf("■");
		coord.Y++;
		SetConsoleCursorPosition(handle, coord);
	}

	coord.X = 0;
	coord.Y = 25;
	SetConsoleCursorPosition(handle, coord);
	for (int i = 0; i < 20; i++)
	{
		printf("■");
	}

	coord.X = 18;
	coord.Y = 2;
	SetConsoleCursorPosition(handle, coord);
	printf("RANK");
}

// 랭크 순위 출력
void rank_print(Player* player, int size)
{
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;

	Player* top10 = cut_10th(player); // 상위 10위만 새로운 Player 배열에 담음

	// 순위 출력
	if (size > 0) {
		coord.X = 6;
		coord.Y = 4;
		SetConsoleCursorPosition(handle, coord);
		printf("1st  player%d  %d", top10[0].playerNum, top10[0].score);
	}
	if (size > 1) {
		coord.X = 6;
		coord.Y = 6;
		SetConsoleCursorPosition(handle, coord);
		printf("2nd  player%d  %d", top10[1].playerNum, top10[1].score);
	}
	if (size > 2) {
		coord.X = 6;
		coord.Y = 8;
		SetConsoleCursorPosition(handle, coord);
		printf("3rd  player%d  %d", top10[2].playerNum, top10[2].score);
	}
	if (size > 3) {
		coord.X = 6;
		coord.Y = 10;
		SetConsoleCursorPosition(handle, coord);
		printf("4th  player%d  %d", top10[3].playerNum, top10[3].score);
	}
	if (size > 4) {
		coord.X = 6;
		coord.Y = 12;
		SetConsoleCursorPosition(handle, coord);
		printf("5th  player%d  %d", top10[4].playerNum, top10[4].score);
	}
	if (size > 5) {
		coord.X = 6;
		coord.Y = 14;
		SetConsoleCursorPosition(handle, coord);
		printf("6th  player%d  %d", top10[5].playerNum, top10[5].score);
	}
	if (size > 6) {
		coord.X = 6;
		coord.Y = 16;
		SetConsoleCursorPosition(handle, coord);
		printf("7th  player%d  %d", top10[6].playerNum, top10[6].score);
	}
	if (size > 7) {
		coord.X = 6;
		coord.Y = 18;
		SetConsoleCursorPosition(handle, coord);
		printf("8th  player%d  %d", top10[7].playerNum, top10[7].score);
	}
	if (size > 8) {
		coord.X = 6;
		coord.Y = 20;
		SetConsoleCursorPosition(handle, coord);
		printf("9th  player%d  %d", top10[8].playerNum, top10[8].score);
	}
	if (size > 9) {
		coord.X = 6;
		coord.Y = 22;
		SetConsoleCursorPosition(handle, coord);
		printf("10th  player%d  %d", top10[9].playerNum, top10[9].score);
	}
	_getch();
}