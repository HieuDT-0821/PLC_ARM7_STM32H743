
CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m7 -mthumb -O2

all: main.elf

main.elf: Core/Src/main.c
    $(CC) $(CFLAGS) -o main.elf Core/Src/main.c

clean:
    rm -f main.elf
