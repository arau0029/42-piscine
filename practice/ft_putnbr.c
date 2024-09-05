#include <unistd.h>

void  ft_putnbr(int nb)
{
  int count;
  int n;
  char c[99];
  
  n = nb;
  count = 0;
  if(n < 10)
  {
    c[count] = n +'0';
    write(1, c, 1);
    write(1, "\n", 1);
  }
  else
  {
    count++;
  }
  if (count == 1)
  {
    while(n > 9)
    {
      c[count - 1] = (n % 10) + '0';
      n = n/10;
      count++;
    }
    c[count - 1] = n +'0';
    c[count] = '\0';
    while(count > 0)
    {
      write(1, &c[count - 1], 1);
      count--;
    }
    write(1, "\n", 1);
  }
}

int main() {
	int test = -1;
  ft_putnbr(test);
}