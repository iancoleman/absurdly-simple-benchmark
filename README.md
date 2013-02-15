absurdly-simple-benchmark
=========================

A simple comparison of the 'performance' of various programming languages

The Test
---

In psuedocode:

x = 1.00001
start timing
for one hundred thousand times
    x = x * 1.00001
end timing
how long did it take?

Languages
---

* c
* go
* python
* ruby

Expectations
---

* c will be fastest
* go will be comparable to c but probably slower
* python and ruby will be comparable in speed, but much slower than c or go

Versions
---

TODO the versions of software used in this test should be listed here.

Running The Tests
---

`g++ timing.c -o timing && ./timing`
`go run timing.go`
`python timing.py`
`ruby timing.rb`

Results
---

Really flakey numbers here (which I will improve later) I found roughly

### Timing
| Language  | Time to run (ms) |
| ----------| ------------|
| c         |       0.7 |
| go | 1.5 |
| python | 50 |
| ruby | 120 |

### Output
| Language | Output |
|--------- |--------|
| c        | 2.718260 |
| go | 2.718295419874667 |
| python | 2.71829541987 |
| ruby | 2.718322602828866 |

Thoughts
---

Mostly my anticipations were correct about the performance.

I would have expected go to be closer to c, and python to be closer to ruby.

I was surprised at the variability in the output values, even knowing how crazy floats can be.

Any thoughts on this would be most welcome.

I will be running it with many runs and `min | avg | max` values, as well as over a longer period of time.

I would prefer to run for a constant time and see how many iterations were possible, but deciding when to stop would almost certainly be the most expensive part of that test, so I think the existing method is better despite it taking orders of magnitude longer for the dynamic languages.
