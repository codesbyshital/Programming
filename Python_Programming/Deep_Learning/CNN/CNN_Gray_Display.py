# Grayscale image

from PIL import Image           # openCV
import numpy as np


img = Image.open("digit_28x28.png")

img = img.convert("L")          # convert to grayscale
img = img.resize((28,28))

pixels = np.array(img)              # convert image to pixel array

print("Image size : ",pixels.shape)     # size of image (resolution)

print("Pixel values :")
print(pixels)

# 0 = pure Black
# 255 = pure White
# 50 = dark Gray
# 120 = midium gray
# 200 = light Gray


