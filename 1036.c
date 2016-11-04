#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
#define K 100
#define T 30000

struct gangster {
    int t;
    int p;
    int s;
};

struct gangster g[1 + N];
int n;  /* number of gangsters ranges [1..N] */
int k;  /* state of openness ranges [1..K] */
int t;  /* interval of time ranges [0..T] */

int gangster_cmp(const void *p1, const void *p2)
{
    const struct gangster *g1 = (const struct gangster *)p1;
    const struct gangster *g2 = (const struct gangster *)p2;
    return g1->t > g2->t;
}

static int dfs(void);

int main(void)
{
    int i;
    
    scanf("%d%d%d", &n, &k, &t);
    for (i = 1; i <= n; ++i)
        scanf("%d", &g[i].t);
    for (i = 1; i <= n; ++i)
        scanf("%d", &g[i].p);
    for (i = 1; i <= n; ++i)
        scanf("%d", &g[i].s);
    qsort(&g[1], n, sizeof(g[0]), gangster_cmp);
    printf("%d\n", dfs());
    
    return 0;
}

int dfs(void)
{
    int ans = 0;
    return ans;
}
