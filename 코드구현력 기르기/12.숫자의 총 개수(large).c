#include<stdio.h>
//#include<string.h>
int main(){
	//freopen("input.txt","rt",stdin);
	int n, i, cnt=0, tmp;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		tmp = i;
		if(i<10)cnt++;
		else if(i<100)cnt+=2;
		else if(i<1000)cnt+=3;
		else if(i<10000)cnt+=4;
		else if(i<100000)cnt+=5;
		else if(i<1000000)cnt+=6;
		else if(i<10000000)cnt+=7;
		else if(i<100000000)cnt+=8;
		else if(i<1000000000)cnt+=9;
		else if(i<10000000000)cnt+=10;
			
	}
	printf("%d",cnt);
	return 0;
	
}
#include<stdio.h>
#include <math.h>
//#include<string.h>
int main(){
	freopen("input.txt","rt",stdin);
	int n, i=1, cnt=0, tmp=9;
	scanf("%d", &n);
	while(tmp<n){
		tmp += 9*(pow(10,i));
		cnt+=i*9*(pow(10,i-1));
		i++;
	}
	tmp -=  9*(pow(10,i-1));
	cnt += (n-tmp)*i;
	printf("%d",cnt);
	return 0;
	
}

#include<stdio.h>
int main(){
	freopen("input.txt", "rt", stdin);
	int n, sum=0, cnt=1, digit=9, res=0;
	scanf("%d", &n);
	while(sum+digit<n){	
		sum=sum+digit;
		res=res+(cnt*digit);
		cnt++;
		digit=digit*10;
	}
	res=res+((n-sum)*cnt);
	printf("%d\n", res);
	return 0;
}

#include <iostream>
#include<cmath> 
using namespace std; 

int main() {
	int n;
	int total=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		total += int(log10(i))+1;
	}
	cout << total;
}
