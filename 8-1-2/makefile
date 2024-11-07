# 컴파일러 지정
CXX = g++
# 컴파일 옵션 (-Wall: 모든 경고 메시지 출력)
CXXFLAGS = -Wall

# 실행 파일 이름
TARGET = Shape

# 소스 파일
SRC = Shape.cpp

# 오브젝트 파일
OBJ = $(SRC:.cpp=.o)

# 기본 규칙 (make 또는 make all을 실행하면 이 규칙이 실행됨)
all: $(TARGET)

# 실행 파일 생성 규칙
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# .o 파일 생성 규칙 (필요 시 자동으로 생성)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 실행 파일 및 오브젝트 파일 삭제 규칙
clean:
	rm -f $(OBJ) $(TARGET)

# 프로그램 실행 규칙
run: $(TARGET)
	./$(TARGET)

