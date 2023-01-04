#include "compiler.h"

// エラーを報告するための関数
// printfと同じ引数を取る
void error_at(char *loc, char *fmt, ...)
{
    int pos;

    va_list ap;
    va_start(ap, fmt);
    pos = loc - user_input;
    fprintf(stderr, "%s\n", user_input);
    fprintf(stderr, "%*s", pos, " "); // pos個の空白を出力
    fprintf(stderr, "^ ");
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, "\n");
    exit(1);
}