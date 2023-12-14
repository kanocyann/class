#include <stdio.h>
#define STUDENT_COUNT 5
#define COURSE_COUNT 3
void input(int (*scores)[COURSE_COUNT], int* studentIds)
{
    printf("录入学生成绩：\n");
    for (int i = 0; i < STUDENT_COUNT; ++i)
    {
        printf("学生%d的学号：", i + 1);
        scanf("%d", &studentIds[i]);
        for (int j = 0; j < COURSE_COUNT; ++j)
        {
            printf("请输入学生%d的第%d门课成绩：", i + 1, j + 1);
            scanf("%d", (*(scores + i) + j));
        }
    }
}
void average(int (*scores)[COURSE_COUNT])
{
    int sum = 0;
    for (int i = 0; i < STUDENT_COUNT; ++i)
    {
        sum += *(*(scores + i));
    }
    float average = (float)sum / STUDENT_COUNT;
    printf("第一门课的平均分为：%.2f\n", average);
}
void failstu(int (*scores)[COURSE_COUNT], int* studentIds)
{
    printf("有2门以上课程不及格的学生信息：\n");
    for (int i = 0; i < STUDENT_COUNT; ++i)
    {
        int failCount = 0;
        int totalScore = 0;
        for (int j = 0; j < COURSE_COUNT; ++j)
        {
            if (*(*(scores + i) + j) < 60)
            {
                failCount++;
            }
            totalScore += *(*(scores + i) + j);
        }
        if (failCount >= 2)
        {
            float average = (float)totalScore / COURSE_COUNT;
            printf("学号：%d，全部课程成绩：%d %d %d，平均成绩：%.2f\n", studentIds[i], *(*(scores + i)), *(*(scores + i) + 1), *(*(scores + i) + 2), average);
        }
    }
}
void highstu(int (*scores)[COURSE_COUNT], int* studentIds)
{
    printf("平均成绩90分以上或全部课成绩在85分以上的学生信息：\n");
    for (int i = 0; i < STUDENT_COUNT; ++i)
    {
        int allAbove85 = 1;
        int sum = 0;
        for (int j = 0; j < COURSE_COUNT; ++j)
        {
            sum += *(*(scores + i) + j);
            if (*(*(scores + i) + j) < 85)
            {
                allAbove85 = 0;
            }
        }
        float average = (float)sum / COURSE_COUNT;
        if (average >= 90 || allAbove85)
        {
            printf("学号：%d，全部课程成绩：%d %d %d，平均成绩：%.2f\n", studentIds[i], *(*(scores + i)), *(*(scores + i) + 1), *(*(scores + i) + 2), average);
        }
    }
}
int main(void)
{
    int scores[STUDENT_COUNT][COURSE_COUNT];
    int studentIds[STUDENT_COUNT];
    int choice;
    do
    {
        printf("\n*******************************************************************\n");
        printf("     (1) 录入每个学生的学号和成绩;\n");
        printf("     (2) 求第一门课的平均分;\n");
        printf("     (3) 找出有2门以上课程不及格的学生\n"
                         "\t 输出他们的学号、全部课程成绩、平均成绩;\n");
        printf("     (4) 找出平均成绩90分以上或全部课成绩在85分以上的学生。\n");
        printf("     (5) 退出\n");
        printf("*******************************************************************\n");
        printf("请选择操作：");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                input(scores, studentIds);
                break;
            case 2:
                average(scores);
                break;
            case 3:
                failstu(scores, studentIds);
                break;
            case 4:
                highstu(scores, studentIds);
                break;
            case 5:
                printf("退出程序。\n");
                break;
            default:
                printf("无效的选择，请重新输入。\n");
        }
    }while (choice != 5);
    return 0;
}
