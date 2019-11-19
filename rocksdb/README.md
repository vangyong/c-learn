
1、环境
    yum install gcc
    yum -y install gcc+ gcc-c++
    yum install cmake
    yum install perl
    yum install snappy snappy-devel
    yum install zlib zlib-devel
    yum install bzip2 bzip2-devel
    yum -y install lz4-devel
    yum install libasan
    rpm -ivh gflags-2.1.1-7.el7.x86_64.rpm
    rpm -ivh zstd-1.4.2-1.el7.x86_64.rpm

2、下载rocksdb
    wget https://github.com/facebook/rocksdb/archive/v6.4.6.zip

4、编译代码安装
   make static_lib
   make install-static
   make shared_lib
   make install-shared

5、编译代码
g++ -std=c++11 -o test test.cpp -lrocksdb  -lpthread -ldl
g++ -std=c++11 -o test2 test2.cpp -lrocksdb  -lpthread -ldl