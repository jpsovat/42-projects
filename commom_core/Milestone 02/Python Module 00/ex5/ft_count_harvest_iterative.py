def ft_count_harvest_iterative():
    days_to_harvest = int(input("Days until harvest: "))
    day = 1
    while day <= days_to_harvest:
        print(f"Day {day}")
        day += 1
    print("Harvest time!")
