#include <stdio.h>
#include <hiredis/hiredis.h>
#include <string.h>
#include <time.h>

int main(int argc, char **argv) {
	printf("CLOCKS_PER_SEC:%d\n",CLOCKS_PER_SEC);
	redisContext *c;
	redisReply *reply;
	c = redisConnect((char *)"192.168.33.135",6379);

	if (c->err) {
		printf("连接Redis失败: %s\n", c->errstr);
	} else {
		printf("连接Redis成功！\n");
	}

	reply = (redisReply *)redisCommand(c, "AUTH %s", "123456");
	if (reply->type == REDIS_REPLY_ERROR) {
		printf("Redis认证失败！\n");
	} else {
		printf("Redis认证成功！\n");
	}
	//设置数据
	reply = (redisReply *)redisCommand(c, "set foo 1234");
	freeReplyObject(reply);
	//获取数据
	reply = (redisReply *)redisCommand(c,"GET foo");
	printf("foo:%s\n",reply->str);
	freeReplyObject(reply);
	redisFree(c);
	return 0;

}
