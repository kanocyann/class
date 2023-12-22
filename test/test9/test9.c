#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define num_students 10
// 定义学生信息结构体
typedef struct Student{
    int student_id;
    char name[50];
    char gender;
    int birth_year;
    int birth_month;
    int birth_day;
    float c_language_score;
    float calculus_score;
    float linear_algebra_score;
    float average_score;
    int rank;
}STU;
void input(STU *student);
void average(STU *students);
void rank(STU *students);
void highest(STU *students);

int main() 
{
    int choice;
    STU *students = (STU *)malloc(num_students * sizeof(STU));
    do 
    {
        printf("\nMenu:\n");
        printf("1. 输入学生信息和成绩\n");
        printf("2. 计算平均分\n");
        printf("3. 按平均分排名\n");
        printf("4. 输出每门课程成绩最高的同学\n");
        printf("5. 退出\n");
        printf("请选择操作: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                input(students);
                break;
            case 2:
                average(students);
                break;
            case 3:
                rank(students);
                break;
            case 4:
                highest(students);
                break;
            case 5:
                printf("程序退出\n");
                break;
            default:
                printf("无效的选择，请重新输入\n");
        }
    }while (choice != 5);
    free(students);
    return 0;
}
void input(STU *student)
{
    for (int i = 0; i < num_students; i++)
    {
        printf("请输入第%d个学生的信息:\n", i + 1);
        student[i].student_id = i + 1;
        printf("学号: %d\n", student[i].student_id);
        printf("姓名: ");
        scanf("%s", student[i].name);
        printf("性别: ");
        scanf(" %c", &student[i].gender);
        printf("出生年月日（用空格分隔）: ");
        scanf("%d %d %d", &student[i].birth_year, &student[i].birth_month, &student[i].birth_day);
        printf("C语言成绩: ");
        scanf("%f", &student[i].c_language_score);
        printf("高等数学成绩: ");
        scanf("%f", &student[i].calculus_score);
        printf("线性代数成绩: ");
        scanf("%f", &student[i].linear_algebra_score);
    }
}
void average(STU *students)
{
    for (int i = 0; i < num_students; i++)
    {
        students[i].average_score = (students[i].c_language_score +
                                      students[i].calculus_score +
                                      students[i].linear_algebra_score) / 3.0;
    }
    printf("平均分计算完成\n");
}
void rank(STU *students) 
{
    for (int i = 0; i < num_students - 1; i++)
    {
        for (int j = 0; j < num_students - i - 1; j++)
        {
            if (students[j].average_score < students[j + 1].average_score)
            {
                STU temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    // 设置名次
    for (int i = 0; i < num_students; i++)
    {
        students[i].rank = i + 1;
    }
    // 显示排名
    printf("按平均分排名:\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("第%d名: 学号 %d, 姓名 %s, 平均分 %.2f\n", students[i].rank, students[i].student_id,
               students[i].name, students[i].average_score);
    }
}
// 输出每门课程成绩最高的同学
void highest(STU *students)
{
    float max_c_language = students[0].c_language_score;
    float max_calculus = students[0].calculus_score;
    float max_linear_algebra = students[0].linear_algebra_score;
    int max_c_language_index = 0;
    int max_calculus_index = 0;
    int max_linear_algebra_index = 0;
    // 找到最高分的学生索引
    for (int i = 1; i < num_students; i++)
    {
        if (students[i].c_language_score > max_c_language)
        {
            max_c_language = students[i].c_language_score;
            max_c_language_index = i;
        }
        if (students[i].calculus_score > max_calculus)
        {
            max_calculus = students[i].calculus_score;
            max_calculus_index = i;
        }
        if (students[i].linear_algebra_score > max_linear_algebra)
        {
            max_linear_algebra = students[i].linear_algebra_score;
            max_linear_algebra_index = i;
        }
    }
    // 输出最高分同学的信息
    printf("C语言最高分同学: 学号 %d, 姓名 %s, 成绩 %.2f\n",
           students[max_c_language_index].student_id, students[max_c_language_index].name,
           students[max_c_language_index].c_language_score);
    printf("高等数学最高分同学: 学号 %d, 姓名 %s, 成绩 %.2f\n",
           students[max_calculus_index].student_id, students[max_calculus_index].name,
           students[max_calculus_index].calculus_score);
    printf("线性代数最高分同学: 学号 %d, 姓名 %s, 成绩 %.2f\n",
           students[max_linear_algebra_index].student_id, students[max_linear_algebra_index].name,
           students[max_linear_algebra_index].linear_algebra_score);
}
