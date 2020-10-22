#include<stdio.h>
void
main ()
{
  int age,ages;
  printf ("enter the age");
  scanf ("%d", &age);

  if (age < 50&&age>20)
    {
      ages = 1;

    }
  else if (age > 50)
    {
      ages = 2;

    }
    else{
        ages=3;
    }
 
  switch (ages)
    {
    case 1:
      printf ("working");
     break;
    case 2:
      printf ("pension");
     break;
    case 3:
      printf ("student");
     break;
    }

}
