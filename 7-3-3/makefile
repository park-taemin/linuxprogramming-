# 컴파일러 지정
CXX = g++
# 컴파일 옵션
CXXFLAGS = -Wall -std=c++11

# 실행 파일 이름
TARGET = power_app


# 소스 파일과 객체 파일
SRC =  power.cpp
OBJ =  power.o

# 기본 규칙: 실행 파일 생성
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# 객체 파일 생성 규칙
main.o: main.cpp power.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Power.o: power.cpp power.h
	$(CXX) $(CXXFLAGS) -c power.cpp

# 'make clean' 명령으로 불필요한 파일 삭제
clean:
	rm -f $(OBJ) $(TARGET)

# 실행 규칙: 'make run'으로 프로그램 실행
run: $(TARGET)
	./$(TARGET)
	
