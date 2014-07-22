echo 1 > all_in
echo $1 >> all_in
echo "Testing for T=1 and n=$1"
timeout 5s /usr/bin/time -f "Time for O(1)       : %U" ./1
timeout 5s /usr/bin/time -f "Time for O(n)       : %U" ./n
timeout 5s /usr/bin/time -f "Time for O(nlog(n)) : %U" ./n_log_n
timeout 5s /usr/bin/time -f "Time for O(n^2)     : %U" ./n_square