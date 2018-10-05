#include<stdio.h>
//Helper Functions.
float power(float x, float y){
        int i = 0;
        float result = 1;
	if(y==0){
	return 1;
	}
        for(i=0;i<y;i++){
                result *= x;
        }
        return(result);
}

double callog(float x){
	float lo = 0;
	int i;
	for(i=0;i<4;i++){
		printf("%f  ",lo);
		lo += 1;
		lo += power(-1,i)*(power(x-1,i+1)/i+1);
	}
	return lo;
        //return x-1 - power(x-1,2)/2 + power(x-1,3)/3 - power(x-1,4)/4 + power(x-1,5)/5; // Using series of log
	//return (x>1) ? 1 + callog(x/2.71828) : 0; //only integer value of log.
}

// main functions
int linear(float mar[100]){
	int i;
	printf("\n=============================5*n+2 Function======================================\n");
	for(i=0;i<100;i++){
		printf("%lf ", 5*mar[i]+2);
	}
	printf("\n");
}

int logaf(float mar[100]){
	int i;
        printf("\n==============================Log(x) Function======================================\n");
	printf("\n");
  	 for(i=0;i<100;i++){
               printf("%lf ", callog(mar[i]));
        }
}

void logaf2(float mar[100]){
	int i;
        printf("\n==============================x*Log(x) Function======================================\n");
        for(i=0;i<100;i++){
               printf("%lf ", mar[i]*callog(mar[i]));
        }
}

int nsquare(float mar[100]){
        int i;
	int j;
        printf("\n=============================n**2 Function======================================\n");
        for(i=0;i<100;i++){
		j = mar[i];
                printf("%f ",	power(j,2));
        }
	printf("\n");
}

int nfour(float mar[100]){
        int i;
        int j;
        printf("\n=============================n**4 Function======================================\n");
        for(i=0;i<100;i++){
                j = mar[i];
                printf("%f ",   power(j,4));
        }
	printf("\n");
}

void constant(float mar[100]){
	int i;
        printf("\n=============================2**3 Function======================================\n");
        for(i=0;i<100;i++){
                printf("%f ",   power(2,3));
        }
        printf("\n");

}

void constant2(float mar[100]){
	int i;
	printf("\n=============================3**3 Function======================================\n");
        for(i=0;i<100;i++){
                printf("%f ",   power(3,3));
        }
        printf("\n");
} 

main(){
	float ar[100];
	int i=0;
	float mar[100];
	int cas;
	for(i=0;i<100;i++){
		int j = rand()%100+1; //Assigning random integers b/w 0 - 100.
		ar[i] = j;
	}
	int y=1;
	while(y==1){
        printf("\n=============================INPUT VALUES======================================\n");
        for(i=0;i<100;i++){
                printf("%f ",ar[i]);
        }
	printf("\n");
	printf("\nPlease Choose an Option.\n");
	printf("1. Log(n)\n");
	printf("2. 5*n + 2\n");
	printf("3. n*log(n)\n");
	printf("4. n**2\n");
	printf("5. n**4\n");
	printf("6. 2**3\n");
	printf("7. 3**3\n");
	printf("8. Generate New Input.\n");
	printf("0. Quit\n");
	scanf("%d",&cas);
	switch(cas){
		case 1:
			logaf(ar);
			break;
		case 2:
			linear(ar);
			break;
		case 3:
			logaf2(ar);
			break;
		case 4:
			nsquare(ar);
			break;
		case 5:
			nfour(ar);
			break;
		case 6:
			constant(ar);
			break;
		case 7:
			constant2(ar);
			break;
		case 8:
			for(i=0;i<100;i++){
                		int j = rand()%100+1;
                		ar[i] = j;
        		}
			break;
		case 0:
			y = 2;
			break;
	}
	}
}
