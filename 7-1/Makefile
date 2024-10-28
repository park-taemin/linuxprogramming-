# 사용할 컴파일러와 컴파일 옵션 설정
CXX = g++               # C++ 컴파일러
CXXFLAGS = -std=c++11 -Wall  # C++11 표준 사용 및 모든 경고 메시지 출력

# 생성할 실행 파일 이름
TARGET = complex_program

# 소스 파일 지정
SRC = main.cpp

# 오브젝트 파일 이름
OBJ = $(SRC:.cpp=.o)

# 실행 파일 빌드 규칙
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# 소스 파일을 오브젝트 파일로 컴파일하는 규칙
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 빌드 과정에서 생성된 파일들을 정리하는 규칙
clean:
	rm -f $(OBJ) $(TARGET)

# 프로그램 실행 규칙
run: $(TARGET)
	./$(TARGET)

