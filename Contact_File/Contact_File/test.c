#define _CRT_SECURE_NO_WARNINGS 1
//功能：
//1.存放1000个好友的信息（名字，电话，性别，住址，年龄）
//2.添加好友信息
//3.删除指定好友信息
//4.查找好友信息
//5.修改好友信息
//6.打印好友信息
//7.排序

#include"contact.h"
void menu()
{
	printf("***************************************\n");
	printf("*****1.add       2.del*****************\n");
	printf("*****3.search    4.modi****************\n");
	printf("*****5.show      6.sort****************\n");
	printf("*****7.save      0.exit****************\n");
	printf("***************************************\n");
}
int main(void)
{
	int input = 0;
	
	struct Contact con;//创建通讯录

	InitContact(&con);   //初始化通讯录

	do
	{
		menu();
		printf("请选择:>");
		if (!scanf("%d", &input))
		{
			printf("您输入格式有误，请重新开始\n");
			return 0;
		}

		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			Searchtact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			//释放动态开辟的内存
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
		
	} while(input);
	return 0;
}
