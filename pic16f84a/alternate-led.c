// #include <pic.h>;
void main() {
    int i;
    TRISB = 0;
    while(1) {
        PORTB = 0xff;
        for (i=0; i<100;i++)
        PORTB = 0x00;
        for (i=0;i<100;i++)
    }
}