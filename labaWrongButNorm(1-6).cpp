#include<stdio.h>
#include<locale.h>
#include<stdlib.h> //радомное число
#include<time.h>    //рандомное число по времени
//#include<ctype.h>  проверка значения на число или строку
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
  printf("Вы хотите выбрать случайное кол-во строк и столбцов? (1 - да) ");
  scanf("%d", &alphabet);
  if(alphabet == 1){
    a = 1 + rand()%(10); //отрезок [1;10]
  }
  else{
  printf("Введите количество строк и столбцов <= %d ", N);
  scanf("%d", &a);
  if((a<=0)||(a>10)){  //Отрицательное кол-во строк
    while((a<=0)||(a>10)){
	  printf("Число должно быть в промежутке [1;%d]. Введите ещё раз: ", N, N);
      scanf("%d", &a);
      }
    }
  }
  printf("Вы хотите заполнить матрицу случайными числам? (1 - да) ");
  scanf("%d", &number);
  if(number==1){
    for(int i=0; i<a; i++){
      for(int j=0; j<a; j++){
        array[i][j] = -100 + rand ()%(100+100+1); //отрезок [-100; 100]
      }
    }
  }     //радомное заполнение
  else{     //ручной ввод
    for(int i=0; i<a; i++){
        printf("\n");
        for(int j=0; j<a; j++)
        {
          printf("Введите значение [%d,%d]: ", i, j);
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
	  for(int i=a/2; i<a; i++) //четвёртая четверть
	  {
		printf("\n");
		for(int j=a/2; j<a; j++)
		{
		  printf("%4d", array[i][j]);
		}
		for(int j=0; j<a/2; j++) //третья четверть
		{
		  printf("%4d", array[i][j]); 
		}
	  }

	  for(int i=0; i<a/2; i++) //первая четверть
	  {
		printf("\n");
		for(int j=a/2; j<a; j++)
		{
		  printf("%4d", array[i][j]);
		}
		for(int j=0; j<a/2; j++) //вторая четверть
		{
		  printf("%4d", array[i][j]);
		}
	  }
	 }
  else{
	  for(int i=(a+1)/2; i<a; i++) //четвёртая четверть
	  {
		printf("\n");
		for(int j=(a+1)/2; j<a; j++)
		{
		  printf("%4d", array[i][j]);
		}
		printf("%4d", array[i-(a+1)/2][(a+1)/2-1]); //центральные столбцы
		for(int j=0; j<a/2; j++) //третья четверть
		{
			printf("%4d", array[i][j]); 
		}
	  }
	  for(int i=(a+1)/2-1; i==(a+1)/2-1; i++) //строчка посередине
	  {
		  printf("\n");
		  for(int j=0; j<a; j++){
			  printf("%4d", array[i][j]);
		  }
	  }
	  for(int i=0; i<a/2; i++) //первая четверть
	  {
		printf("\n");
		for(int j=(a+1)/2; j<a; j++)
		{
		  printf("%4d", array[i][j]);
		}
		printf("%4d", array[i+(a+1)/2][(a+1)/2-1]); //центральные столбцы1
		for(int j=0; j<a/2; j++) //вторая четверть
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
