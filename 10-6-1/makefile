# 컴파일러와 옵션 정의
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# 실행 파일 이름
TARGET = matrix_add

# 소스 파일
SRC = main.cpp

# 빌드 규칙
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# 실행 규칙
run: $(TARGET)
	./$(TARGET)

# 정리 규칙
clean:
	rm -f $(TARGET)

