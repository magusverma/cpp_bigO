echo "Compiling All programs"

for f in `ls ./src`;
do
	file="${f%.*}";
	g++ ./src/$f -o bin/$file;
	echo "Compiled src/$f as bin/$f"
done;

echo 1 > ./input/all_in
echo $1 >> ./input/all_in
echo
echo "Testing with T=1 and n=$1"
for f in `ls ./bin`;
do
	timeout 5s /usr/bin/time -f "Time for O($f) : %U" ./bin/$f < ./input/all_in > ./output/$f
done;
	echo "Output Logged in 'output' folder"
