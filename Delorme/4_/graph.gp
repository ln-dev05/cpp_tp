# plot data of the file data1.txt and data2.txt regarding prime number in sieve filter
set term png
set output "prime_number.png"
# set terminal x11
set xlabel "Nth prime number"
set ylabel "number of call to next()"
set ytics nomirror
set y2tics
plot "data1.txt" using 1:2 axis x1y1 with line title "Number of Cumulated Call to next()", \
     "data2.txt" using 1:2 axis x1y2 with line title "Number of Call from last prime to next()"

