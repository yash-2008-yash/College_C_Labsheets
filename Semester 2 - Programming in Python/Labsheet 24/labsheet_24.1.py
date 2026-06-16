# Python program to use pygame module and design a ball class to generate multiple objects with randomly varying features

import pygame
import random

# Initialize Pygame
pygame.init()

# Screen dimensions
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Multiple Random Balls")

# Colors
BLACK = (0, 0, 0)


# Ball class
class Ball:
    def __init__(self, x, y, radius, color, dx, dy):
        self.x = x
        self.y = y
        self.radius = radius
        self.color = color
        self.dx = dx
        self.dy = dy

    def draw(self, screen):
        pygame.draw.circle(screen, self.color, (int(self.x), int(self.y)), self.radius)

    def move(self):
        self.x += self.dx
        self.y += self.dy

        # Bounce off edges
        if self.x - self.radius <= 0 or self.x + self.radius >= WIDTH:
            self.dx = -self.dx
        if self.y - self.radius <= 0 or self.y + self.radius >= HEIGHT:
            self.dy = -self.dy


# Generate multiple balls with random features
balls = []
num_balls = 10

for _ in range(num_balls):
    x = random.randint(50, WIDTH - 50)
    y = random.randint(50, HEIGHT - 50)
    radius = random.randint(10, 40)
    color = (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255))
    dx = random.choice([-3, -2, -1, 1, 2, 3])
    dy = random.choice([-3, -2, -1, 1, 2, 3])
    balls.append(Ball(x, y, radius, color, dx, dy))

# Main game loop
running = True
clock = pygame.time.Clock()

while running:
    screen.fill(BLACK)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Move and draw each ball
    for ball in balls:
        ball.move()
        ball.draw(screen)

    pygame.display.update()
    clock.tick(60)

pygame.quit()
