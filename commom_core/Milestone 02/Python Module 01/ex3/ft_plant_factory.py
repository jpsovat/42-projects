class Plant:
    def __init__(self, name, height, age):
        self.name = name
        self.height = height
        self.age_days = age

    def show(self):
        print(f"{self.name}: {self.height:.1f}cm, {self.age_days} days old")


if __name__ == "__main__":
    plant_data = [
        ("Rose", 25, 30),
        ("Oak", 200, 365),
        ("Cactus", 5, 90),
        ("Sunflower", 80, 45),
        ("Fern", 15, 120),
    ]

    plants = []
    for i in range(len(plant_data)):
        name = plant_data[i][0]
        height = plant_data[i][1]
        age_days = plant_data[i][2]
        plants.append(Plant(name, height, age_days))

    print("=== Plant Factory Output ===")
    for i in range(len(plants)):
        plant = plants[i]
        print(
            f"Created: {plant.name}: "
            f"{plant.height:.1f}cm, "
            f"{plant.age_days} days old"
        )
