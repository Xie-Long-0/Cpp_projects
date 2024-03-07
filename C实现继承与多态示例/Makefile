TARGET	:= main.exe

CC		:= gcc
CFLAGS	:= -g -Wall

SOURCES   =$(wildcard ./*.c)

OBJ   =$(patsubst %.c, %.o, $(SOURCES))

#links
$(TARGET):$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

#compile
%.o: %.c %.h
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY:clean

# 根据操作系统执行对应的clean操作
clean:
	@echo "Clean temp files......"
    ifdef OS
        ifeq ($(OS),Windows_NT)
			@del /S /Q *.o *.exe
        else
			@rm -f $(OBJ) $(TARGET)
        endif
    else
		@echo "Unknown operating system. Please specify clean target manually."
    endif
