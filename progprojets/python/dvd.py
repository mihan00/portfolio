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



