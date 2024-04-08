#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // 引入标准输入输出库

// 主函数
int main() {
    int i, num, max; // 定义三个整型变量：i 用于循环计数，num 用于存储用户输入的整数，max 用于存储当前已知的最大整数

    // 初始化最大值为第一个输入的整数
    printf("请输入第一个整数: "); // 提示用户输入第一个整数
    scanf("%d", &max); // 读取用户输入的第一个整数，并存储到 max 变量中

    // 通过一个 for 循环来获取剩余的 9 个整数
    for (i = 2; i <= 10; i++) { // 循环变量 i 从 2 开始，每次增加 1，直到达到 10
        printf("请输入第%d个整数: ", i); // 提示用户输入第 i 个整数
        scanf("%d", &num); // 读取用户输入的第 i 个整数，并存储到 num 变量中

        // 比较当前输入的整数 num 和已知的最大值 max
        if (num > max) { // 如果当前输入的整数 num 大于已知的最大值 max
            max = num; // 则更新最大值 max 为当前输入的整数 num
        }
    }

    // 输出这10个整数中的最大值
    printf("这10个整数中的最大值是: %d\n", max);

    // 返回0表示程序正常结束
    return 0;
}