#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int start;
    int end;
    int value;
} Node; 

static int compare(const void *a, const void *b) {
    Node *na = (Node *)a;
    Node *nb = (Node *)b;
    if (na->value < nb->value) return -1;
    if (na->value > nb->value) return 1;
    return 0;
}

void init_parent(int parent[], int n) {
    for(int i = 1; i <= n; i++) {
        parent[i] = i;
    }
}

int GetParent(int parent[], int x) {
    if (parent[x] == x) return x;
    return parent[x] = GetParent(parent, parent[x]);
}

int UnionParent(int parent[], int a, int b) {
    a = GetParent(parent, a);
    b = GetParent(parent, b);

    if (a < b) {
        parent[b] = a;
        return a;
    } else {
        parent[a] = b;
        return b;
    }
}

void Kruscal(Node list[], int parent[], int n, int m) {
    qsort(list, m, sizeof(Node), compare);

    int k = 0;
    int i = 0;
    long long answer = 0;  
    while (k != n - 1 && i < m) {
        Node temp = list[i++];
        int s = GetParent(parent, temp.start);
        int e = GetParent(parent, temp.end);

        if (s != e) {
            k += 1;
            answer += temp.value;
            UnionParent(parent, s, e);
        }
    }

    printf("%lld\n", answer);
}

int main(void) {
    int n = 0, m = 0;
    Node list[100001];  
    int parent[10001] = {0};

    scanf("%d %d", &n, &m);

    init_parent(parent, n);

    for(int i = 0; i < m; i++) {
        int s, e, v;
        scanf("%d %d %d", &s, &e, &v);
        list[i].start = s;
        list[i].end = e;
        list[i].value = v;
    }

    Kruscal(list, parent, n, m);

    return 0;
}
