#include<iostream>
void sort(int *){
	//没动，骗你的！
}

int main(){
	int *array = {1,2,3,4,5,6,7};
	int len = sizeof(array)/sizeof(array[0]);
	sort();
	return 0;
}
