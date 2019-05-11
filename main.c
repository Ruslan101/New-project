#include <stdio.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	mkdir("New_Project", 0755);
	mkdir("New_Project/js", 0755);
	mkdir("New_Project/css", 0755);

	FILE *fptr_1 = fopen("New_Project/index.html", "a");
	FILE *fptr_2 = fopen("New_Project/js/script.js", "a");
	FILE *fptr_3 = fopen("New_Project/css/style.css", "a");

	fputs("<!DOCTYPE html>\n<html lang='en'><head>\n<meta charset='UTF-8' http-equiv='X-UA-Compatible' name='index'>\n<meta name='viewport' content='width=device-width'>\n<title></title>\n<link rel='stylesheet' href='css/style.css'>\n<script src='js/script.js' type='text/javascript' charset='utf-8'></script>\n</head>\n<body>\n\n</body>\n</html>", fptr_1);

	fclose(fptr_1);
	fclose(fptr_2);
	fclose(fptr_3);

	return 0;
}