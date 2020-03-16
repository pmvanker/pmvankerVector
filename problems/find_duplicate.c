/* Find duplicate charter in string (occrunce 2 time only) print char */
#include <stdio.h>
int main()
{
	char str[] = "machine learning";
	char arr_wd[100];
	int n,i,j;
	char ch;

	n = strlen(str);
	for(i=0;i<n;i++){
		ch = arr[i];
		for(j=i+1; j<n ; j++)
		{
			if(ch == arr[j])
				continue;
			arr_wd[i]=ch;
		}	
	}

}
