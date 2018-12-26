import cv2 as cv
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-v","--video",required=True,\
        help="Path to video")
args = vars(parser.parse_args())

cv.namedWindow("Example3",cv.WINDOW_AUTOSIZE)

cap = cv.VideoCapture(args["video"])

if cap.isOpened() == False:
    print("Error opening video")

while (cap.isOpened()):
    ret,frame = cap.read()

    if frame is None:
        break

    cv.imshow("Example3",frame)
    if cv.waitKey(33) >= 0:
        break
