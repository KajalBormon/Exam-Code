#include<stdio.h>

int main(){
    FILE *in, *out; 

    int a, b; 

    in = fopen("inputC.txt", "r");
    out = fopen("outputC.txt", "w");

    fscanf(in, "%d %d", &a, &b);

    fprintf(out, "First number = %d\n", a);
    fprintf(out, "Second Number = %d\n", b);

    fprintf(out, "Addition = %d\n", a+b);
    fprintf(out, "Subtraction = %d\n", a-b);
    fprintf(out, "Multiplication = %d\n", a*b);

    fclose(in); 
    fclose(out);

    printf("Calculation completed. Check your output.txt file");
    return 0;
}