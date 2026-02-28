#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd);
//accepted only if Length 5-8  and 2 Uppercase or more and not repeat Uppercase and 2 digit or more
int checkValidPass(char *ps,int size);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	int size= strlen(password);
	
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password,size)) {
		//if Password is valid
		printf("Accepted\n");
	}
	else
		printf("Reject\n");
}


int checkValidPass(char *ps,int size) {
	int count=0;
	int uppercase=0;
	int i,j;
	if (size<5||size>8) 
		return 0;
			
	for (i=0;i<size;i++){
		if (ps[i]>=48 && ps[i]<=57)
			count++;
		if (ps[i]>='A' && ps[i]<='Z')
			uppercase++;		
	}
	
	if (count<2||uppercase<2) 
		return 0;	
		
	for(i=0;i<size;i++){
		if(ps[i]>='A'&&ps[i]<='Z'){
			for(j=i+1;j<size;j++){
				if(ps[i]==ps[j])
					return 0;
			}
		}
	}
	return 1;		
}

int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mPAS505"))
		return 1;
	else
		return 0;
}
