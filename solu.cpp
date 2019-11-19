#include <iostream>
#include <cmath>
using namespace std;

const float t0=0;
const float tf=0;
const int s = 1;
const int D = 1;
const int Phi0 = 0;
const int Phif = 0;


int main(){
	
	Phi(30, 100);
    
    return 0;
    
}


float Phi(int Nx, int Nt){
    
    float Dx = 2/Nx;
    float Dt = 1/Nt;
    float f[N];
    float fa[N];
    
    for(int j=0; j < N; j + Dx){
        
        if(n==0 || n==N){
            fa[n] = 0;
        }
        
        else{
            f[n] = fa[n-1] + D*(Dt/pow(Dx, 2)) * (Phi(Nx, Nt)[n+1] - 2*fa[n-1])
        }
        
        
    }
    
    return f;
    
    
}