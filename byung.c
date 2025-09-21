#include <stdio.h>

int strlen(char* s) {
    for (int i = 0; i < 10002; i++) {
        if (s[i] == 0) return i;
    }
}

int main()
{    
    char sa[10001], sb[10001];
    scanf("%s%s", sa, sb);

    // last indices
    int la = strlen(sa) - 1, lb = strlen(sb) - 1;
    
    int maxlen = la + 1;
    if (lb > la) maxlen = lb + 1;

    char sc[10001+1];
    sc[10001] = 0; // null terminator

    char c = 0;

    int i = 0;
    for (; i < maxlen; i++)
    {
        char a = 0, b = 0;

        if (la - i >= 0) a = sa[la - i] - 0x30;
        if (lb - i >= 0) b = sb[lb - i] - 0x30;

        c += a + b;

        sc[10000 - i] = c % 10 + 0x30;

        c /= 10;
    }

    if (c != 0)
    {
        sc[10000 - i] = c + 0x30;
        i++;
    }

    printf("%s", &sc[10000 - i + 1]);
}
