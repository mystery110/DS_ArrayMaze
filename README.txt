-The size of the map is stored by the variable n and m
-Function check is to check the presence of 0 within the array . If 0 is found , false is
 returned.If no 0 is founded , true is returned.
-int prob is to record the problem that are currently solving,either problem 1 or 2
-Maze 1 and Maze 2 are the two array that store the map of 15x15 and 39x19
-The amount of steps that cockroach has made is recorded by variable totalStep
-StartI record i position of the cockroach while StartJ record j position.
-Maze 1 and Maze 2 is added 1 at the starting positio of the cockroach
-The 8 combination of movement are stored within the array MoveI and Move J.
-i is random within the range 0 to 8 
-After random a number , check wherether after adding the combination either StartI or StartJ  will be less than 0 or exceed the limit.If the result is positive , random another combinatio n of movement . 
-Add the movement to StartI and Start J
-The Maze1 or 2 of the current position of cockroach is added 1
-totalStep is added by 1
-If totalStep equal to 50000,prob is added by 1. This will cause the progam to either start so lvong problem 2 or exit the while loop 
-check the presence of 0 in the maze .If no 0 are found, prob is added by 1.
-Print out the result .
-Check function is simply done by two for loop and compare every element in the array(Maze1 or 2)

