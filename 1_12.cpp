

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

	scanf("%c", &c);

    // ȷ���������һ����ĸ
    if(isalpha(c) && isupper(c)) {
        c = tolower(c);
        printf("%c\n", c);
    } else {
        printf("���벻��һ����д��ĸ��\n");
    }

    return 0;
}

