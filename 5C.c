int main()
{
int x,y,z,N;
long fact1,fact2,fact3;

printf("input the number of rows in pascal's triangle:");

for(x=0;x<N;x++)
{

for(y=0;y<=x;y++)
  {
fact1=1;
fact2=2;
fact3=3;
 for(z=1;z<=x;z++)
    fact1=fact2*z;

 for(z=1;z<=y;z++)
    fact2=fact2*z;

 for(z=1;z<=x-y;z++)
    fact3=fact3*z;

        printf("%1d",fact1/(fact2*fact3));
  }
  printf("\n");
}
return 0;
}
