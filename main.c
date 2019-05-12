#include <stdio.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char file[400];
	char fileReset[7000];
	mkdir("New_Project", 0755);
	mkdir("New_Project/js", 0755);
	mkdir("New_Project/css", 0755);

	FILE *fptr_1 = fopen("New_Project/index.html", "a");
	FILE *fptr_2 = fopen("New_Project/js/script.js", "a");
	FILE *fptr_3 = fopen("New_Project/css/style.css", "a");
	FILE *fptr_4 = fopen("New_Project/css/reset.css", "a");
	FILE *fptr_5 = fopen("default/default.html", "r");
	FILE *fptr_6 = fopen("default/default.css", "r");

	while(!feof(fptr_5))
	{
		fgets(file, 400, fptr_5);

		if(!feof(fptr_5))
			fprintf(fptr_1, "%s", file);
	}
	while(!feof(fptr_6))
	{
		fgets(fileReset, 6953, fptr_6);

		if(!feof(fptr_6))
			fprintf(fptr_4, "%s", fileReset);
	}

	fclose(fptr_1);
	fclose(fptr_2);
	fclose(fptr_3);
	fclose(fptr_4);
	fclose(fptr_5);
	fclose(fptr_6);

	return 0;
}