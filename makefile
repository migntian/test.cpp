.PHONY:clean
main:date.cpp
	g++ -o $@ $^
clean:
	rm main
	
