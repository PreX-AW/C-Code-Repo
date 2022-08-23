#include<stdio.h>
//int main()
//{
//	struct test {
//		char name[10] ;
//			int age;
//			char stud_ID[20];
//
//	};
//	struct test t = { "huwei",18,"202102020110" };
//
//	printf("%s\n%d\n%s\n", t.name,t.age,t.stud_ID);
//	struct test* pt = &t;
//	
//	void  print_struct_point(struct test*){
//		printf("%s,%d,%s",(*ps).name,(*ps).age,(*ps).stud_ID);
//	}
//	print_struct_point(&s);
//	return 0;
//}
struct Stu
	{
		char name[20];
		int age;
		char sex[5];
		char id[12];
	};
	
	void print(struct Stu* ps)
	{
		printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
		//printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
		//�ṹ��ָ��->�ṹ���Ա
	}
	int main()
	{
		struct Stu s = {"zhangsan", 20, "nan", "2022010578"};
		//struct Stu s = { 0 };
		//����
		//scanf("%s %s %s %d", s.name, s.sex, s.id, &(s.age));
	
		printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
		//�ṹ�����.�ṹ���Ա
	
		print(&s);
	
		return 0;
	}