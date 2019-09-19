# include <stdio.h>

int main() {
    // A useful printf flag
    // A `+' character specifying that there should always be a sign placed before the number when using signed formats.
    for(int i=0; i<10; i++)
        printf("+%d\n"+(i>5), i);

    return 0;
}
