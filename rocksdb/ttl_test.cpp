#include <cstdio>
#include <string>

#include "rocksdb/db.h"
#include "rocksdb/slice.h"
#include "rocksdb/options.h"
#include "rocksdb/utilities/db_ttl.h"

using namespace rocksdb;

std::string kDBPath = "/data/datas/rocksdb/ttl_test";

int main() {
    DBWithTTL* db;
    Date_tiered
    Options options;
    options.create_if_missing = true;
    //options.WAL_ttl_seconds = 20;

    //Status s = DB::Open(options, kDBPath, &db);
    Status s = DBWithTTL::Open(options, kDBPath, &db, 20, false);
    assert(s.ok());

    Slice key("key1");
    Slice value("key1_value");

    // Put key-value
    s = db->Put(WriteOptions(), key, value);
    assert(s.ok());

    // Get value
    std::string get_value;
    s = db->Get(ReadOptions(), key, &get_value);
    assert(s.ok());
    printf("ttl_test get value success is %s \n", get_value.c_str());

    delete db;

    return 0;
}
