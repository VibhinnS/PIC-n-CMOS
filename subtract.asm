SUBTRACT TWO NUMBERS USING PIC18 ASSEMBLY

movlw 0x0A ; Load W with 0x0A
movwf 0x20;
movlw 0x0B;
movwf 0x21;
movf 0x20, W;
subwf 0x21, W;
movwf 0x22;
END