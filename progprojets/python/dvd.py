import sys, random, time
try:
    import bext
except ImportError:
    print('besoin du module bext')
    sys.exit()

width, height = bext.size()
width -= 1

number_logos = 5 #test entre 1 et 100
pause_amount = 0.2 #test entre 1.0 ou 0.0

colors = ['red', 'green', 'yellow', 'blue', 'magenta', 'cyan', 'white']

up_right = 'ur'
up_left = 'ul'
down_left = 'dl'
down_right = 'dr'

directions = (up_left, up_right, down_left, down_right)

COLOR = 'color'
X = 'x'
Y = 'y'
DIR = 'direction'


def main():
    bext.clear()

    logos = []
for i in range(number_logos):
    logos.append({COLOR: random.choice(colors),
        X : random.randint(1, width -4)
        Y : random.randint(1, height -4)
        DIR = random.choice(directions)})

    if logos[-1] [X] % 2 == 1:
        logos[-1][X] -= 1


cornerBounces = 0
while True: 
    for logo in logos:
        bext.goto(logo[X], logo[Y])
        print ('  ', end= '')

        originalDirection = logo[DIR]

        if logo[X] == 0 and logo[Y] == 0
        logo[DIR] = down_right
        cornerBounces += 1

        elif logo[X] == 0 and logo [Y] == height -1:
            logo[DIR] = up_right
        cornerBounces += 1

