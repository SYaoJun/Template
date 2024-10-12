[![codecov](https://codecov.io/gh/syaojun/codecov_cpp_test/branch/main/graph/badge.svg?token=vjEoxIUG6C)](https://codecov.io/gh/syaojun/codecov_cpp_test)

# 编译
```
cmake --preset debug
cmake -B build -S .
cmake --build build -j `nproc`
cmake -B build -S . -DENABLE_ASAN=1
cmake -B build -S . -DENABLE_TSAN=1
cmake -B build -S . -DENABLE_MSAN=1
make asan_test
```
## 参考
- [csdn](https://blog.csdn.net/weiwei9363/article/details/124352067)