# Makefile

# 定义编译器
CC = g++

# 定义编译选项
CFLAGS = -Wall -std=c++11

# 定义目标文件
OBJ = task1.o

# 定义可执行文件
EXEC = task1

# 编译规则
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# 对象文件生成规则
task1.o: bugfile/task1.cpp
	$(CC) $(CFLAGS) -c bugfile/task1.cpp

# 清理编译产生的文件
clean:
	rm -f $(OBJ) $(EXEC)
