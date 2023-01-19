import math
import numpy as np

lines = 4
lineLength = 2
diameter = 10 #26.4
weldSpacing = 2.0; #distance from center of the cell to the welds
xOffset = 13.0
yOffset = 13.0
sin60 = math.sin(math.pi / 3)
r = diameter / 2

coords = []


for cy in range(0, lineLength):
	cyCal = diameter * cy * ((cy % 2)	 * (diameter / 2))
	for wy in range(0, 2):
		wyCal = (wy - 0.5) * weldSpacing
		for cx in range(0, lines):
			cxCal = diameter * sin60 * cx
			for wx in range(0, 2):
				wxCal = (wx - 0.5) * weldSpacing
			
				x = xOffset + cxCal + wxCal
				y = yOffset + cyCal + wyCal
				coords.append((x,y))

print(coords)