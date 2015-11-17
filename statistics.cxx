#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void Random (double* x , const int N){
  for(int i = 0 ; i < N ; i++){
  x[i] = ((double)rand() / (RAND_MAX));
  }
}

void mean_variance (double* x ,const int N , double& m , double& v ){
  m = 0.0;
  v = 0.0;

for( int i = 0 ; i < N-1 ; i++){
    m += 1.0/N * (x[i]);
    cout << x[i] << endl;
    }
for( int i = 0 ; i < N-1 ; i++){
    v += 1.0/N * pow((x[i] - m),2);
    }
}

int main(){
   const int N = 100;
   double p[N];
   double mean, var;

   srand(time(NULL));
   Random (p , N);
   mean_variance (p, N, mean , var);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
