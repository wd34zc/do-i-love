/*创建一个文件
  记录程序调用文件的次数。
*/ 

#include<stdio.h>
FILE * open(FILE *) ;
void times(FILE *);
void close(FILE *);

int main()
{
	FILE *fp;
    fp=open(fp);
	times(fp);
	close(fp);	 
	return 0; 	    
 } 
 
 
 FILE * open(FILE * fp)
 {
 	char ch;
 	
 	//打开文件
	if((fp=fopen("recorder.txt","a+")) == NULL)
	  fputs("_ERROR:FOPEN\n",stdout);
	  
	//初始化文件
	if(fseek(fp,0,SEEK_SET)) 
	     puts("_ERROR:FEEK_SET\n");		
    if( (ch=getc(fp))  == EOF)
	  {
		 fputs("here is the times you have open the file.\n",fp);
		 puts("初始化成功！\n");
	  }
	  
	  return fp;
  } 
  
  
  void times(FILE * fp)
  {
  	char ch;
  	int count=0;
  	
	  //记录内容
	rewind(fp);
	while((ch=getc(fp))!= EOF)
		if(ch=='\n') 
		    count++;
	fprintf(fp,"  this is the %d time(s) you have open it.\n",count);
	
	//输出内容到屏幕 
	rewind(fp);
	while((ch=getc(fp))!= EOF)
	  putchar(ch);  	
  }
  
  void close(FILE * fp)
  {
  	//关闭文件
	if(fclose(fp))
	   puts("  ERROR:fclose!\n");
  }
