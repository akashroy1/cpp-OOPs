/*
    STL = Container     +  Algo     +     Itrators
            |               |                   |
      Object which       Procedure to        Objects which points to an element 
      stores data        deal with data           of a container


    Containers -|
                |--> 1. Sequence Containers (Uses Linear Fasion)
                |       [Ex - Vector, List, DQueue(Double Ended Queue)]
                |
                |--> 2. Assosiative Containers (Direct Access) TREE
                |       [Set, Multiset, Map, Multimap]
                |
                |--> 3. Derived Containers (Derived from Sequence or Asoosiative Container)
                |       (Real World Modeling)
                |       [Ex - Stack, Priority Queue]
    
    1. Sequence Containers:
                |  Random Access  |  Insersion in Middle  |  Deletion |  Insersion at the end
                |                 |                       |           |
    1.1 Vector  |   Fast          |     Slow              |   Slow    |         Fast  
                |                 |                       |           |
                |                 |                       |           |
    1.2 List    |   Slow          |     Fast              |   Fast    |         Fast  
                |                 |                       |           |
                |                 |                       |           | 
    2. Associative |              |                       |           |
     Container  |                 |                       |           | 
                |   Slow          |     Fast              |   Fast    |         Fast 
                |                 |                       |           |
                |                 |                       |           | 
    

    ⚽  For Derived Containers it depends on the Data Structure 

    
    
    1. Vector
        Random Access - Fast
        Insersion in Middle & Deletion - Slow
        Insersion at the end - Fast
    2. List
        Random Access - Slow
        Insersion is Middle - Fast

*/