# 컴파일러 및 플래그 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# 생성할 실행 파일 이름
TARGET = complex_program

# 소스 파일
SRC = main.cpp

# 오브젝트 파일
OBJ = $(SRC:.cpp=.o)

# 실행 파일 빌드 규칙
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# 소스 파일을 오브젝트 파일로 컴파일
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 빌드 파일 정리 규칙
clean:
	rm -f $(OBJ) $(TARGET)

# 프로그램 실행 규칙
run: $(TARGET)
	./$(TARGET)

