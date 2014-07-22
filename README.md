C++ Programs Runtime Analysis
============================

Testing Runtime of C++ Programmes of various complexities in Linux Environment

### Currently Supports:
- O(1)
- O(n)
- O(nlog(n))
- O(n^2)

### How to Use
git clone https://github.com/magusverma/cpp_bigO.git
cd cpp_bigO
chmod +x tester.sh
./tester.sh 1000000        

``` argument of tester.sh is n for which you want to test in this case 1000000```

### Understanding Output
Shows Runtime in MM:SS for each complexity program written in C++ by testing on given n
Uses a Timeout of 5 seconds  