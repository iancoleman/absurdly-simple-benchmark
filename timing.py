import datetime

def x():
	start = datetime.datetime.now()
	f = 1.00001
	for i in xrange(100000):
		f = f * 1.00001
	print f
	total_time = datetime.datetime.now() - start
	print total_time.total_seconds() * 10e6

x()
