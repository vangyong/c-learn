#include <cstdio>
#include <string>

#include "rocksdb/db.h"
#include "rocksdb/slice.h"
#include "rocksdb/options.h"

using namespace rocksdb;

std::string kDBPath = "/data/datas/rocksdb/test2";

int main() {
  DB* db;
  Options options;
  options.IncreaseParallelism();
  options.OptimizeLevelStyleCompaction();
  options.create_if_missing = true;

  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());

  // Put key-value
  s = db->Put(WriteOptions(), "key1", "value");
  assert(s.ok());

  // Get value
  std::string value;
  s = db->Get(ReadOptions(), "key1", &value);
  assert(s.ok());
  printf("value is %s \n",&value);
  assert(value == "value");

  delete db;

  return 0;
}
