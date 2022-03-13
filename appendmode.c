#include<stdio.h>
int main(){
        FILE *fp=fopen("read.txt","a");
        if(fp)
                printf("file open successtully\n");
        else
                printf("file not successfully\n");
        char ch;
        fputc('c',fp);
        while((ch=fgetc(fp))!=EOF)
                printf("%c",ch);
        return 0;
}
