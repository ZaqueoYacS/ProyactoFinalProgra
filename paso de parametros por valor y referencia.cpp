void incrementa(int &y) 
{
  y = y + 1;
  cout << "Valor incrementado en funcion: " << y << endl;
}

int main()
{
  int i = 5;
  for(int j=0; j<=10; j++){
      incrementa(i);
  }
  cout << "Valor incrementado en main: " << i << endl;
}