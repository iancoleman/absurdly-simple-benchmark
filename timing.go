package main

import (
"fmt"
"time"
)

func main() {

	start := time.Now()
	x := 1.00001
	for i := 0; i < 100000; i++ {
		x = x * 1.00001
	}
	fmt.Println(x)
	t := time.Since(start)
	fmt.Println(t.Nanoseconds() / 1000.0)
}
