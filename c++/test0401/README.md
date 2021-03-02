## leetcode解题使用gtest模版

构建新题环境

```
mkdir NO_DIR
cp -rf template/* NO_DIR
cd NO_DIR
vim CMakeLists.txt --修改项目名称以及exe名称
vim include/solution.h --添加解题代码
vim test.cpp --添加单元测试案例，达到自测目的
mkdir -p build
cd build
cmake ..
cd ..
make
./${your_process}
```

重新构建

```
rm -rf build
mkdir -p build
cd build
cmake ..
cd ..
make
```

