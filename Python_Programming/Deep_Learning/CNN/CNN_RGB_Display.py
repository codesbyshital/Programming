# Grayscale image

from PIL import Image           # openCV
import numpy as np


img = Image.open("color.png")
img = img.resize((28,28))

pixels = np.array(img)              # convert image to pixel array

print("Image information : ")     # size of image (resolution)

print("Image Shape :",pixels.shape)
print("Height : ",pixels.shape[0]," Rows")              # height of image : row value
print("Width : ",pixels.shape[1]," Columns")            # height of image : column
print("Channels : ",pixels.shape[2]," (R,G,B)")         # channels

total = pixels.shape[0] * pixels.shape[1] * pixels.shape[2]              # 28 * 28 * 3 = 2352

print("Total Pixels : ",total)

print("Single Pixel meaning")

r = pixels[10][10][0] 
g = pixels[10][10][1]
b = pixels[10][10][2]

print("Pixel Details of 10,10 pixel is :")
print("Red : ",r)
print("Green : ",g)
print("Blue : ",b)




