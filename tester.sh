echo "Compiling All programs"

filename=$(basename "$fullfile")
extension="${filename##*.}"
filename="${filename%.*}"
g++ src/1.cpp -o 1
g++ n.cpp -o n
g++ n_log_n.cpp -o n_log_n
g++ n_square.cpp -o n_square

echo 1 > all_in
echo $1 >> all_in
echo "Testing with T=1 and n=$1"
timeout 5s /usr/bin/time -f "Time for O(1)       : %U" ./1
timeout 5s /usr/bin/time -f "Time for O(n)       : %U" ./n
timeout 5s /usr/bin/time -f "Time for O(nlog(n)) : %U" ./n_log_n
timeout 5s /usr/bin/time -f "Time for O(n^2)     : %U" ./n_square