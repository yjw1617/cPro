// *1. 两段代码共存于一个文件，编译时有选择的编译其中的一部分，请问如何实现？
// 假设A,B为两部分代码，想让A编译,B不编译可以如下操作:
// 方法1：
//     #if 0
//         A;
//     #else
//         B;
//     #endif
// 方法2:
//         #ifndef AA // 如果没有定义AA
//             A
//         #else
//             B
//         #endif
// #if 1
//     A
// #else
//     B
// #endif
// *2. 请简要描述C语言中typedef关键字的作用？
// *3. gcc编译的步骤
// **4. C/C++中的四大内存区间是什么？malloc开辟的空间在哪一个区间？
#include <stdio.h>
int main(int argc, char** argv){
    // #if 0
    // printf("I am A\n");
    // #else
    // printf("I am B\n");
    // #endif
    #ifndef AA
        printf("A\n");
    #else
        printf("B\n");
    #endif
    return 0;
}