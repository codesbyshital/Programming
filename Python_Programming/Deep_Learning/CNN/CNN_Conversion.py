from PIL import Image           # openCV

img = Image.open("digit.png")

print(img.size)                 # number of pixels : resolution

img = img.convert("L")          # convert to grayscale

img = img.resize((28,28))       # shrink the image change resolution

img.save("digit_28x28.png")     # save as

print(img.size)                 # changes file size
