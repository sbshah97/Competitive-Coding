-module(solution).
-export([main/0]).
solveMeFirst(A, B) ->
    A + B.
main() -> 
    Res = solveMeFirst(A,B),
    io:format("~p~n",[Res]).
