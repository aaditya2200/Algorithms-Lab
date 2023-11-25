import random

def simulate_particle_movement(t):
    position = 0
    crossings = 0
    for _ in range(int(t)):
        if position == 0:
            crossings += 1
        new_position = position + 1 if random.random() < 0.5 else position - 1
        position = new_position
    return crossings

if __name__ == "__main__":
    t_values = [4e4, 9e4, 16e4]
    for t in t_values:
        crossings = [simulate_particle_movement(t) for _ in range(50)]
        average_crossings = sum(crossings) / len(crossings)
        print(f"t = {t}, average crossings = {average_crossings}")
        variance = sum((c - average_crossings)**2 for c in crossings) / len(crossings)
        print(f"t = {t}, variance = {variance}")
