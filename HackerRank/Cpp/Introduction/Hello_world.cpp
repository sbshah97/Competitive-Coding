% Enter your code here. Read input from STDIN. Print output to STDOUT
% Your class should be named solution

-module(solution).
-export([main/0, hello/1]).
hello(N) when N > 0 -> io:format("Hello World~n"), hello(N-1);   
            hello(N) when N==0 -> io:format("").

main() -> 
    {ok, [N]} = io:fread("", "~d"),
    hello(N).
	
