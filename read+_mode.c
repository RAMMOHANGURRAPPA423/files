#include<stdio.h>
int main(){
        FILE *fp=fopen("read.txt","r+");
        if(fp)
                printf("file open successtully\n");
        else
                printf("file not successfully\n");
        char ch;
        fputc('c',fp);
        fputc('a',fp);
        fputc('n',fp);
        fputc('c',fp);
        fputc('a',fp);
        fputc('n',fp);
        while((ch=fgetc(fp))!=EOF)
                printf("%c",ch);
        return 0;
}

