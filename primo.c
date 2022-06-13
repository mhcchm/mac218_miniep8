#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

static void testa();


int main(int argc, char *argv[]){
    testa();
}

static void testa(){
    assert(eh_primo(1) == false);
}
