#include <iostream>
using namespace std;
int main() {
    int m, n, i, pom, zname;
    cin>>m>>n;
    for(i = m; i <= n; i++) {
        pom = i;
        zname = 1;
        while(pom > 0)
        {
            if((pom % 10) % 2)
            {
                zname = 0;
                break;
            }
            pom = pom/10;
        }
        if(zname)
        {
            cout<<i;
            break;
        }
    }
    if(!zname)
        printf("NE");
    return 0;
}
