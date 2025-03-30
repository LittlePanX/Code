#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STUDENTS 30
struct Student
{
    char id[20];
    char name[50];
    int math;
    int english;
    int c_programming;
    int total;
    int rank;
};
int compare_total(const void *a, const void *b)
{
    return ((struct Student *)b)->total - ((struct Student *)a)->total;
}
int compare_id(const void *a, const void *b)
{
    return strcmp(((struct Student *)a)->id, ((struct Student *)b)->id);
}
int main()
{
    struct Student students[STUDENTS];
    FILE *fp;
    // 输入学生数据并写入文件
    fp = fopen("score.txt", "wt");
    fprintf(fp, "学号\t姓名\t数学\t英语\tC语言\t总分\n");
    printf("请输入30名学生的信息:\n");
    int num_students = 0;
    printf("请输入学生信息(输入学号为-1可提前结束):\n");
    while (num_students < STUDENTS)
    {
        printf("学生%d\n", num_students + 1);
        printf("学号：");
        scanf("%s", students[num_students].id);
        if (strcmp(students[num_students].id, "-1") == 0)
        {
            break;
        }
        printf("姓名：");
        scanf("%s", students[num_students].name);
        printf("数学成绩：");
        scanf("%d", &students[num_students].math);
        printf("英语成绩：");
        scanf("%d", &students[num_students].english);
        printf("C语言成绩:");
        scanf("%d", &students[num_students].c_programming);
        students[num_students].total = students[num_students].math + students[num_students].english + students[num_students].c_programming;
        fprintf(fp, "%s\t%s\t%d\t%d\t%d\t%d\n",
                students[num_students].id,
                students[num_students].name,
                students[num_students].math,
                students[num_students].english,
                students[num_students].c_programming,
                students[num_students].total);
        num_students++;
    }
    fclose(fp);
    // 按学号排序后重新写入文件
    qsort(students, num_students, sizeof(struct Student), compare_id);
    fp = fopen("score.txt", "wt");
    fprintf(fp, "学号\t姓名\t数学\t英语\tC语言\t总分\n");
    for (int i = 0; i < num_students; i++)
    {
        fprintf(fp, "%s\t    %s\t%d\t  %d\t  %d\t  %d\n",
                students[i].id,
                students[i].name,
                students[i].math,
                students[i].english,
                students[i].c_programming,
                students[i].total);
    }
    fclose(fp);
    qsort(students, num_students, sizeof(struct Student), compare_total);
    printf("\n按总分排序结果:\n");
    printf("学号\t数学\t英语\tC语言\t总分\n");
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%s\t    %s\t%d\t  %d\t  %d\t  %d\n",
               students[i].id,
               students[i].name,
               students[i].math,
               students[i].english,
               students[i].c_programming,
               students[i].total);
    }
    // 排名
    int current_rank = 1;
    students[0].rank = current_rank;
    for (int i = 1; i < num_students; i++)
    {
        if (students[i].total == students[i - 1].total)
        {
            students[i].rank = current_rank;
        }
        else
        {
            current_rank = i + 1;
            students[i].rank = current_rank;
        }
    }
    int real_rank = 1;
    students[0].rank = real_rank;
    for (int i = 1; i < num_students; i++)
    {
        if (students[i].total == students[i - 1].total)
        {
            students[i].rank = real_rank;
        }
        else
        {
            real_rank = i + 1;
            students[i].rank = real_rank;
        }
    }
    // 写入newscore.txt
    fp = fopen("newscore.txt", "wt");
    fprintf(fp, "排名\t姓名\t学号\t总分\n");
    for (int i = 0; i < num_students; i++)
    {
        if (students[i].total > 0)
        {
            fprintf(fp, "%d     \t%s\t%s   \t%d\n",
                    students[i].rank,
                    students[i].name,
                    students[i].id,
                    students[i].total);
        }
    }
    fclose(fp);
    return 0;
}