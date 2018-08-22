# -*- coding: utf-8 -*-
"""
Created on Mon Jul  9 12:30:58 2018

@author: shobhit
"""

import cv2
import numpy as np

cap=cv2.VideoCapture(0)

while True:
    ret,frame=cap.read()
    show=cv2.Canny(frame,200,200)
    
    cv2.imshow('canny',show)
    
    if cv2.waitKey(1) & 0xFF== ord('f'):
        break

cap.release()
cv2.destroyAllWindows()
