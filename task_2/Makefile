obj-m += test3.o

all:
	make -C /lib/modules/6.8.0-35-generic/build M=$(PWD) modules
clean:
	make -C /lib/modules/6.8.0-35-generic/build M=$(PWD) clean
