
1、编译 
	g++ helloworld.cpp -o helloworld
	或
	gcc helloworld.cpp -lstdc++ -o helloworld
	或
	c++ helloworld.cpp -o helloworld

2、两个源文件编译链接成一个单一的可执行程序
	g++ hellospeak.cpp speak.cpp -o hellospeak

3、源文件生成对象文件
	g++ -c hellospeak.cpp -o hellospeak.o
	g++ -c speak.cpp -o speak.o
	g++ hellospeak.o speak.o -o hellospeak
	
4、生成汇编代码
	g++ -S helloworld.cpp 
	helloworld.s

5、创建静态库
	g++ -c sayhello.cpp
	g++ -c say.cpp
	ar -r libsay.a sayhello.o say.o
	g++ saymain.cpp libsay.a -o saymain