#include <stdio.h>
#include <hiredis/hiredis.h>
#include <string.h>
#include <time.h>

int main(int argc, char **argv) {
	printf("CLOCKS_PER_SEC:%d\n",CLOCKS_PER_SEC);
	redisContext *c;
	redisReply *reply;
	c = redisConnect((char *)"192.168.33.135",6379);

	reply = (redisReply *)redisCommand(c,"AUTH %s","123456");
	printf(reply->str);
	freeReplyObject(reply);
	
	//�������� 
	clock_t start, finish;
	start = clock();
	for(int i=0; i<10; i++) {
		reply = (redisReply *)redisCommand(c,"SET %d %s",i,"test"+i);
		freeReplyObject(reply);
		printf("puted data %d \n",i);
	}
	finish = clock();
	double duration = (double)(finish - start) / CLOCKS_PER_SEC*1000;
	printf("SET Time used:%f ms.\n",duration);
	
	start = clock();
	for(int i=0; i<10; i++) {
		reply = (redisReply *)redisCommand(c,"GET %d",i);
		freeReplyObject(reply);
		printf("geted data %d \n",i);
	}
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC*1000;
	printf("GET Time used:%f ms.\n",duration);
	redisFree(c);
	return 0;
}
