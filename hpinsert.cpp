#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
long long insrtheap(long long int *a,long long int k,long long int l){
    *(a+l)=k;
    long long o=l;
        l/=2;
    for(long long int i=o;i>1&&l>0&&*(a+(i/2))<*(a+i);l/=2)
    {
        swap(*(a+(i)),*(a+l));
        i=l;
    }
    return o+1;

}
long long del(long long int *a,long long int l,long long u){
    *(a+u)=*(a+l);
    l--;
    for(long long i=1;i<=l;)
    {
        long long j,k;
        if((*a+2*i)<(*a+2*i+1))
        {
            j=2*i;
        }
        else
        {
            j=2*i+1;
        }
        swap(*(a+j),*(a+i));

        i=j;
    }
    return l;
}
int main(){
	long long i,j,k,l=1,m,n,arr[10000];
	arr[0]=-1;
	while(1){
	scanf("%lld",&m);
        if(m==-1)
		{
			break;
		}
		l=insrtheap(arr,m,l);
	}
	l=del(arr,l-1,1);
	for(i=1;i<l;i++)
	{
		printf("arr  %lld %lld\n",i,arr[i]);
	}
	return 0;
}
