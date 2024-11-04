# Makefile for compiling main.cpp
# 컴파일러 설정
CXX = g++
# 컴파일 옵션 설정 (여기서는 모든 경고를 표시하고 디버그 정보를 추가)
CXXFLAGS = -Wall -g

# 생성할 실행 파일 이름
TARGET = book

# 기본 규칙: 실행 파일을 만들기 위해 main.cpp 컴파일
$(TARGET): free.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) free.cpp

# clean 규칙: 생성된 파일 삭제
clean:
	rm -f $(TARGET)

