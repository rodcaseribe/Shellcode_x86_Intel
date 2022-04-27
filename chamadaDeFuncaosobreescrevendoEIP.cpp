#include <cstring>
#include <iostream>

int rodolfo() {
	printf("chamadaaa");
}

int main() {
	//sobrescerevendo EIP para chamada de funcao rodolfo()
    char *payload = "zzzzzzzzzzzzzzzzzzzzzzzzzz\x29\x15\x40";
    char buffer[10];
    strcpy(buffer, payload);
    printf(buffer);
    return 0;
}
