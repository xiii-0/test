#include "kernel/types.h"
#include "user/user.h"

int main(int argn, char *argv[]){
	if(argn != 2){  //检查用户的输入参数
		fprintf(2, "must 1 argument for sleep\n"); //参数不合要求时提示
		exit(1);
	}
	int sleepNum = atoi(argv[1]);
	printf("(nothing happens for a little while)\n");
	sleep(sleepNum);//使用系统调用以完成休眠
	exit(0); //使用exit以正常退出程序
	return 0;
}
