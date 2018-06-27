//
// Created by andy on 6/8/18.
//

#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <stdio.h>

void sumArrayOnHost(float*A, float *B, float *C, const int N){
    for(int i = 0; i < N; ++i){
        C[i] = A[i] + B[i];
    }
}

void initialData(float *ip, int size){
    time_t t;
    srand((unsigned int)time(&t));
    for (int i = 0; i < size; ++i){
        ip[i] = (float)(rand()& 0xFF) / 10.0f;
    }
}

int main(int argc, char const *argv[])
{
    int nElem = 1000;
    size_t size = sizeof(float) * nElem;
    float *ha, *hb, *hc;
    ha = (float*)malloc(size);
    hb = (float*)malloc(size);
    hc = (float*)malloc(size);
    initialData(ha, nElem);
    initialData(hb, nElem);
    sumArrayOnHost(ha, hb, hc, nElem);
    for (int i = 0; i < nElem; ++i){
        printf("%f\n", hc[i]);
    }
    free(ha);
    free(hb);
    free(hc);
    return 0;
}