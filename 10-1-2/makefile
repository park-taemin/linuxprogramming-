# 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# 실행 파일 이름
TARGET = Circle

# 소스 파일과 객체 파일
SRC = Circle.cpp
OBJ = Circle.o

# 기본 규칙: 실행 파일을 생성
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# 개별 소스 파일을 객체 파일로 컴파일
$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

# clean 규칙: 컴파일된 파일 삭제
clean:
	rm -f $(OBJ) $(TARGET)

