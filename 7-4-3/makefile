# 컴파일러 설정
CXX = g++
CXXFLAGS = -Wall -g

# 실행 파일 이름
TARGET = program

# 소스 파일
SRC = Power.cpp

# 목적 파일
OBJ = $(SRC:.cpp=.o)

# 기본 빌드 규칙
all: $(TARGET)

# 실행 파일 생성 규칙
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# .o 파일 생성 규칙
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# clean 규칙
clean:
	rm -f $(OBJ) $(TARGET)

