object Main {
    def main(args: Array[String]) {
        val a = io.StdIn.readLine().toDouble

        val ans = 4/3.0 * 3.14159 * a*a*a
        
        println("VOLUME = %.3f".format(ans))
    }
}
