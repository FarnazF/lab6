#include <iostream>
#include <cmath>
using namespace std;

int main(){
const double lambda = -0.5;
double t=0.0;
double T = log(0.5)/lambda * 30;
double yf = 1.0;
double yb = 1.0;
double yt = 1.0;
double dt= 4.1;

int N = T/dt;



for(int i=0; i<N; i++){
   yf = (lambda*yf*dt)+yf;
   yb = yb/(1-(lambda*dt));
   yt = yt * (1+lambda*dt*0.5)/(1-lambda*dt*0.5);
   
   t = t + dt;
   cout << i*dt << "\t" << yf << "\t" << yb << "\t" << yt << "\t" << exp(lambda*t) << endl;
}

cout << "#" << N << "\t" << lambda*dt << endl;

 return 0;
}

