#include <iostream>
#include "rocksdb/db.h"

using namespace std;

int main() {
    rocksdb::DB* db;
    rocksdb::Options options;
    options.create_if_missing = true;
    rocksdb::Status status = rocksdb::DB::Open(options, "/data/datas/rocksdb/demo", &db);

    delete db;

    return 0;
}
