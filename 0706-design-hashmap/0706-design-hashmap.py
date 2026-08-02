class MyHashMap:

    def __init__(self):
        self.a = []
        self.b = []       

    def put(self, key: int, value: int) -> None:
        if key in self.a :
            c = self.a.index(key)
            self.b[c] = value
        else :
            self.a.append(key)
            self.b.append(value)

    def get(self, key: int) -> int:
        if key in self.a :
            c = self.a.index(key)
            return self.b[c]  
        else :
            return -1      

    def remove(self, key: int) -> None:
        if key in self.a:
            c = self.a.index(key)
            self.a.pop(c)
            self.b.pop(c)

        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)