for m in range(int(input())):
    
    no_songs = int(input())

    List = input().split()
    
    List = [int(i) for i in List]
    
    k = int(input())
    
    initial = List[k-1]
    
    List.sort()
    
    print(int(List.index(initial))+1) 
