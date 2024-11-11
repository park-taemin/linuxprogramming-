# Makefile for compiling the Shape project

# 컴파일러 설정
CXX = g++
CXXFLAGS = -Wall -std=c++11

# 실행 파일 이름
TARGET = Shape

# 소스 파일
SRCS = Shape.cpp

# 오브젝트 파일 (SRCS에 포함된 소스 파일과 확장자를 오브젝트 파일(.o)로 변경)
OBJS = $(SRCS:.cpp=.o)

# 기본 타겟
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 오브젝트 파일 생성 규칙
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 클린 타겟 (중간 파일 삭제)
clean:
	rm -f $(OBJS) $(TARGET)

