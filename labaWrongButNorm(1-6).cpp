#include<stdio.h>
#include<locale.h>
#include<stdlib.h> //�������� �����
#include<time.h>    //��������� ����� �� �������
//#include<ctype.h>  �������� �������� �� ����� ��� ������
#define N 10

//atoi
//atol

int main()
{
  setlocale(LC_ALL,"Rus");
  int a;
  int alphabet,number;
  int array[N][N];
  srand(time(NULL));
  printf("�� ������ ������� ��������� ���-�� ����� � ��������? (1 - ��) ");
  scanf("%d", &alphabet);
  if(alphabet == 1){
    a = 1 + rand()%(10); //������� [1;10]
  }
  else{
  printf("������� ���������� ����� � �������� <= %d ", N);
  scanf("%d", &a);
  if((a<=0)||(a>10)){  //������������� ���-�� �����
    while((a<=0)||(a>10)){
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
		}
    }
  }
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
	  for(int i=a/2; i<a; i++) //�������� ��������
	  {
		printf("\n");
		for(int j=a/2; j<a; j++)
		{
		  printf("%4d", array[i][j]);
		}
		for(int j=0; j<a/2; j++) //������ ��������
		{
		  printf("%4d", array[i][j]); 
		}
	  }

	  for(int i=0; i<a/2; i++) //������ ��������
	  {
		printf("\n");
		for(int j=a/2; j<a; j++)
		{
		  printf("%4d", array[i][j]);
		}
		for(int j=0; j<a/2; j++) //������ ��������
		{
		  printf("%4d", array[i][j]);
		}
	  }
	 }
  else{
	  for(int i=(a+1)/2; i<a; i++) //�������� ��������
	  {
		printf("\n");
		for(int j=(a+1)/2; j<a; j++)
		{
		  printf("%4d", array[i][j]);
		}
		printf("%4d", array[i-(a+1)/2][(a+1)/2-1]); //����������� �������
		for(int j=0; j<a/2; j++) //������ ��������
		{
			printf("%4d", array[i][j]); 
		}
	  }
	  for(int i=(a+1)/2-1; i==(a+1)/2-1; i++) //������� ����������
	  {
		  printf("\n");
		  for(int j=0; j<a; j++){
			  printf("%4d", array[i][j]);
		  }
	  }
	  for(int i=0; i<a/2; i++) //������ ��������
	  {
		printf("\n");
		for(int j=(a+1)/2; j<a; j++)
		{
		  printf("%4d", array[i][j]);
		}
		printf("%4d", array[i+(a+1)/2][(a+1)/2-1]); //����������� �������1
		for(int j=0; j<a/2; j++) //������ ��������
		{
		  printf("%4d", array[i][j]);
		}
	  }
	  printf("\n");
}
	 printf("\n");
  getchar();
  getchar();
  return 0;

}
