NAME = FakeDesk

all: classic next

classic:
	zcc +zx -vn -startup=5 -clib=new @FakeDesk.lst -o classic -create-app

next:
	zcc +zxn -vn -startup=5 -clib=new @FakeDesk.lst -o next -create-app
