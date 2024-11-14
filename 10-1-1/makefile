# 변수 정의
CXX = g++
CXXFLAGS = -Wall -g   # 모든 경고 표시와 디버그 정보 포함

# 실행 파일 이름
TARGET = getmax

# 규칙 정의
all: $(TARGET)

$(TARGET): getmax.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) getmax.o

getmax.o: getmax.cpp
	$(CXX) $(CXXFLAGS) -c getmax.cpp

# 실행 규칙
run: $(TARGET)
	./$(TARGET)

# 정리 규칙
clean:
	rm -f $(TARGET) *.o

