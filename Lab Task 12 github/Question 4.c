#include<stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	
	for(int i=0;i<test;i++){
		int numElements;
		scanf("%d",&numElements);
		int arr[numElements];
		for(int j=0;j<numElements;j++){
			scanf("%d",&arr[j]);
		}
		
		int max=arr[0];
		for(int j=1;j<numElements;j++){
			if(arr[j]>max){
				max=arr[j];
			}
		}
		
		int freq[max+1];
		for(int j=0;j<=max;j++){
			freq[j]=0;
		}
		
		for(int j=0;j<numElements;j++){
			freq[arr[j]]++;
		}
		
		int maximus=arr[0];
        int maxFreq=freq[arr[0]];
        for(int j=1;j<numElements;j++){
            if(freq[arr[j]]>maxFreq){
                maxFreq=freq[arr[j]];
                maximus=arr[j];
            }
        }
		printf("%d\n",maximus);
	}
return 0;
}

