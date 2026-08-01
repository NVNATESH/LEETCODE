class MyHashSet:

    def __init__(self):
        self.l = list()

    def add(self, key: int) -> None:
        if key in self.l : return
        self.l.append(key)

    def remove(self, key: int) -> None:
        if (key in self.l) :self.l.remove(key)

    def contains(self, key: int) -> bool:
        return (key in self.l)
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)