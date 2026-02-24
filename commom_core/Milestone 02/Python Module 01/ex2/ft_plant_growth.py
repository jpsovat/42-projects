class Plant:
    def __init__(self, name, height, age):
        self.name = name
        self.height = height
        self.age = age

    def grow(self):
        self.height += 1

    def get_old(self):
        self.age += 1

    def get_info(self):
        return f"{self.name}: {self.height}cm, {self.age} days old"


if __name__ == "__main__":
    rose = Plant("Rose", 25, 30)
    sunflower = Plant("Sunflower", 80, 45)
    cactus = Plant("Cactus", 15, 120)

    plants = [rose, sunflower, cactus]

    print("=== Day 1 ===")
    initial_heights = []
    for plant in plants:
        print(plant.get_info())
        initial_heights.append(plant.height)

    for _ in range(6):
        for plant in plants:
            plant.grow()
            plant.get_old()

    print("=== Day 7 ===")
    for i in range(len(plants)):
        plant = plants[i]
        print(plant.get_info())
        growth = plant.height - initial_heights[i]
        print(f"Growth this week: +{growth}cm")
