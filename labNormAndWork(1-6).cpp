#include<stdio.h>
#include<locale.h>
#include<stdlib.h> //�������� �����
#include<time.h>    //��������� ����� �� �������
//#include<ctype.h>  �������� �������� �� ����� ��� ������
#define N 15

//atoi
//atol

int main()
{
  setlocale(LC_ALL,"Rus");
  int a;
  int alphabet,number;
  int array[N][N];
  int perehod[N][N];
  srand(time(NULL));
  printf("�� ������ ������� ��������� ���-�� ����� � ��������? (1 - ��) ");
  scanf("%d", &alphabet);
  if(alphabet == 1){
    a = 1 + rand()%(10); //������� [1;10]
  }
  else{
  printf("������� ���������� ����� � �������� <= %d ", N);
  scanf("%d", &a);
  if((a<=0)||(a>N)){  //������������� ���-�� �����
    while((a<=0)||(a>N)){
	  printf("����� ������ ���� � ���������� [1;%d]. ������� ��� ���: ", N, N);
      scanf("%d", &a);
      }
    }
  }
  printf("�� ������ ��������� ������� ���������� ������? (1 - ��) ");
  scanf("%d", &number);
  if(number==1){
    for(int i=0; i<a; i++){
      for(int j=0; j<a; j++){
        array[i][j] = -100 + rand ()%(100+100+1); //������� [-100; 100]
        perehod[i][j] = array[i][j];
      }
    }
  }     //�������� ����������
  else{     //������ ����
    for(int i=0; i<a; i++){
        printf("\n");
        for(int j=0; j<a; j++)
        {
          printf("������� �������� [%d,%d]: ", i, j);
          scanf("%d", &array[i][j]);
          scanf("%d", &perehod[i][j]);
		    }
    }
  }
  printf("   ---������ �������---   ");
  for(int i=0; i<a; i++)
  {
    printf("\n");
    for(int j=0; j<a; j++)
    {
      printf("%4d", array[i][j]);
    }
  }
  printf("\n");
  if(a%2 == 0){
    for(int i=0; i<a/2;i++){ // 2 �������� �� ��������
      for(int j=0; j<a/2; j++){
        array[i][j] = perehod[i+a/2][j+a/2];
        }
      for(int j=a/2; j<a; j++){ // 1 �� ������
        array[i][j] = perehod[i+a/2][j-a/2];
      }
    }
    for(int i=a/2; i<a;i++){
      for(int j=0; j<a/2; j++){ // 3 �� ������
        array[i][j] = perehod[i-a/2][j+a/2];
      }
      for(int j=a/2; j<a; j++){
        array[i][j] = perehod[i-a/2][j-a/2]; // 4 �� ������
      }
    }
}
  else{
	  for(int i=(a+1)/2; i<a; i++) //4 �������� �� 2
	  {
		  for(int j=(a+1)/2; j<a; j++)
		    {
		      array[i][j] = perehod[i-(a+1)/2][j-(a+1)/2];
		    }
    	for(int j=0; j<(a+1)/2-1; j++) // 3 �� ������
    		{
    			array[i][j] = perehod[i-(a+1)/2][j+(a+1)/2];
    		}
    }
	  for(int i=0; i<(a+1)/2-1; i++) //������ ��������
	  {
  		for(int j=(a+1)/2; j<a; j++)
  		{
  		  array[i][j] = perehod[i+(a+1)/2][j-(a+1)/2]; // 1 �� ������
  		}
  		for(int j=0; j<(a+1)/2-1; j++) //������ ��������
    		{
    		  array[i][j] = perehod[i+(a+1)/2][j+(a+1)/2];
    		}
    }
  }
	 printf("\n");
   for(int i=0; i<a; i++)
   {
     printf("\n");
     for(int j=0; j<a; j++)
     {
       printf("%4d", array[i][j]);
     }
   }
   getchar();
   getchar();
   return 0;
}
