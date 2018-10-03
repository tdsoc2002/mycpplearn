#include <bits/stdc++.h>
int main()
{
    // 生成 1 组数据 幻岛用的
    for (int test = 1; test <= 20; test++) 
    {
        char name[100];
        sprintf(name, "%d.in", test);  // 注意文件名称必须以 in 作为后缀
        FILE * fp = fopen(name, "w");
        int a = rand() % 100 + 1;// 随机生成在一个在 [1, 100]　
        fprintf(fp, "%d  \n", a);// 输出到文件中
        fclose(fp);
    }
    return 0;
}