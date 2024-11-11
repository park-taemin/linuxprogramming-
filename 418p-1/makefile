# 컴파일러 설정
CXX = g++
# 컴파일 옵션
CXXFLAGS = -Wall -std=c++11

# 타겟 파일 이름
TARGET = Circle

# 목적 파일
OBJS = Circle.o

# 기본 규칙: 컴파일 및 링크
$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

# 개별 파일 컴파일 규칙
Circle.o: Circle.cpp
	$(CXX) $(CXXFLAGS) -c Circle.cpp

# clean 명령어로 생성된 파일들 삭제
clean:
	rm -f $(OBJS) $(TARGET)
	
