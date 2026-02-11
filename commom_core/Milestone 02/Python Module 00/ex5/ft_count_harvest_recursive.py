def ft_count_harvest_recursive(day=1):
    if day == 1:
        days_to_harvest = int(input("Days until harvest: "))
    else:
        days_to_harvest = ft_count_harvest_recursive.days

    ft_count_harvest_recursive.days = days_to_harvest

    if day > days_to_harvest:
        print("Harvest time!")
        return

    print(f"Day {day}")
    ft_count_harvest_recursive(day + 1)
