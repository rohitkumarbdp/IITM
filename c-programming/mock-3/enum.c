#include <stdio.h>

struct Score
{
   int rollNo;
   int marks;
};

void print_score(struct Score *p)
{
   /// Missing code
   printf("%d %d",p->rollNo , p->marks);
}

int main()
{
   struct Score S1= {10001,80};
   print_score(&S1);
   return 0;
}