#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

static void teste1();
static void teste2();
static void teste3();
static void teste4();
bool eh_primo(int p);

int main(int argc, char *argv[]){
    teste1();
    teste2();
    teste3();
    teste4();
}

bool eh_primo(int p){
    if(p == 1)
        return false;

    for(int i=2;i<=p/2;i++){
        if(p % i == 0)
            return false;
    }

    return true;
}

static void teste1(){
    assert(eh_primo(1) == false);
}

static void teste2(){
    assert(eh_primo(2) == true);

    assert(eh_primo(3) == true);

    assert(eh_primo(5) == true);
}

static void teste3(){
    assert(eh_primo(4) == false);
    assert(eh_primo(8) == false);
    assert(eh_primo(16) == false);
}

static void teste4(){
    assert(eh_primo(-1) == false);
}
