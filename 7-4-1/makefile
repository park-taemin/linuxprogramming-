# 컴파일러 지정
CXX = g++
# 컴파일러 옵션 (-Wall: 모든 경고 메시지 표시)
CXXFLAGS = -Wall

# 실행 파일 이름
TARGET = complex

# 기본 타겟
all: $(TARGET)

# 실행 파일 생성 규칙
$(TARGET): complex.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) complex.o

# main.cpp를 오브젝트 파일로 컴파일하는 규칙
complex.o: complex.cpp
	$(CXX) $(CXXFLAGS) -c complex.cpp

# clean 타겟: 컴파일된 파일 제거
clean:
	rm -f $(TARGET) *.o

