private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
//Fast IO: https://github.com/finalchild/kotlin-fast-io/blob/master/src/solution.kt#L97
 
fun main(){
    var t = readInt()
    while(t-- > 0){
        var(n,a,b) = readInts()
        var s = "";
        for(i in 1..(a-b)){
        	s+='a'
        }
        for(i in 1..b){
        	var c = i+96
        	var c2=c.toChar()
        	s+=c2
        }
        if(n%a==0){
        	var x = n/a
        	for(i in 1..x){
        		print(s)
        	}
        }
        else{
        	var x=n/a
        	for(i in 1..x){
        		print(s)
        	}
        	var y=n%a
        	for(i in 1..y){
        		print(s[i-1])
        	}
        }
        println()
    }
}