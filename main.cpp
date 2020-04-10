#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;
#include"head.hpp"
#include"creat_in.hpp"
#include"creat_out.hpp"

int main()
{
	int n;
	printf("  >> DataCreater >> Welcome to LanGong DataCreater.\n");
	printf("  >> DataCreater >> How many datas do you want?\n");
	printf("  >> DataCreater >> Write down must <= 99 :  ");
	scanf("%d",&n);
	system("mkdir data/");
	printf("  >> DateCreater >> Start creatting datas. \n\n");
	for(int i=1;i<=n;i++)
	{
		changefile(i);
		freopen(con,"w",stdout);
		printf("  >> DataCreater >> Creatting input_data NO.%d \n",i);
		freopen(nowfile_in,"w",stdout);
		creat_input();
		freopen(con,"w",stdout);
		printf("  >> DataCreater >> Creatting output_data NO.%d \n",i);
		freopen(nowfile_in,"r",stdin);
		freopen(nowfile_out,"w",stdout);
		creat_output();
		freopen(con,"r",stdin);
	}
	freopen(con,"w",stdout);
	printf("\n  >> DataCreater >> Creat seccusessfully. \n");
	return 0;
}
