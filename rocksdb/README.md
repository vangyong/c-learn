
1、环境
rpm -ivh gflags-2.1.1-7.el7.x86_64.rpm

yum install snappy snappy-devel
yum install zlib zlib-devel
yum install bzip2 bzip2-devel
yum install lz4-devel
yum install libasan

安装 zstandard
wget https://github.com/facebook/zstd/archive/v1.1.3.tar.gz
mv v1.1.3.tar.gz zstd-1.1.3.tar.gz
tar zxvf zstd-1.1.3.tar.gz
cd zstd-1.1.3
make && make install

