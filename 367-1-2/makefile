# 컴파일러와 컴파일 옵션 설정
CXX = g++
CXXFLAGS = -Wall -g

# 타겟 실행 파일 이름
TARGET = Book

# 소스 파일과 오브젝트 파일
SRCS = Book.cpp
OBJS = $(SRCS:.cpp=.o)

# 기본 규칙: 실행 파일 생성
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 개별 소스 파일을 오브젝트 파일로 컴파일
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 실행 파일 실행
run: $(TARGET)
	./$(TARGET)

# 클린업 규칙
clean:
	rm -f $(OBJS) $(TARGET)

