//������������ Sorted, �׸��� ���ϴ� ���� ����.

#include<stdio.h>

void reverse(int *a, int *b);
int main(){

	int num[10] = {0};
	int i, j, n;
	int re_num;

	for(i = 0 ; i < 10 ; i++){
		printf("%d�� ���� : ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i = 0 ; i < 9 ; i++){
		for(j = i + 1 ; j < 10 ; j++){
			if (num[i] > num[j]) reverse(&num[i], &num[j]);
		}
	}

	printf("Your Pick : ");
	for(i = 0 ; i < 10 ; i++) printf("%d ", num[i]);
	
	printf("\nPick One : ");
	scanf("%d", &n);

	for(i = 0 ; i < 10 ; i++){
		if(n == num[i]){
			n = i;
			break;
		}
	}
	
	printf("replaced Num : ");
	scanf("%d", &re_num);

	num[n] = re_num;

	printf("\nYour Pick(FIN) : ");
	for(i = 0 ; i < 10 ; i++) printf("%d ", num[i]);
	printf("\n");

	return 0;
}

void reverse(int *a, int *b){
	int temp;

	temp = *a;
	*a = *b; 
	*b = temp;
}
