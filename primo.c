#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

static void testa();

bool eh_primo(int p){
    if(p == 1)
        return false;

    return true;
}

int main(int argc, char *argv[]){
    testa();
}

static void testa(){
    assert(eh_primo(1) == false);

    assert(eh_primo(2) == true);

    assert(eh_primo(3) == true);

    assert(eh_primo(5) == true);
}
