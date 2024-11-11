# 컴파일러 설정
CXX = g++
# 컴파일 옵션
CXXFLAGS = -Wall -std=c++11

# 타겟 파일 이름
TARGET = color_point

# 목적 파일
OBJS = ColorPoint.o

# 기본 규칙: 컴파일 및 링크
$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

# 개별 파일 컴파일 규칙
ColorPoint.o: ColorPoint.cpp
	$(CXX) $(CXXFLAGS) -c ColorPoint.cpp

# clean 명령어로 생성된 파일들 삭제
clean:
	rm -f $(OBJS) $(TARGET)

