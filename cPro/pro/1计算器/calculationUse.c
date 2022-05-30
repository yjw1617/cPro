#include <stdio.h>
#include <stdlib.h>
#include "./utils/tools.h"
#include "./calculation/calculation.h"
int main(int argc, char** argv){
    double result = 0;
    // 定义计算器
    Caculation caculation1 = {pre_value:0};
    char inputStr[40];
    char symbol;
    char** diviStr;
    while(1){
        printf("请输入(输入h看计算器规则):\n");
        if(!scanf("%s", inputStr)){
            printf("input error\n");
            return -1;
        }
        getchar();
        
        if(inputStr[0] != 'h'){//h是查看帮助
            //找到符号
            symbol = get_symbol(inputStr);

            // 将输入结果传到split中进行分隔
            diviStr = split(inputStr, symbol);
            switch(symbol){
                case '+':
                    if(inputStr[0] == '@'){
                        result = add(caculation1.pre_value, strtod(diviStr[1], NULL));
                    }else{
                        result = add(strtod(diviStr[0], NULL), strtod(diviStr[1], NULL));
                    }
                    break;
                case '-':
                    if(inputStr[0] == '@'){
                        result = sub(caculation1.pre_value, strtod(diviStr[1], NULL));
                    }else{
                        result = sub(strtod(diviStr[0], NULL), strtod(diviStr[1], NULL));
                    }
                    break;
                case '*':
                    if(inputStr[0] == '@'){
                        result = multiplication(caculation1.pre_value, strtod(diviStr[1], NULL));
                    }else{
                        result = multiplication(strtod(diviStr[0], NULL), strtod(diviStr[1], NULL));
                    }
                    break;
                case '/':
                    if(inputStr[0] == '@'){
                        result = divide(caculation1.pre_value, strtod(diviStr[1], NULL));
                    }else{
                        result = divide(strtod(diviStr[0], NULL), strtod(diviStr[1], NULL));
                    }
                    break;
                case '^':
                    if(inputStr[0] == '@'){
                        result = getPow(caculation1.pre_value, strtod(diviStr[1], NULL));
                    }else{
                        result = getPow(strtod(diviStr[0], NULL), strtod(diviStr[1], NULL));
                    }
                    break;

                case 'd':
                    if(inputStr[0] == '@'){
                        result = get_D(caculation1.pre_value);
                    }else{
                        result = get_D(strtod(diviStr[0], NULL));
                    }
                    break;
                
                case 's':
                    if(inputStr[0] == '@'){
                        result = get_Sin(caculation1.pre_value);
                    }else{
                        result = get_Sin(strtod(diviStr[0], NULL));
                    }
                    break;

                case 'c':
                    if(inputStr[0] == '@'){
                        result = get_Cos(caculation1.pre_value);
                    }else{
                        result = get_Cos(strtod(diviStr[0], NULL));
                    }
                    break;
                
                case 'q':
                    if(inputStr[0] == '@'){
                        result = get_Sqrt1(caculation1.pre_value);
                    }else{
                        result = get_Sqrt1(strtod(diviStr[0], NULL));
                    }
                    break;
                default:
                    break;
            }
        // 将结果写入上一次数据写入计算器
        caculation1.pre_value = result;
        printf("result = %lf\n", result);
        }else{
            //显示帮助
            caculationHelp();
        } 
    }
    //释放内存
    diviStr = split_free(diviStr);
    return 0;
}