#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int p1[10000];
	int p2[10000];
	int t1 = 0,t2 = 0,f,s,max;
	int flag = 1, sum1 = 0, sum2 =0;
	cin >> n;
	for( int i=0; i<n; i++)
	{
	    cin >> f >> s;
	    t1 += f;
	    t2 += s;
	    if (t1==t2)
	    {
	        p1[i] = p2[i] = 0;
	    }
	    if(t1 > t2)
	    {
	        p1[i] = t1-t2;
	        p2[i] = 0;
	    }
	    if(t1 < t2)
	    {
	        p2[i] = t2-t1;
	        p1[i] = 0;
	    }

	}
	sum1 = accumulate(p1, p1+n, sum1);
	sum2 = accumulate(p2, p2+n, sum2);

//	cout << sum1 << endl;
//	cout << sum2 << endl;

	if(sum2 > sum1)
	{
	    flag = 2;
	}
	if(flag == 1)
	{
	    sort(p1,p1+n);
	    max = p1[n-1];
	}
	else
	{
	    sort(p2,p2+n);
	    max = p2[n-1];
	}

	cout << flag << " " << max << endl;

	return 0;
}
