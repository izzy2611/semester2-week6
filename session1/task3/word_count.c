int main(int argc, char **argv) {
    char filename;
    int count;
    buffer 
    filename = ("Which file would you like to use?");
    fgets(buffer, sizeof(buffer), stdin);
    FILE *fp =fopen(filename, "r");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        count = count + 1;

    }
    printf("%d", count);
}