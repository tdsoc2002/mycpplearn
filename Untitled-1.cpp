#include <bits/stdc++.h>
int main()
{
    // 生成 1 组数据
    for (int test = 1; test <= 1; test++) {
        char name[100];
        sprintf(name, "%d.in", test); 
        FILE * fp = fopen(name, "w");
        int a = rand() % x + 1;// 随机生成在一个在 [1, x]　数
        int b = rand() % x + 1;// 随机生成在一个在 [1, x]　数
        fprintf(fp, "%d %d\n", a, b);// 输出到文件中
        fclose(fp);
    }
    return 0;
}