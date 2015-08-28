int main(int argc, char** argv) {
    long i = -1;

    if (i < sizeof(i)) {
        printf("OK\n");
    }
    else {
        printf("error\n");
    }

    return 0;
}
