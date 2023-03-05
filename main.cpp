#include <iostream>

using namespace std;

int main()
{
    int i,j=0,n;
    int nl,nc,ng;
    cin>>nl>>nc>>ng;
    n=nl*nc;
    int l,c,g[n],v[n];
    int m[nl][nc];


    for(i=0;i<n;i++)
    {
        cin>>l>>c>>g[j]>>v[j];
        m[l][c]=v[j];
        j++;
    }

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(g[i]>g[j])
            {
                swap(g[i],g[j]);
                swap(v[i],v[j]);
            }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(g[i]==g[j] && v[i]>v[j])
            {
                swap(g[i],g[j]);
                swap(v[i],v[j]);
            }
     for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(g[i]==g[j] && v[i]==v[j])
            {
                cout<<"0";
                return 0;
            }
    for(i=0;i<nl;i++)
        for(j=0;j<nc-1;j++)
            for(int k=j+1;k<nc;k++)
                if(m[i][j]==m[i][k])
                {
                    cout<<"0";
                    return 0;
                }
    for(i=0;i<nc;i++)
        for(j=0;j<nl-1;j++)
            for(int k=j+1;k<nl;k++)
                if(m[j][i]==m[k][i])
                {
                    cout<<"0";
                    return 0;
                }
    cout<<"1";
    return 1;

}
