

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

	scanf("%c", &c);

    // 确保输入的是一个字母
    if(isalpha(c) && isupper(c)) {
        c = tolower(c);
        printf("%c\n", c);
    } else {
        printf("输入不是一个大写字母。\n");
    }

    return 0;
}

