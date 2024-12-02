# 변수 정의
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = find_max
SRC = main.cpp

# 기본 빌드 타겟
all: $(TARGET)

# 실행 파일 생성
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# 실행
run: $(TARGET)
	./$(TARGET)

# 정리
clean:
	rm -f $(TARGET)

