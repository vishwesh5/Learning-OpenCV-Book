import cv2 as cv
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-i","--image",required=True,\
        help="Path to image")
args = vars(parser.parse_args())

img = cv.imread(args["image"])
if img is None:
    print("Image not found")
else:
    cv.namedWindow("Example2",cv.WINDOW_AUTOSIZE)
    cv.imshow("Example2",img)
    cv.waitKey(0)

    cv.destroyWindow("Example2")
