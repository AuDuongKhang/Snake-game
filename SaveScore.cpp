#pragma warning(disable : 4996).
#include "SaveScore.h"
HIGHSCORE highscore[10];
void saveHighScore()
{
	FILE* f;
	f = fopen("highscore.txt", "wt");
	for (int i = 0; i < 10; i++) {
		fputs(highscore[i].name, f);
		fputs(" ", f);
		fprintf(f, "%d", highscore[i].score);
		fputs("\n", f);
	}
	fclose(f);
}
void showHighScore()
{
	FILE* f;
	char ch[30];
	f = fopen("highscore.txt", "rt");
	for (int i = 0; i < 10; i++) {
		fgets(ch, 30, f);
		fscanf_s(f, "  %d", &highscore[i].score);
		fscanf_s(f,"\n");
		cout << ch<<" "<<highscore[i].score;
	}
	fclose(f);
}