float suma(float a,float b)
{
    float resultado;
    resultado = a + b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}

float resta(float a,float b)
{
    float resultado;
    resultado = a - b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}

float division(float a,float b)
{
    float resultado;
    if(a==0||b==0)
    {
        printf("\nEl resultado es:No se puede calcular la division ya que uno de los operadores es 0");
    }
    else
    {
        resultado = a/b;
        printf("\nEl resultado es:%.2f",resultado);
    }
    return resultado;
}

float multiplicacion(float a,float b)
{
    float resultado;
    resultado = a*b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}

float factorial(float a)
{
    float i,resultado=1,resultado2;
    if(a==0)
    {
        resultado2 = 0;
        return resultado2;
    }
    else
    {   for(i=1;i<=a;i++)
        {
            resultado=resultado*i;
        }
    }
    return resultado;
}
