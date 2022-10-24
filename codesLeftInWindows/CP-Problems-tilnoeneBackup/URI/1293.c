#include <stdio.h>
#include <math.h>

int main(){
    double xa, ya, xb, yb, cmd, enf;

    while(scanf("%lf %lf %lf %lf %lf %lf", &xa, &ya, &xb, &yb, &cmd, &enf) != EOF){

        double ab = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));

        cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180;
        enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180;
        
        printf("%.3lf\n", ab * (1/tan(cmd) + 1/tan(enf)));
        
    }
    
}