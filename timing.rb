f = 1.00001
start = Time.now()
for i in 0..100000
	f = f * 1.00001
end
ending = Time.now()
puts f
puts (ending - start) * 10e6
