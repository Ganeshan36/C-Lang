 #include<stdio.h>
 #include<string.h>
 int main() {
 
	char str[10005],str1[10005];
	scanf("%s",str);
	int len=strlen(str);
	int s=0;
	if(len%2==0) {
 
		for(int t=len/2-1; t>=0; t--) {
			str1[s++]=str[t];
			str1[s++]=str[len-1-t];
		}
	} else {
		str1[s++]=str[len/2];
		for(int t=len/2-1; t>=0; t--) {
			str1[s++]=str[len-1-t];
			str1[s++]=str[t];
		}
	}
	for(int t=0; t<s; t++) {
		printf("%c",str1[t]);
	}
	return 0;
 }