# 변수 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = TV
SRC = TV.cpp

# 기본 빌드 규칙
all: $(TARGET)

# main 파일 컴파일 규칙
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# 실행 규칙
run: $(TARGET)
	./$(TARGET)

# 정리(clean) 규칙
clean:
	rm -f $(TARGET)

# 주석:
# all: 기본 빌드 규칙으로, 실행 파일을 생성합니다.
# run: 컴파일된 프로그램을 실행합니다.
# clean: 생성된 실행 파일을 삭제합니다.

