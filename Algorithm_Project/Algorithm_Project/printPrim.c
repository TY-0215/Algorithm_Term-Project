#include "printPrim.h"

void printPrim(void) {
	int POS = 0;

	printf("");
	puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");

	gotoxy(25, 6); printf("프림 알고리즘");
	CursorView(0);
	system("COLOR 0F");

	gotoxy(55, 22); printf("Press The Enter");

	SetColor(3);
	gotoxy(60, 2); printf("[ A ]");
	SetColor(15);
	gotoxy(58, 3); printf("↙"); gotoxy(56, 3); printf("4");
	gotoxy(56, 4); printf("↙"); 
	gotoxy(54, 5); printf("↙");
	gotoxy(65, 3); printf("↘"); gotoxy(68, 3); printf("10");
	gotoxy(67, 4); printf("↘"); 
	gotoxy(69, 5); printf("↘");
	gotoxy(51, 6); printf("[ B ]");
	gotoxy(49, 7); printf("↙"); gotoxy(47, 7); printf("1");
	gotoxy(47, 8); printf("↙"); 
	gotoxy(45, 9); printf("↙");
	gotoxy(55, 7); printf("↘"); gotoxy(58, 7); printf("24");
	gotoxy(57, 8); printf("↘");
	gotoxy(59, 9); printf("↘");
	gotoxy(69, 6); printf("[ C ]");
	gotoxy(68, 7); printf("↙"); gotoxy(66, 7); printf("8");
	gotoxy(66, 8); printf("↙");
	gotoxy(64, 9); printf("↙");
	gotoxy(73, 7); printf("↘"); gotoxy(76, 7); printf("8");
	gotoxy(75, 8); printf("↘");
	gotoxy(77, 9); printf("↘");
	gotoxy(42, 10); printf("[ D ]");
	gotoxy(45, 11); printf("↘");
	gotoxy(47, 12); printf("↘");
	gotoxy(49, 13); printf("↘");
	gotoxy(51, 14); printf("↘"); gotoxy(49, 14); printf("6");
	gotoxy(53, 15); printf("↘");
	gotoxy(55, 16); printf("↘");
	gotoxy(57, 17); printf("↘");
	gotoxy(59, 18); printf("↘");
	gotoxy(60, 10); printf("[ E ]");
	gotoxy(61, 11); printf("↓");
	gotoxy(61, 12); printf("↓");
	gotoxy(61, 13); printf("↓");
	gotoxy(61, 14); printf("↓"); gotoxy(63, 14); printf("12");
	gotoxy(61, 15); printf("↓");
	gotoxy(61, 16); printf("↓");
	gotoxy(61, 17); printf("↓");
	gotoxy(61, 18); printf("↓");
	gotoxy(77, 10); printf("[ F ]");
	gotoxy(77, 11); printf("↙");
	gotoxy(75, 12); printf("↙");
	gotoxy(73, 13); printf("↙");
	gotoxy(71, 14); printf("↙"); gotoxy(74, 14); printf("7");
	gotoxy(69, 15); printf("↙");
	gotoxy(67, 16); printf("↙");
	gotoxy(65, 17); printf("↙");
	gotoxy(63, 18); printf("↙");
	gotoxy(59, 19); printf("[ G ]");

	while (1) {
		int key = KeyControl();
		if (key == ENTER)
			POS++;
		if (POS == 1)
		{
			SetColor(3);
			gotoxy(60, 2); printf("[ A ]");
			gotoxy(58, 3); printf("↙"); gotoxy(56, 3); printf("4");
			gotoxy(56, 4); printf("↙");
			gotoxy(54, 5); printf("↙");



			gotoxy(51, 6); printf("[ B ]");
			SetColor(15);
			gotoxy(65, 3); printf("↘"); gotoxy(68, 3); printf("10");
			gotoxy(67, 4); printf("↘");
			gotoxy(69, 5); printf("↘");
			
			gotoxy(49, 7); printf("↙"); gotoxy(47, 7); printf("1");
			gotoxy(47, 8); printf("↙");
			gotoxy(45, 9); printf("↙");
			gotoxy(55, 7); printf("↘"); gotoxy(58, 7); printf("24");
			gotoxy(57, 8); printf("↘");
			gotoxy(59, 9); printf("↘");
			gotoxy(69, 6); printf("[ C ]");
			gotoxy(68, 7); printf("↙"); gotoxy(66, 7); printf("8");
			gotoxy(66, 8); printf("↙");
			gotoxy(64, 9); printf("↙");
			gotoxy(73, 7); printf("↘"); gotoxy(76, 7); printf("8");
			gotoxy(75, 8); printf("↘");
			gotoxy(77, 9); printf("↘");
			gotoxy(42, 10); printf("[ D ]");
			gotoxy(45, 11); printf("↘");
			gotoxy(47, 12); printf("↘");
			gotoxy(49, 13); printf("↘");
			gotoxy(51, 14); printf("↘"); gotoxy(49, 14); printf("6");
			gotoxy(53, 15); printf("↘");
			gotoxy(55, 16); printf("↘");
			gotoxy(57, 17); printf("↘");
			gotoxy(59, 18); printf("↘");
			gotoxy(60, 10); printf("[ E ]");
			gotoxy(61, 11); printf("↓");
			gotoxy(61, 12); printf("↓");
			gotoxy(61, 13); printf("↓");
			gotoxy(61, 14); printf("↓"); gotoxy(63, 14); printf("12");
			gotoxy(61, 15); printf("↓");
			gotoxy(61, 16); printf("↓");
			gotoxy(61, 17); printf("↓");
			gotoxy(61, 18); printf("↓");
			gotoxy(77, 10); printf("[ F ]");
			gotoxy(77, 11); printf("↙");
			gotoxy(75, 12); printf("↙");
			gotoxy(73, 13); printf("↙");
			gotoxy(71, 14); printf("↙"); gotoxy(74, 14); printf("7");
			gotoxy(69, 15); printf("↙");
			gotoxy(67, 16); printf("↙");
			gotoxy(65, 17); printf("↙");
			gotoxy(63, 18); printf("↙");
			gotoxy(59, 19); printf("[ G ]");
		}
		if (POS == 2)
		{
			SetColor(3);
			gotoxy(60, 2); printf("[ A ]");
			gotoxy(58, 3); printf("↙"); gotoxy(56, 3); printf("4");
			gotoxy(56, 4); printf("↙");
			gotoxy(54, 5); printf("↙");



			gotoxy(51, 6); printf("[ B ]");

			gotoxy(49, 7); printf("↙"); gotoxy(47, 7); printf("1");
			gotoxy(47, 8); printf("↙");
			gotoxy(45, 9); printf("↙");


			gotoxy(42, 10); printf("[ D ]");
			SetColor(15);
			gotoxy(65, 3); printf("↘"); gotoxy(68, 3); printf("10");
			gotoxy(67, 4); printf("↘");
			gotoxy(69, 5); printf("↘");

			
			gotoxy(55, 7); printf("↘"); gotoxy(58, 7); printf("24");
			gotoxy(57, 8); printf("↘");
			gotoxy(59, 9); printf("↘");
			gotoxy(69, 6); printf("[ C ]");
			gotoxy(68, 7); printf("↙"); gotoxy(66, 7); printf("8");
			gotoxy(66, 8); printf("↙");
			gotoxy(64, 9); printf("↙");
			gotoxy(73, 7); printf("↘"); gotoxy(76, 7); printf("8");
			gotoxy(75, 8); printf("↘");
			gotoxy(77, 9); printf("↘");
			
			gotoxy(45, 11); printf("↘");
			gotoxy(47, 12); printf("↘");
			gotoxy(49, 13); printf("↘");
			gotoxy(51, 14); printf("↘"); gotoxy(49, 14); printf("6");
			gotoxy(53, 15); printf("↘");
			gotoxy(55, 16); printf("↘");
			gotoxy(57, 17); printf("↘");
			gotoxy(59, 18); printf("↘");
			gotoxy(60, 10); printf("[ E ]");
			gotoxy(61, 11); printf("↓");
			gotoxy(61, 12); printf("↓");
			gotoxy(61, 13); printf("↓");
			gotoxy(61, 14); printf("↓"); gotoxy(63, 14); printf("12");
			gotoxy(61, 15); printf("↓");
			gotoxy(61, 16); printf("↓");
			gotoxy(61, 17); printf("↓");
			gotoxy(61, 18); printf("↓");
			gotoxy(77, 10); printf("[ F ]");
			gotoxy(77, 11); printf("↙");
			gotoxy(75, 12); printf("↙");
			gotoxy(73, 13); printf("↙");
			gotoxy(71, 14); printf("↙"); gotoxy(74, 14); printf("7");
			gotoxy(69, 15); printf("↙");
			gotoxy(67, 16); printf("↙");
			gotoxy(65, 17); printf("↙");
			gotoxy(63, 18); printf("↙");
			gotoxy(59, 19); printf("[ G ]");
		}
		else if (POS == 3)
		{
			SetColor(3);
			gotoxy(60, 2); printf("[ A ]");
			gotoxy(58, 3); printf("↙"); gotoxy(56, 3); printf("4");
			gotoxy(56, 4); printf("↙");
			gotoxy(54, 5); printf("↙");

			gotoxy(51, 6); printf("[ B ]");

			gotoxy(49, 7); printf("↙"); gotoxy(47, 7); printf("1");
			gotoxy(47, 8); printf("↙");
			gotoxy(45, 9); printf("↙");

			gotoxy(42, 10); printf("[ D ]");

			gotoxy(45, 11); printf("↘");
			gotoxy(47, 12); printf("↘");
			gotoxy(49, 13); printf("↘");
			gotoxy(51, 14); printf("↘"); gotoxy(49, 14); printf("6");
			gotoxy(53, 15); printf("↘");
			gotoxy(55, 16); printf("↘");
			gotoxy(57, 17); printf("↘");
			gotoxy(59, 18); printf("↘");

			gotoxy(59, 19); printf("[ G ]");

			SetColor(15);
			gotoxy(65, 3); printf("↘"); gotoxy(68, 3); printf("10");
			gotoxy(67, 4); printf("↘");
			gotoxy(69, 5); printf("↘");


			gotoxy(55, 7); printf("↘"); gotoxy(58, 7); printf("24");
			gotoxy(57, 8); printf("↘");
			gotoxy(59, 9); printf("↘");
			gotoxy(69, 6); printf("[ C ]");
			gotoxy(68, 7); printf("↙"); gotoxy(66, 7); printf("8");
			gotoxy(66, 8); printf("↙");
			gotoxy(64, 9); printf("↙");
			gotoxy(73, 7); printf("↘"); gotoxy(76, 7); printf("8");
			gotoxy(75, 8); printf("↘");
			gotoxy(77, 9); printf("↘");

			gotoxy(60, 10); printf("[ E ]");
			gotoxy(61, 11); printf("↓");
			gotoxy(61, 12); printf("↓");
			gotoxy(61, 13); printf("↓");
			gotoxy(61, 14); printf("↓"); gotoxy(63, 14); printf("12");
			gotoxy(61, 15); printf("↓");
			gotoxy(61, 16); printf("↓");
			gotoxy(61, 17); printf("↓");
			gotoxy(61, 18); printf("↓");
			gotoxy(77, 10); printf("[ F ]");
			gotoxy(77, 11); printf("↙");
			gotoxy(75, 12); printf("↙");
			gotoxy(73, 13); printf("↙");
			gotoxy(71, 14); printf("↙"); gotoxy(74, 14); printf("7");
			gotoxy(69, 15); printf("↙");
			gotoxy(67, 16); printf("↙");
			gotoxy(65, 17); printf("↙");
			gotoxy(63, 18); printf("↙");
			
		}
		else if (POS == 4)
		{
		SetColor(3);
		gotoxy(60, 2); printf("[ A ]");
		gotoxy(58, 3); printf("↙"); gotoxy(56, 3); printf("4");
		gotoxy(56, 4); printf("↙");
		gotoxy(54, 5); printf("↙");

		gotoxy(51, 6); printf("[ B ]");

		gotoxy(49, 7); printf("↙"); gotoxy(47, 7); printf("1");
		gotoxy(47, 8); printf("↙");
		gotoxy(45, 9); printf("↙");

		gotoxy(42, 10); printf("[ D ]");

		gotoxy(45, 11); printf("↘");
		gotoxy(47, 12); printf("↘");
		gotoxy(49, 13); printf("↘");
		gotoxy(51, 14); printf("↘"); gotoxy(49, 14); printf("6");
		gotoxy(53, 15); printf("↘");
		gotoxy(55, 16); printf("↘");
		gotoxy(57, 17); printf("↘");
		gotoxy(59, 18); printf("↘");

		gotoxy(59, 19); printf("[ G ]");

		gotoxy(77, 10); printf("[ F ]");
		gotoxy(77, 11); printf("↗");
		gotoxy(75, 12); printf("↗");
		gotoxy(73, 13); printf("↗");
		gotoxy(71, 14); printf("↗"); gotoxy(74, 14); printf("7");
		gotoxy(69, 15); printf("↗");
		gotoxy(67, 16); printf("↗");
		gotoxy(65, 17); printf("↗");
		gotoxy(63, 18); printf("↗");


		SetColor(15);

		gotoxy(65, 3); printf("↘"); gotoxy(68, 3); printf("10");
		gotoxy(67, 4); printf("↘");
		gotoxy(69, 5); printf("↘");


		gotoxy(55, 7); printf("↘"); gotoxy(58, 7); printf("24");
		gotoxy(57, 8); printf("↘");
		gotoxy(59, 9); printf("↘");
		gotoxy(69, 6); printf("[ C ]");
		gotoxy(68, 7); printf("↙"); gotoxy(66, 7); printf("8");
		gotoxy(66, 8); printf("↙");
		gotoxy(64, 9); printf("↙");
		gotoxy(73, 7); printf("↘"); gotoxy(76, 7); printf("8");
		gotoxy(75, 8); printf("↘");
		gotoxy(77, 9); printf("↘");

		gotoxy(60, 10); printf("[ E ]");
		gotoxy(61, 11); printf("↓");
		gotoxy(61, 12); printf("↓");
		gotoxy(61, 13); printf("↓");
		gotoxy(61, 14); printf("↓"); gotoxy(63, 14); printf("12");
		gotoxy(61, 15); printf("↓");
		gotoxy(61, 16); printf("↓");
		gotoxy(61, 17); printf("↓");
		gotoxy(61, 18); printf("↓");
		
		}
		else if (POS == 5)
		{
		SetColor(3);
		gotoxy(60, 2); printf("[ A ]");
		gotoxy(58, 3); printf("↙"); gotoxy(56, 3); printf("4");
		gotoxy(56, 4); printf("↙");
		gotoxy(54, 5); printf("↙");

		gotoxy(51, 6); printf("[ B ]");

		gotoxy(49, 7); printf("↙"); gotoxy(47, 7); printf("1");
		gotoxy(47, 8); printf("↙");
		gotoxy(45, 9); printf("↙");

		gotoxy(42, 10); printf("[ D ]");

		gotoxy(45, 11); printf("↘");
		gotoxy(47, 12); printf("↘");
		gotoxy(49, 13); printf("↘");
		gotoxy(51, 14); printf("↘"); gotoxy(49, 14); printf("6");
		gotoxy(53, 15); printf("↘");
		gotoxy(55, 16); printf("↘");
		gotoxy(57, 17); printf("↘");
		gotoxy(59, 18); printf("↘");

		gotoxy(59, 19); printf("[ G ]");

		gotoxy(77, 10); printf("[ F ]");
		gotoxy(77, 11); printf("↗");
		gotoxy(75, 12); printf("↗");
		gotoxy(73, 13); printf("↗");
		gotoxy(71, 14); printf("↗"); gotoxy(74, 14); printf("7");
		gotoxy(69, 15); printf("↗");
		gotoxy(67, 16); printf("↗");
		gotoxy(65, 17); printf("↗");
		gotoxy(63, 18); printf("↗");

		gotoxy(69, 6); printf("[ C ]");
		gotoxy(73, 7); printf("↖"); gotoxy(76, 7); printf("8");
		gotoxy(75, 8); printf("↖");
		gotoxy(77, 9); printf("↖");

		SetColor(15);

		gotoxy(65, 3); printf("↘"); gotoxy(68, 3); printf("10");
		gotoxy(67, 4); printf("↘");
		gotoxy(69, 5); printf("↘");


		gotoxy(55, 7); printf("↘"); gotoxy(58, 7); printf("24");
		gotoxy(57, 8); printf("↘");
		gotoxy(59, 9); printf("↘");
		
		gotoxy(68, 7); printf("↙"); gotoxy(66, 7); printf("8");
		gotoxy(66, 8); printf("↙");
		gotoxy(64, 9); printf("↙");
		

		gotoxy(60, 10); printf("[ E ]");
		gotoxy(61, 11); printf("↓");
		gotoxy(61, 12); printf("↓");
		gotoxy(61, 13); printf("↓");
		gotoxy(61, 14); printf("↓"); gotoxy(63, 14); printf("12");
		gotoxy(61, 15); printf("↓");
		gotoxy(61, 16); printf("↓");
		gotoxy(61, 17); printf("↓");
		gotoxy(61, 18); printf("↓");
		}
		else if (POS == 6)
		{
		SetColor(3);
		gotoxy(60, 2); printf("[ A ]");
		gotoxy(58, 3); printf("↙"); gotoxy(56, 3); printf("4");
		gotoxy(56, 4); printf("↙");
		gotoxy(54, 5); printf("↙");

		gotoxy(51, 6); printf("[ B ]");

		gotoxy(49, 7); printf("↙"); gotoxy(47, 7); printf("1");
		gotoxy(47, 8); printf("↙");
		gotoxy(45, 9); printf("↙");

		gotoxy(42, 10); printf("[ D ]");

		gotoxy(45, 11); printf("↘");
		gotoxy(47, 12); printf("↘");
		gotoxy(49, 13); printf("↘");
		gotoxy(51, 14); printf("↘"); gotoxy(49, 14); printf("6");
		gotoxy(53, 15); printf("↘");
		gotoxy(55, 16); printf("↘");
		gotoxy(57, 17); printf("↘");
		gotoxy(59, 18); printf("↘");

		gotoxy(59, 19); printf("[ G ]");

		gotoxy(77, 10); printf("[ F ]");
		gotoxy(77, 11); printf("↗");
		gotoxy(75, 12); printf("↗");
		gotoxy(73, 13); printf("↗");
		gotoxy(71, 14); printf("↗"); gotoxy(74, 14); printf("7");
		gotoxy(69, 15); printf("↗");
		gotoxy(67, 16); printf("↗");
		gotoxy(65, 17); printf("↗");
		gotoxy(63, 18); printf("↗");

		gotoxy(69, 6); printf("[ C ]");
		gotoxy(73, 7); printf("↖"); gotoxy(76, 7); printf("8");
		gotoxy(75, 8); printf("↖");
		gotoxy(77, 9); printf("↖");

		gotoxy(68, 7); printf("↙"); gotoxy(66, 7); printf("8");
		gotoxy(66, 8); printf("↙");
		gotoxy(64, 9); printf("↙");


		gotoxy(60, 10); printf("[ E ]");

		SetColor(15);

		gotoxy(65, 3); printf("     "); 
		gotoxy(67, 4); printf("     ");
		gotoxy(69, 5); printf("     ");


		gotoxy(55, 7); printf("     "); 
		gotoxy(57, 8); printf("     ");
		gotoxy(59, 9); printf("     ");

		
		gotoxy(61, 11); printf("  ");
		gotoxy(61, 12); printf("  ");
		gotoxy(61, 13); printf("  ");
		gotoxy(61, 14); printf("    "); 
		gotoxy(61, 15); printf("  ");
		gotoxy(61, 16); printf("  ");
		gotoxy(61, 17); printf("  ");
		gotoxy(61, 18); printf("  ");
		}
		else if (POS == 7)
		{
		gotoxy(50, 22); printf("           End            ");
		return;
		}
	}
	return;
}