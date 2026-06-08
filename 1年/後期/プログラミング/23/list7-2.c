// 単なるchar型が符号付き型か符号無し型かを判定

#include <limits.h>
#include <stdio.h>

int main(void) {
    printf("この処理系のchar型は%sです。\n",
           CHAR_MIN ? "符号付き型" : "符号無し型");
    return 0;
}