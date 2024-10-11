# 指定编译器
CXX := g++

# 指定编译选项
CXXFLAGS := -Wall -std=c++11

# 目标文件
# TARGET := test/vector_test

# # 源文件和头文件
# SRCS := test/vector.cpp
# HDRS := src/vector.hpp

# # 生成目标文件
# $(TARGET): $(SRCS) $(HDRS)
# 	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# # 清理
# .PHONY: clean
# clean:
# 	rm -f $(TARGET)

# 编译vector测试
SRCS_VECTOR := test/vector.cpp
HDRS_VECTOR := src/vector.hpp
.PHONY: vector
vector: $(SRCS_VECTOR) $(HDRS_VECTOR)
	$(CXX) $(CXXFLAGS) -o vector_test $(SRCS_VECTOR) $(HDRS_VECTOR)
	@./vector_test
	@rm vector_test