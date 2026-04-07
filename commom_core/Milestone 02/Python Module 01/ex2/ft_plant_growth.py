class Plant:
    def __init__(self, name, height, plant_age, daily_growth):
        self.name = name
        self.height = height
        self.plant_age = plant_age
        self.daily_growth = daily_growth

    def show(self):
        print(f"{self.name}: {self.height:.1f}cm, {self.plant_age} days old")

    def age(self):
        self.plant_age += 1

    def grow(self):
        self.height += self.daily_growth


if __name__ == "__main__":
    days = 7
    rose = Plant("Rose", 25.0, 30, 0.8)

    plants = [rose]

    for plant in plants:
        plant.initial_height = plant.height

    print("=== Garden Plant Growth ===")
    for i in range(days):
        print(f"=== Day {i + 1} ===")
        for plant in plants:
            plant.show()
            plant.age()
            plant.grow()
            if ((i + 1) == days):
                plant.growth = round((plant.height - plant.initial_height))
                print(f"Growth this week: {plant.growth}cm")
