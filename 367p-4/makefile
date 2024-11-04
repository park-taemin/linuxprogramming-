# Makefile for compiling free.cpp

# 컴파일러 설정
CXX = g++
# 컴파일 옵션 설정 (-Wall: 모든 경고 표시, -g: 디버그 정보 포함)
CXXFLAGS = -Wall -g
# 생성할 실행 파일 이름
TARGET = book

# 기본 규칙: free.cpp 파일을 컴파일하여 book_app 실행 파일 생성
$(TARGET): Book.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) Book.cpp

# clean 규칙: 생성된 실행 파일을 삭제
clean:
	rm -f $(TARGET)

