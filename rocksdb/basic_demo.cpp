#include <cstdio>
#include <string>

#include "rocksdb/db.h"
#include "rocksdb/slice.h"
#include "rocksdb/options.h"

using namespace rocksdb;

std::string kDBPath = "/data/datas/rocksdb/basic_demo";
std::string kDbPathTran = "/data/datas/rocksdb/transation_demo";

void testTransaction() {
    TransactionDB *txn_db;
    Options options;
    TransactionDBOptions txn_db_options;
    options.create_if_missing = true;


    Status s = TransactionDB::Open(options, txn_db_options, kDbPathTran, &txn_db);
    Transaction *txn = txn_db->BeginTransaction(WriteOptions());
    s = txn->Put("key", "value");
    s = txn->Delete("key2");
    s = txn->Merge("key3", "value");
    s = txn->Commit();
    delete txn;

}

int main() {
    DB *db;
    Options options;
    options.IncreaseParallelism();
    options.OptimizeLevelStyleCompaction();
    options.create_if_missing = true;

    Status s = DB::Open(options, kDBPath, &db);
    assert(s.ok());

    // 写入
    s = db->Put(WriteOptions(), "key1", "value1");
    assert(s.ok());

    // 查询
    std::string value;
    s = db->Get(ReadOptions(), "key1", &value);
    assert(s.ok());
    printf("value is %s \n", &value);
    assert(value == "value1");

    // 原子写入
    rocksdb::WriteBatch batch;
    batch.Delete("key1");
    batch.Put("key2", "value2");
    s = db->Write(rocksdb::WriteOptions(), &batch);

    // 迭代器
    rocksdb::Iterator *it = db->NewIterator(rocksdb::ReadOptions());
    for (it->SeekToFirst(); it->Valid(); it->Next()) {
        cout << it->key().ToString() << ": " << it->value().ToString() << endl;
    }

    delete db;

    // 事务操作
    testTransaction();

    return 0;
}
