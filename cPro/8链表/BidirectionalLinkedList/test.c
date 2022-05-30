#include "doubleList/doubleList.h"
#include <stdio.h>
int main(){
    doubleLine* dline1 = init_dbLine();
    for(int i = 0; i < 10; i++){
        insert_dbLine(dline1, i);
    }
    show_dbLine_pos(dline1);
    printf("\n");
    show_dbLine_neg(dline1);
    return 0;
}