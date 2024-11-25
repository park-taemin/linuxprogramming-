# C++ 컴파일러 이름을 변수 CX에 저장
CX=g++
# -g: 디버그모드로 컴파일, -Wall: 모든 경고 메서지 출력
CXFLAGS=-g -Wall
# 목적목록을 변수 OBJS에 저장
OBJS=main.o code.o
# 실행파일 이름을 변수 TARGET에 저장
TARGET=max

# 실행파일 생성
$(TARGET):$(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
# main.c의 목적파일 생성
main.o:main.cpp code.hpp
	$(CX) $(CXFLAGS) -c main.cpp
# code.c의 목적파일 생성
code.o:code.cpp code.hpp
	$(CX) $(CXFLAGS) -c code.cpp
# clean이 phony target임을 명시
.PHONY:clean
# 빌드 과정에서 생성된 생성파일, 목적파일 삭제
clean:
	rm $(TARGET) $(OBJS)
